#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int T;
	cin>>T;

	while(T--)
	{
		int dp[40000] = {0,};
		int n, m, temp;
		cin>>n>>m;
		vector<int> a_v;
		vector<int> b_v;
		vector<int> b_fake;
		int result = 0;
		for(int i = 0 ; i < n; i++)
		{
			cin>>temp;
			a_v.push_back(temp);
		}
		for(int i = 0 ; i < m; i++)
		{
			cin>>temp;
			b_v.push_back(temp);
		}
		

		for(int i = 0 ; i < n; i++)
		{
			int num = a_v[i];
			if(dp[num] != 0)
			{
				result += dp[num];
				continue;
			}

			b_fake = b_v;
			b_fake.push_back(num);
			sort(b_fake.begin(), b_fake.end());
			int a = find(b_fake.begin(), b_fake.end(), num) - b_fake.begin();
			result += a;
			b_fake.erase(remove(b_fake.begin(), b_fake.end(), num), b_fake.end());
			dp[num] = a;
		}
		cout<<result<<"\n";

		a_v.clear();
		b_v.clear();
		result = 0;
	}



	return 0;
}