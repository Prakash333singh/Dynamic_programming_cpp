#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter size if array-->" << endl;
    cin >> n;     // = 5; // size of the array
    int a[n + 1]; // {2,4,6,7,8}
    int i = 1;
    cout << "eneter arrray element-->"
         << " ";
    while (i <= n)
    {
        cin >> a[i];
        i++;
    }

    // using 1-based-indexing.....
    // n-->size of input array
    // a[n+1]-->actual array.
    // dp[n+1]-->our dp1-array

    int dp[n + 1] = {0};
    // they can also be called as base-cases.
    dp[1] = max(a[1], 0);
    dp[2] = max(a[2], dp[1]);
    // running a loop from i = 3 to i = n
    i = 3;
    while (i <= n)
    {
        dp[i] = max(a[i] + dp[i - 2], dp[i - 1]);
        i++;
    }

    cout << dp[n];
    // dp[n] is the final answer for the whole array!
    return 0;
}