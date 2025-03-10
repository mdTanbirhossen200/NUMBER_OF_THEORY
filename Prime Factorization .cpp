// NAME OF ALLAH

#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

 
void printPrimeFactors(int n)
{
    while (n % 2 == 0)
    {
        cout << "2\t";
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << "\t";
            n = n / i;
        }
    }
    if (n > 2)
        cout << n << "\t";
}
int main()
{
    int n = 24;
    cout << "Prime factors of " << n << " are :\t";
    printPrimeFactors(n);
    return 0;
}
