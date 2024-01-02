//
// Created by Kyle on 2024/1/2.
//

#include "WubiWord.h"
#include "stdio.h"

void sort(WubiWord* wubiWords, int count){

}

void to_string(WubiWord* pWubiWord){
    printf("size: \t%ld: code: %s, word: \t%s, priority: \t%d, note: \t%s\n", sizeof(*pWubiWord), pWubiWord->code, pWubiWord->word, pWubiWord->priority, pWubiWord->note);
}


