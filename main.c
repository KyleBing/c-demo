#include "string.h"
#include "stdio.h"
#include "stdlib.h"
#include "Bill.h"
#include "time.h"
#include "string.h"


int main() {

    srand((unsigned int) time(NULL));

    Bill *billArray = malloc(100 * sizeof(Bill));

    float maxPrice = 100;
    float sum = 0;
    for (int i = 0; i < 10; i++) {
        sprintf((billArray + i)->name, "物品-%d", i);
        (billArray + i)->price = (float) rand() / RAND_MAX * maxPrice;
        to_string_bill_list((billArray + i));

        // sum
        sum = sum + (billArray + i)->price;
    }

    printf("------------------\n");
    printf("总计\t\t ￥ %.2f\n", sum);
}


