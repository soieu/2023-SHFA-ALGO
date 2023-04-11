#include <iostream>
#include <vector>
using namespace std;
int dp[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, temp, m;

    cin >> n;
    dp[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin>>temp;
        dp[i] = dp[i-1] + temp;
    }
    cin>>m;
    for(int i=0; i < m; i++)
    {
        int a, b;
        cin>>a>>b;
        cout<<dp[b] - dp[a-1]<<"\n";
    }

    return 0;
}