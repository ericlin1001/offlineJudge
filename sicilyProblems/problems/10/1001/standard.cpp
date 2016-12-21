#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2, tem;
    int len1, len2, i, j, n;
    cin >> str1;
    cin >> str2;
    //分别求出俩个大整数的长度
    len1 = str1.size();
    len2 = str2.size();
    //将位数高的字符串放到str1中，将位数低的字符串放到str2中
    if (len1<len2)
    {
        tem = str1;
        str1 = str2;
        str2 = tem;
        i = len1;
        len1 = len2;
        len2 = i;
    }
    //k中保存来至低位的进位，开始的时候应该为0
    int k = 0;
    string str3 = str1 + "0";

    //该for循环实现了逐位相加的效果，注意循环的条件
    for (i = len1 - 1, j = len2 - 1; i>-1 && j>-1; i--, j--)
    {
        //将字符转化为数字判断n的大小
        n = (str1[i] - '0') + (str2[j] - '0') + k;
        if (n<10)
        {
            //将数字再次转化为字符保存在str3中
            str3[i + 1] = n + '0';
            k = 0;
        }
        else
        {
            str3[i + 1] = n % 10 + '0';
            k = n / 10;
        }
    }
    //位数少的字符可能已经完成运算，但是位数多的字符串可能还存在没有运算的位数，while就是解决这个问题的
    while (i>-1)
    {
        n = str1[i] - '0' + k;
        if (n<10)
        {
            str3[i + 1] = n + '0';
            k = 0;
        }
        else
        {
            str3[i + 1] = n % 10 + '0';
            k = n / 10;
        }
        i--;
    }
    //在最后一次要将来自低位的进位加到str3中
    str3[i + 1] = k + '0';
    //以下功能是为打印服务的，若前几位是字符0，则不打印
    for (i = 0; i < len1 + 1; i++)
    {
        if (str3[i] != '0')
            break;
    }
    for (; i < len1 + 1; i++)
        cout << str3[i];

    cout << endl;
    return 0;
}