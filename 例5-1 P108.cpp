#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 10000;

int main()
{
	int n, q, x, a[maxn], kase=0;
	while(scanf("%d%d", &n, &q) == 2 && n)
	{
		int i;
		for(i = 0; i < n; i++)
			scanf("%d",&a[i]);
		
		printf("CASE# %d\n",++kase);
		sort(a, a+n);
		while(q--)
		{
			scanf("%d", &x);
			int q = lower_bound(a, a+n, x) - a;
			if(a[q]==x)
				printf("%d found at %d\n", x, q+1);
			else
				printf("%d not found\n", x);
		}
	}
	return 0;
}
