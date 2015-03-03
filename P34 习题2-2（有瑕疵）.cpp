#include<stdio.h> 
#include<math.h>

int main()
{
	int a, b, c;
	int kase = 0;
	int ok = 0;
	while(scanf("%d%d%d", &a, &b, &c)==3)
	{
		int i;
		for(i = 10; i <= 100; i++)
		{
			if(i%3 == a && i%5 == b && i%7 == c)
			{
				printf("Case %d: %d\n", ++kase, i);
				ok = 1;
				break;
			}							
		}
		if(ok == 0)
			printf("Case %d: No answer\n", ++kase);				
	}
	return 0;
	
}
