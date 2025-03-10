 //THE NAME OF ALLAH


#include<bits/stdc++.h>
using  namespace  std;

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void sieve(int n)
{
    int prime[n+3];
	memset(prime,0,sizeof(prime));

	for(int i=2;i*i<=n;i++)
	{
		if(prime[i]==0)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				prime[j]=1;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==0)cout<<i<<" ";
	}
	cout<<endl;
}
int main()
{
    faster();
	while(1)
    {
        int n;
        cin>>n;
        sieve(n);
    }
	return 0;
}
