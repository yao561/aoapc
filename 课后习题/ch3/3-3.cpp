#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;



int main()
{
    int a[10];
    memset(a, 0, sizeof(a));
    char* s = "123456789101112";
    for(int i = 0; i < strlen(s); i++)
    {
        a[s[i]-'0']++;
    }
    for(int i = 0; i < 10; i++)

        cout << a[i] << endl;;
    return 0;
}
