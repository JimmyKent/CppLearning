//
// Created by 金国充 on 26/03/2018.
//

#include <iostream>

using namespace std;


int main(int argc, char *argv[]) {

    int i = 10;
    int *pInt = nullptr;
    //等价于
    //int *pInt
    //pInt = nullptr;
    pInt = nullptr;


    printf("%d\n", i);
    printf("%p\n", &i);
    printf("%p\n", &pInt);
    //printf("%d\n", pInt);

    int *p = &i;
    //*p = nullptr;
    printf("%p\n", &p);
    printf("%d\n", i);


    int iArr[] = {};
    int jArr[] = {};
    //iArr = jArr; //Array is not assignable


    char *pChar = "abcdef";

    pChar = "123";

    printf("%s \n", pChar);


    //a指的是数组的首元素的地址，&a代表的是数组的地址。

    int a[5] = {1, 2, 3, 4, 5};
    printf("a      = %p, \n", &a);
    printf("a[4]   = %p, \n", &a[4]);

    printf("&a + 1 = %p, \n", (&a + 1));

    int *ptr = (int *) (&a + 1);
    printf("ptr    = %p, \n", &ptr);
    printf("ptr - 1= %p, \n", &ptr - 1);
    printf("ptr    = %p, \n", &(*(ptr - 1)));

    printf("%d,%d\n", *(a + 1), *(ptr - 1));

    char a2[5] = {'A', 'B', 'C', 'D'};
    char (*p3)[5] = &a2;
    // char (*p4)[5] =  a2; 这里编译不过 这里也是指向整个数组
    //p3+1 p4+1 都指向数组之后的内存


    //char (*p5)[3] = &a; 编译不过
    //char (*p6)[3] = a; 编译不过

    //char (*p7)[10] = &a; 编译不过
    //char (*p8)[10] = a; 编译不过

    int aa[3][2] = {(0, 1), (2, 3), (4, 5)};

    int aaa = (3, 2, 1, 10);
    printf(" aaa = %d\n", aaa);

    int *pp;
    pp = aa[0];
    printf("    %d\n", pp[0]);

    return 0;
}
