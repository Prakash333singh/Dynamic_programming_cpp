#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5; // size of the array
    int a[5] = {6, 7, 3, 2, 2};

    int dp[n + 1] = {0}; // dp array
    int i = 0;
    while (i <= n - 1)
    { // 0<=4
        if (i == 0)
        {
            dp[i] = a[i]; // dp[0]=6
        }
        else
        {
            dp[i] = a[i] + dp[i - 1]; // 7+6=13
        }
        i++;
    }
    int q = 4;               // number of queries
    int w[4] = {0, 3, 4, 2}; // query array
    i = 0;
    while (i <= q - 1)
    {
        int query;
        query = w[i];                                 // 0
        cout << dp[query] << "                     "; // answering each query in O(1)
        cout << endl;
        i++;
    }
    return 0;
}