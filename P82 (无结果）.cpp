#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n, k, m;//�ʼ��n���� 
	scanf("%d%d%d",&n,&k,&m);
	int A[10];
	int left=n;
	int i;
	for(i=1;i<=n;i++)//������һ������ ����ŵ������ڻ����ڵ��˱�� 
		A[i]=i;
	int a=1,b=n;//a,b��������Ա����ָ��λ�� 
	while(left)
	{
		int x=k, y=m;//x��y�������� 		
				
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
		if(a==b)//���������Աѡ����һ��λ�� 
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
