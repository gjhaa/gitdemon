#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

string  Get_Current_Date();

int main( )
{
    // 将当前日期以 20** - ** - ** 格式输出
    cout << Get_Current_Date().c_str() << endl;

    getchar();
    return 0;
}

string  Get_Current_Date()
{
    time_t nowtime;  
    nowtime = time(NULL); //获取日历时间   
    char tmp[64];   
    strftime(tmp,sizeof(tmp),"%Y-%m-%d",localtime(&nowtime));   
    return tmp;
}
