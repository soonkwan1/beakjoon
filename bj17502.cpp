#include <iostream>
#include <algorithm>
#include <string>
#include <functional>
#include <string>
#include <cmath>
#include <bitset>

using namespace std;

int     main()
{
    int n;
    string s;
    cin >> n >> s;

    if (n % 2 == 1 && s[n / 2] == '?')
        s[n / 2] = 'a';

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == '?' && s[n - i - 1] == '?')
        {
            s[i] = 'a';
            s[n - i - 1] = 'a';
        }
        else if (s[i] == '?')
            s[i] = s[n - i - 1];
        else if (s[n - i - 1] == '?')
            s[n - i - 1] = s[i];
    }
    
    cout << s;

    return 0;
}
