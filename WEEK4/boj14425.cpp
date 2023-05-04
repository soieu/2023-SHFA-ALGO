#include <iostream>
#include <vector>
#include <map>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    map<string, int> mapmap;
    int n, m;
    int count = 0;
    cin>>n>>m;

    // 집합 s 만들기
    for(int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        mapmap[str]++;
    }

    for(int i = 0; i < m; i++)
    {
        string str;
        cin>>str;
        if(mapmap[str] == 1)
        {
            count++;
        }
    }


    cout<<count;

}