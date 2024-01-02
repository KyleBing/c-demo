#include "WubiWord.h"


int main() {
    WubiWord word1 = {
            .code = "ggtt",
            .word = "五笔",
            .priority = 90,
            .note = "五笔词条"
    };
    WubiWord word2 = {
            .code = "nnqi",
            .word = "快乐",
            .priority = 80,
            .note = "快乐词条"
    };

    to_string(&word1);
    to_string(&word2);
}


