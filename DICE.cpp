#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a;
    a = 7 - n % 6;
    if ( a != 7)
    cout << (n / 6) + (7 - n % 6);
    else cout << (n / 6);
    cout << " ";
    cout << n * 6;
    return 0;
}

