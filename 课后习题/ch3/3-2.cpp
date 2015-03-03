#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;



int main()
{
    double ok = 0;
    char* s = "C6H5OH";
    double tot = 0;
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == 'C')
            ok = 12.01;
        else if(s[i] == 'H')
            ok = 1.008;
        else if(s[i] == 'O')
            ok = 16.00;
        else if(s[i] == 'N')
            ok = 14.01;
        else
            ok*=(s[i]-'0'-1);
        tot += ok;
    }
    cout << tot;
    return 0;
}
