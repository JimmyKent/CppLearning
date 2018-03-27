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


    //验证会不会出现 abcd\0ef这种情况?
    //因为char本质是数组,存在容器长度和有效长度的不同.容器长度-有效长度,其余填充\0
    char c4[5] ;// 等价 char c4[5] ={'\0'}
    c4[0] = '1';
    c4[1] = '\0';
    c4[2] = '2';

    printf("c4的容器大小: %zu \n", sizeof(c4));
    printf("c4的有效大小: %zu \n", strlen(c4));
    printf("c4[3] %s \n", c4[3]);//char c4[5] = {'\0'}; c4[3] (null)
    printf("c4[3] %d \n", c4[3]);//char c4[5] = {'\0'}; c4[3] 0

    char c5[5];
    strcpy(c5, c4);
    printf("中间有\\0的 char数组 c4 : %s \n", c4);
    printf("strcpy中间有\\0的 char数组 c5 : %s \n", c5);

    return 0;
}