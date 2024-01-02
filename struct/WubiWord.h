//
// Created by Kyle on 2024/1/2.
//

#ifndef C_DEMO_WUBIWORD_H
#define C_DEMO_WUBIWORD_H
typedef struct WubiWord{
    char code[8];
    char word[20];
    int priority;
    char note[20];

} WubiWord;

void sort(WubiWord* wubiWords, int count);
void to_string(WubiWord* pWubiWord);
char* to_yaml_string(WubiWord* pWubiWord);

#endif //C_DEMO_WUBIWORD_H
