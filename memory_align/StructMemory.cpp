//
// Created by 金国充 on 27/03/2018.
//
#include <iostream>

using namespace std;


int main(int argc, char *argv[]) {
    struct A {
        char array[33];
    };

    struct B {
        A a;//[0-32]
        int i1;//[36-39]
        double d1;//[40-47]
    };

    struct B b;

    printf("%zu\n", sizeof(A));//33
    printf("%zu\n", sizeof(B));//48
    printf("%p\n", &b.a);//0x7fff5339aac8
    printf("%p\n", &b.i1);//0x7fff5339aaec
    printf("%p\n", &b.d1);//0x7fff5339aaf0

    struct C{
        int i;
        char c;
        double d;
    };

    struct D {
        int i1;//[0,3]
        C c;//[4,19]
        int i2;//[24,31]
    };

    printf("%zu\n", sizeof(C));//16
    printf("%zu\n", sizeof(D));//32
    printf("%p\n", &b.a);//0x7fff5e557ac8
    printf("%p\n", &b.i1);//0x7fff5e557aec
    printf("%p\n", &b.d1);//0x7fff5e557af0

}
