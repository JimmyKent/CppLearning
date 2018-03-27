//
// Created by 金国充 on 27/03/2018.
//

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
/**
 * strcpy 的一些验证,需要新建main来测试,内存连续
 * https://blog.csdn.net/u012889884/article/details/44627795
 * 现在的测试结果,应该是存在内存对齐的问题,所以导致有空余的空内存
 * @return
 */
int main()
{
    char s[] = "123456789";
    char d[] = "123";
    strcpy(d,s);
    cout<<"d:"<<d<<endl;
    cout<<"s:"<<s<<endl;
    cout<<&s<<endl;
    cout<<&d<<endl;
    return 0;
}