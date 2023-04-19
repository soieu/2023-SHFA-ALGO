#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    vector<int> v;

    cin>>n;
    for(int i = 0 ; i < n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());
    // -99 -2 -1 4 98
    int first = 0, second = n-1;
    int s_f = 0, s_s = n-1;
    int gap = 2000000000;

    while(first != second)
    {
        // gap 확인
        if(abs(v[first]+v[second])<gap)
        {
            gap = abs(v[first]+v[second]);
            s_f = first, s_s = second;
        }
        if(gap == 0)
            break;
        
        //투포인터 이동조건
        if(abs(v[first+1]+v[second])<abs(v[first]+v[second-1]))
        {
            first++;
        }
        else
        {
            second--;
        }

    }

    cout<<v[s_f]<<" "<<v[s_s];


    return 0;
}