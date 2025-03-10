//  NAME OF ALLAH//

#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
typedef long long int ll;

set<ll>s;
 
void countDivisors(ll n)
{
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
                ll x=i;
                ll y=n/i;
                s.insert(x);
                s.insert(y);
        }
    }
}
 
int main()
{
    ll n,k;
    cin>>n>>k;
    countDivisors(n);
 
 
    vector<ll>v;
    v.assign(s.begin(),s.end());
    if(k>v.size())cout<<-1<<endl;
    else cout<<v[k-1]<<endl;
}
 
// 4 2