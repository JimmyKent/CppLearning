//
// Created by 金国充 on 08/03/2018.
//

#include <iostream>

using namespace std;

extern int i;
//extern int i = 10; 编译不过

extern double j;//可以编译过 结果是3.000000




int main() {
    cout << i << "\n";
    j = 3.0;
    printf("%lf\n", j);//3.000000

    //int heightOrLow = checkSystemHeightOrLow();


    //cout << heightOrLow << "\n";


    int a[5] = {1, 2, 3, 4, 5};
    int *ptr1 = (int *) (&a + 1);
    int *ptr2 = (int *) (a + 1);

    printf("%d\n", a[-1]);//1
    printf("%x, %x \n", ptr1[-1], *ptr2);//5, 2


    enum enum_test {
        GREEN = -1,
        BLUE,// 0
        RED = 0,
        YELLOW, // 1
        WHITE = 10,
    } enum_test2;
    enum_test enum_test1;
    //printf("%zu\n", sizeof(enum_test2));//4

    int x;
    int ii = 3;
    x = (++ii, ii++, ii + 10);
    int aa = 1, bb = 2;
    printf("x %d\n", aa++ + ++bb);

    printf("3/(-2) %d\n", 3 / (-2));
    printf("-3/(2) %d\n", -3 / (2));
    printf("3 求余 (-2) %d\n", 3 % (-2));
    printf("-3 求余 (2) %d\n", -3 % (2));

    //64位系统下,不管什么指针类型,都是8byte
    printf("%zu\n", sizeof(void *));//8 64位系统
    printf("%zu\n", sizeof(int *));//8 64位系统
    return 0;

}


