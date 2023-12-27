#include "stdio.h"
#include "time.h"
#include <sys/time.h>


int main() {

    struct timeval start, stop;
    gettimeofday(&start, NULL);
    double sum = 0;
    for (double i=0;i<1000000000; i=i+1){
        sum+=i;
    }
    gettimeofday(&stop, NULL);

    float diffMs = (float )(stop.tv_usec - start.tv_usec)/1000;
    float difS = (float )(stop.tv_sec - start.tv_sec);
    printf("s: %f, ms: %f\n", difS, diffMs);

    if (diffMs < 0){
        difS = difS - 1 + (1 * 1000 + diffMs)/1000;
    } else {
        difS = difS + diffMs/1000;
    }
    printf("sum = %.0f\n", sum);
    printf("diff is : %.3fs", difS);

}


