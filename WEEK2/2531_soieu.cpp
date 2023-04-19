#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, d, k, c, temp, result = 0;
    cin>>n>>d>>k>>c;
    queue<int> q;
    queue<int> q2;
    vector<int> v;

    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        q.push(temp);
    }

    for(int i = 0; i < n; i++)
    {
        int count = 0;
        q2 = q;
        for(int j = 0; j < k; j++)
        {
            v.push_back(q2.front());
            q2.pop();
        }
        if(find(v.begin(), v.end(), c)-v.begin() == k) // 쿠폰에 해당하는 초밥이 없는 경우
        {
            count++;
        }

        v.erase(unique(v.begin(),v.end()),v.end());

        count += v.size();

        if(result < count)
        {
            result = count;
        }
        if(result == k+1)
            break;

        q.push(q.front());
        q.pop();
        v.clear();
    }

    cout<<result;

    return 0;
}