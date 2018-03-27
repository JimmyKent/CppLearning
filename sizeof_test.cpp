//
// Created by 金国充 on 08/03/2018.
//

#include <iostream>

using namespace std;

/**
 * sizeof 是关键字
 * @return
 */

int b[100];
int main() {
    int i = 0;
    cout << sizeof(int) << "\n";//4
    cout << sizeof(i) << "\n";//4
    //cout << sizeof int << "\n"; error
    cout << sizeof i << "\n";//4

    int *p = nullptr;//8
    cout << sizeof(p) << "\n";//4
    cout << sizeof(*p) << "\n";//4

    int a[100];
    cout << sizeof(a) << "\n";//400
    cout << sizeof(a[100]) << "\n";//4
    cout << sizeof(a[101]) << "\n";//4
    cout << sizeof(&a) << "\n";//8
    cout << sizeof(&a[0]) << "\n";//8

    cout << sizeof(b)<<"\n";//400
}