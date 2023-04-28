#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, kjm, lhs;
    cin>>n>>kjm>>lhs;

    int minn = min(kjm,lhs);
    int maxx = max(kjm,lhs);
    int count = 1;
    while(true) // 16 8 -> 4 9 -> 5 -> 3 ->  //12 ->1 34 ->2 56 ->3 78 ->4 910 -> 5
    { 
        if(minn % 2 == 1 && maxx == minn+1)
            break;
        else
        {
            minn = (minn+1)/2;
            maxx = (maxx+1)/2;
            count++;
        }
    }
    cout<<count;

    return 0;
}