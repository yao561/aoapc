#include<stdio.h> 
#include<math.h>

int main()
{
	int a, b, c;
	int kase = 0;
	while(scanf("%d%d%d", &a, &b, &c)==3&&(a||b||c))
	{
		int before = a / b;
		long long int after = a * pow(10, c) / b - before * pow(10, c);
		int second = a * pow(10, c+1) / b - before * pow(10, c+1);
		second %= 10;
		if(second>=5)
			after++;
		printf("%d.%d\n", before, after);
	}
	return 0;
	
}
