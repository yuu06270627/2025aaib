///week11-1.cpp
///����SOITO107
#include<stdio.h>
int main()
{
    printf("�п�J1422:");
    int n;
    scanf("%d", &n);
    ///�����̤j���?
    int ans = 0;
    while(n>0){
        printf("�{�b���X�Ӫ���:%d\n",n%10);
        if(n%10 > ans) ans = n%10;
        n = n / 10;
    }
    printf("���̤j���֬O:%d\n",ans);
}
