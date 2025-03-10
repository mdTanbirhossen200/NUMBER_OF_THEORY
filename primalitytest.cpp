  // THE NAME OF ALLAH//

#include<bits\stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


bool prime(int n)
{
    if(n < 2)
    return false;

    if(n <= 3)
    return true;

    if(n % 2 == 0)
    return false;

    for(int i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0 )
        return false;
    }
    return true;
}

int main()
{
    Faster();
    int n;
    while(cin >> n)
    {
        if(prime(n) == true)
        cout<<"Prime"<<endl;

        else
        cout<<"Not Prime"<<endl;
    }
    return 0;
}