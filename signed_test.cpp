//
// Created by 金国充 on 08/03/2018.
//

#include <iostream>

using namespace std;

int main() {
    char c[1000];
    for (int i = 0; i < 1000; ++i) {
        c[i] = -1 - i;
    }
    cout << strlen(c) << "\n";//255

    char c2[3];
    c2[0] = 1;
    c2[1] = 0;
    c2[2] = 2;
    printf("strlen(c2) %zu\n", strlen(c2));//1
    printf("c2[1] %d\n", c2[1]);//0
    printf("c2[2] %d\n", c2[2]);//2

    char c4[3];
    c4[0] = '1';
    c4[1] = '0';
    c4[2] = '2';
    printf("strlen(c4) %zu\n", strlen(c4));//4
    printf("c4[1] %d\n", c4[1]);//48
    printf("c4[2] %d\n", c4[2]);//50

    //-0 +0 在内存中怎么储存
    int zero1 = -0;
    int zero2 = +0;

    int i = -20;
    unsigned int j = 10;

    cout << i + j << "\n";//4294967286

    /*for (unsigned int k = 2; k >= 0; k--) {//死循环
        printf("%u\n", k);
    }*/

    //case 后面可以跟const修饰的只读变量
    /*const int a = 0;

    int caseInt = 0;
    switch (caseInt) {
        case a:
            cout << "123" << "\n";//4294967286
            break;
        default:
            break;
    }*/



    const volatile int aaa = 10;

}