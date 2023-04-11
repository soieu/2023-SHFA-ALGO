#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m, temp, sum;
	int x1, y1, x2, y2;
	int map[1025][1025] = {0,};
	int map_sum[1025][1025] = {0,};

	cin >> n >> m ;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> temp;
			map[i][j] = temp;
			if(j == 1)
				map_sum[i][j] = temp;
			else
				map_sum[i][j] = map_sum[i][j-1] + temp;
		}
	}
	for (int i = 0; i < m; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		sum = 0;
		for (int j = x1; j <= x2; j++)
		{
			sum += map_sum[j][y2] - map_sum[j][y1-1];
		}
		cout << sum << "\n";
	}
	return 0;
}