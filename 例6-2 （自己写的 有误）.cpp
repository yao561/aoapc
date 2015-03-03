#include<cstdio>
#include<stack>
using namespace std;
const int MAXN = 1000 + 10;

int n, target[MAXN];

int main()
{
	scanf("%d",&n);
	stack<int> s;
	int A = 1;
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &target[i]);
	}
	int i = 1;
	int ok = 1;
	while(i <= n)
	{
		if(A == target[i])
		{	A++;i++;}	
		else if(!s.empty() && s.top() == A)
		{
			s.pop();			
			A++;
		}	
		else if(A <= n)
		{
			s.push(target[i]);
			i++;
		}
		else
		{
			ok = 0;
			break;
		}
		
	}
	printf("%s\n", ok ? "Yes" : "No");
	return 0;
}
