///week10-2.cpp
#include <stdio.h>
int main()
{

    printf("�п�J�@�ӼƦr:");
    int n;
    scanf("%d", &n);
    printf("�A��J�F %d\n",n);
    ///printf("�L���Ӧ�ƬO %d\n",n %10);
    ///printf("�L���Q��ƬO %d\n",n/10 %10);
    ///printf("�L���d��ƬO %d\n",n/10 /10 %10);
    while(n>0){
        printf("�{�b��� %d\n", n, n%10);
        n = n / 10;
    }
}
