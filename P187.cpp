#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm> 
using namespace std;



int main()
{
	int n;
	while(cin >> n)
	{
		int A[100];
		for(int i = 0; i < n; i++)
		{
			cin >> A[i];			
		}
		sort(A, A+n);
		do{
			for(int i = 0; i < n; i++)
			{
				cout << A[i] << " ";
			}
			cout << "\n";
		}while(next_permutation(A, A+n));
		
		
		
	}
	
	

	return 0;
}
