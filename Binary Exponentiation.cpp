// NAME OF ALLAH//

#include <bits\stdc++.h>
using namespace std;
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

typedef long long int ll;

ll powers(ll base, ll n, ll mod)
{
    ll result = 1;
    while (n)
    {
        if (n % 2 == 1)
        {
            result = (result * base) % mod;
            n--;
        }
        else
        {
            base = (base * base) % mod;
            n /= 2;
        }
    }
    return result;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        cout<<powers(n,m,1e9);
    }
    return 0;
}

//333
//2 5
//32
//10 100
//0
//2 9 
//512