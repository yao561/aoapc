#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n, k, m;//最开始有n个人 
	scanf("%d%d%d",&n,&k,&m);
	int A[10];
	int left=n;
	int i;
	for(i=1;i<=n;i++)//创建了一个数组 里面放的是现在还存在的人编号 
		A[i]=i;
	int a=1,b=n;//a,b是两个官员现在指的位置 
	while(left)
	{
		int x=k, y=m;//x和y用来计数 		
				
		while(x--)
		{
			
			do a++;
				while(A[a]==0);
			if(a>=n)
				a-=n;
			if(A[a])
			{
				x--;
				a++;
			}
			
			if(a>=n)
				a-=n;
				
		}
		while(y--)
		{
			
			do	b--;
				while(A[b]==0);
			if(b<0)
				b+=n;
			if(A[b]!=0)
			{
				y--;
				b--;
			}
			
			
			
		}	
		if(a==b)//如果两个官员选到了一个位置 
		{
			printf(" %d,",A[a]);
			A[a] = 0;
			left--;					
		}
		else
		{
			printf("%d %d,",A[a],A[b]);
			A[a] = 0;
			A[b] = 0;
			left-=2;
		}				
	} 
	
	
	return 0;
}
