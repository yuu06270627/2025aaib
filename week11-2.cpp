///week11-2.cpp
///函式宣告 函式定義 函式呼叫
#include<stdio.h>

int addnum(int a, int b)
{
    printf("現在進入 assnum() 函示裡, a:%d b:%d\n",a, b);
    int x;
    x = a + b;
    printf("兩樹相加後 得到數值 %d 將return回傳\n",x);
    return x;
}

int main()
{
    int ans = addnum(10,30);
    printf("%d", ans);
}
