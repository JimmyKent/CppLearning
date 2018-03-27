
#include <iostream>

using namespace std;

static int j;

void fun1(void) {
    static int i = 0;
    i++;
}

void fun2(void) {
    j = 0;
    j++;
}

int main() {
    for (int k = 0; k < 10; k++) {
        fun1();
        fun2();

    }
    cout << j << "\n";
    //j == 1   i == 10
    return 0;
}