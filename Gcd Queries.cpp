// NAME OF ALLAH//

#include <bits\stdc++.h>
using namespace std;
#define faster()                   \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define endl '\n'

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n];

        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        int pre[n + 2];
        int pos[n + 3];

        pre[0] = 0;
        for (int i = 1; i <= n; i++)
            pre[i] = gcd(pre[i - 1], arr[i]);

        pos[n + 1] = 0;
        for (int i = n; i >= 1; i--)
        {
            pos[i] = gcd(pos[i + 1], arr[i]);
        }
        while (q--)
        {
            int left, right;

            cin >> left >> right;
            int ans = gcd(pre[left - 1], pos[right + 1]);
            cout << ans << endl;
        }
    }
    return 0;
}

// 1
// 3 3
// 2 6 9
// 1 1
// 2 2
// 3 3
