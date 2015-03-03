#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;



int main()
{
    int n;
    cin >> n;

    char s[10][80];
    for(int i = 0; i < n; i++)
        cin >> s[i];


    int a[n];
    memset(a, 0, sizeof(a));
    int cur = 0;
    while(cur < n)
    {
        int ok = 0;
        for(int i = 0; i < strlen(s[cur]); i++)
        {
            if(s[cur][i] == 'O')
                ok++;
            else
                ok = 0;
            a[cur] += ok;
        }
        cur++;
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << endl;
    return 0;
}
