#include <cstdio>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c;
	int count = 0;
	while((cin >> a >> b >> c)&&(a||b||c))
	{
		
		
		
		int temp = (a * pow(10,c))/b;
		if((temp%10) >= 5)
			temp++;
		printf("Case %d: %d.%d\n", ++count, (int)a/b, temp%(int)pow(10,c));
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
} 
