#include <iostream>
#include <vector>
using namespace std;
int dp[1001][1001] = {
	0,
};
int map[1001][1001] = {
	0,
};

/*
(1,1) (1,2) (1,3) (1,4)
(2,1) (2,2) (2,3) (2,4)
(3,1) (3,2) (3,3) (3,4)
(4,1) (4,2) (4,3) (N,M)
*/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin>>n>>m;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin>>map[i][j];
		}
	}

	// 기본 값들 우선 세팅 (1,c) 혹은 (r,1)
	dp[1][1] = map[1][1];
	for(int i = 2; i <= n; i++)
	{
		dp[i][1] = dp[i-1][1] + map[i][1];
	}
	for(int i = 2; i <= m; i++)
	{
		dp[1][i] = dp[1][i-1] + map[1][i];
	}

	// (1,c) 혹은 (r,1) 제외한 방들 dp 세팅
	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; j <= m; j++)
		{
			dp[i][j] = max(dp[i-1][j-1], max(dp[i-1][j], dp[i][j-1])) + map[i][j];
		}
	}

	cout<<dp[n][m];

	return 0;
}