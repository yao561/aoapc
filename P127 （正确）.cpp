#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


const int maxcol = 60;
const int maxn = 100 + 5;
string filenames[maxn];





void print(const string& s, int len, char extra)
{
	cout << s;
	for(int i = 0; i < len - s.length(); i++)
		cout << extra;
}


int main()
{
	int n;
	while(cin >> n)
	{
		int M = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> filenames[i];
			M = max(M, (int)filenames[i].length());			
		}
			
		sort(filenames, filenames + n);	
		int cols, rows;
		cols = (maxcol - M)/(M + 2) + 1;
		rows = n / cols +((n%cols)?1:0);
		print("", maxcol, '-');	
		cout << "\n";
		int idx;
		for(int r = 0; r < rows; r++)
		{
			for(int c = 0; c < cols; c++)
			{
				idx = rows * c + r + 1;
				print(filenames[idx], (c == cols-1 ? M : M + 2),' ');
			}
			cout << "\n";
		}	
			
			
			
		
	}
	

	
	
	
	
	
	
	
	
	
	return 0;
} 
