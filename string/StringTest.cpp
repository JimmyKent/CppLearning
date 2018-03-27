//
// Created by 金国充 on 27/03/2018.
//

#include <iostream>

using namespace std;

#include <stdio.h>
#include <string.h>

int main() {

    char c1[] = "abcd";
    printf("\\0结尾 sizeof(c1) : %zu \n", sizeof(c1));

    char c2[] = {'a', 'b', 'c', 'd'};
    printf("没有\\0结尾 sizeof(c2) : %zu \n", sizeof(c2));

    char *pC1 = nullptr;
    pC1 = c1;//指向c1第一个元素的地址
    printf("指针中内容的大小: %zu \n", sizeof(*pC1));
    printf("指针的大小: %zu \n", sizeof(pC1));

    char (*pC2)[5] = nullptr;//这里的5不能省略,会编译不过
    pC2 = &c1;//指向c1数组的首地址
    printf("指针中内容的大小: %zu \n", sizeof(*pC2));
    printf("指针的大小: %zu \n", sizeof(pC2));


    char c3[] = {};
    strcpy(c3, c1);
    printf("strcpy c3 : %s \n", c3);
    printf("strcpy c3[0]: %c \n", c3[0]);
    printf("strcpy c1: %s \n", c1);
    printf("sizeof(c3) : %zu \n", sizeof(c3));
    printf("c1地址 : %p \n", &c1);//0x7fff513e2af7
    printf("c3地址 : %p \n", &c3);//0x7fff513e2adf

    //strcpy 的一些验证,需要新建main来测试,内存连续
    //https://blog.csdn.net/u012889884/article/details/44627795
    //现在的测试结果,应该是存在内存对齐的问题,所以导致有空余的空内存



    return 0;
}