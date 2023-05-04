#include <iostream>
#include <vector>
#include <map>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    map<string, int> m;
    int n, count = 0;

    cin>>n;
    
    for(int i = 0; i < n; i++)
    {
        string book;
        cin>>book;
        m[book]++;
    }

    for(auto iter : m)
    {
        count = max(count, iter.second);
    }

    for(auto iter : m) 
    {
        if(iter.second == count)
        {
            cout<<iter.first;
            return 0;
        }
    }
}