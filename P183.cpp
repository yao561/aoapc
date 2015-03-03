#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int k;
	
	while(cin >> k)
	{
		int count = 0;
		int a[100], b[100];
		for(int y = k+1; y <= 2*k; y++)
		{
			int x = k*y/(y-k);
			
			//for(int x = k*y/(y-k)+1; x >= k*y/(y-k)-1; x--)
				if(k*(x+y)==x*y)
				{
					a[count] = x;
					b[count] = y;
					count++;
				}
					
				
		}
		cout << count << "\n";
		for(int i = 0; i < count; i++)
			cout << "1/" << k << " = " << "1/" << a[i] << " + " << "1/" << b[i] << "\n";
	}
	return 0;
}
