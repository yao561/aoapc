#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm> 
using namespace std;

/*void print_subset(int n, int * A, int cur)
{
	for(int i = 0; i < cur; i++)
		cout << A[i] << " ";
	cout << "\n";
	int s = cur ? A[cur - 1] + 1 : 0;
	for(int i = s; i < n; i++)
	{
		A[cur] = i;
		print_subset(n, A, cur + 1);
	}
	
	
	
	
	
}*/

void print_subset(int n, int *B, int cur)
{
	if(cur == n)
	{
		for(int i = 0; i < cur; i++)
		{
			
			if(B[i])
				cout << i << " ";
		}
		cout << "\n";
		return;
	}
	B[cur] = 1;
	print_subset(n, B, cur + 1);
	B[cur] = 0;
	print_subset(n, B, cur + 1);
	
	
	
	
}



int main()
{
	int n;
	while(cin >> n)
	{
		int a[100];
		
		print_subset(n, a, 0);
		
		
		
		
	}
	
	
	
	
	
	
	
	

	return 0;
}
