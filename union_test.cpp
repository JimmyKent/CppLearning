//
// Created by 金国充 on 09/03/2018.
//
#include <stdio.h>

/**
 * 若处理器是 Big_endian 的，则返回 0;
 * 若是 Little_endian 的，则返回 1。
 * @return
 */
int checkSystemHeightOrLow() {
    union check {
        int i;
        char ch;
    } c;
    c.i = 1;
    return (c.ch == 1);
}


int main() {
    int height = checkSystemHeightOrLow();
    printf("大小端 %d", height);//1
}