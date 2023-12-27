//
// Created by Administrator on 2023/12/27.
//

#include "Bill.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
void to_string(Bill* bill){
    printf("{ price: %.2f, name: %s}", bill->price, bill->name);
}

float random_price(float maxPrice){
    srand((unsigned int)time(NULL));
    return maxPrice * rand() / RAND_MAX;
}

