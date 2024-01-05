//
// Created by Administrator on 2023/12/27.
//

#include "Bill.h"
#include "stdio.h"

void to_string(Bill* bill){
    printf("{ name: %s, price: %.2f}\n", bill->name, bill->price );
}
void to_string_bill_list(Bill* bill){
    printf("%s \t $ %.2f\n", bill->name, bill->price );
}






