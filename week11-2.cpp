///week11-2.cpp
///�禡�ŧi �禡�w�q �禡�I�s
#include<stdio.h>

int addnum(int a, int b)
{
    printf("�{�b�i�J assnum() ��ܸ�, a:%d b:%d\n",a, b);
    int x;
    x = a + b;
    printf("���ۥ[�� �o��ƭ� %d �Nreturn�^��\n",x);
    return x;
}

int main()
{
    int ans = addnum(10,30);
    printf("%d", ans);
}
