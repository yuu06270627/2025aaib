//week14-1.cpp
//UVA11063 B2-Sequence Part1: Input, Part2: Output
//Part3: bigger and bigger, Part4:table[now],Part 5:for for
#include <stdio.h>

int main()
{
	int a[100];
	int N, t=1;
	while( scanf("%d",&N)== 1){//part 1
		int bad = 0;
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
			//Part3: bigger and bigge
			if(i>0) if (a[i-1] >=a[i])bad =1;
		}
		int table[20002] = {}; //Part4
		for(int i=0;i<N; i++){
			for(int j=i+1;j<N;j++){
				int now =a[i]+a[j];
				if(table[now]>0) bad = 1;
				table[now]++;
			}
		}
		if(bad==0)printf("Case #%d: It is a B2-Sequence.\n\n", t);
		else printf("Case #%d: It is not a B2-Sequence.\n\n", t);
		t++;
	}
}
