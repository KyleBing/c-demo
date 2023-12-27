//
// Created by Administrator on 2023/12/27.
//

#ifndef MAIN_BILL_H
#define MAIN_BILL_H

typedef struct Bill {
    float price;
    char name[100];
} Bill;

void to_string(Bill* bill);
void to_string_bill_list(Bill* bill);

#endif //MAIN_BILL_H
