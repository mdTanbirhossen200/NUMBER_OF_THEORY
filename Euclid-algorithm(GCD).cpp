// NAME OF ALLAH//

#include <bits\stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = gcd(a, b);
        cout << ans << endl;
    }
    return 0;
}

//1111
//4 40