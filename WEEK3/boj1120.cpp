#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string a;
    string b;
    int maxx = 0;

    cin>>a>>b;

    int ckdl = b.length() - a.length();
    for(int i = 0; i <= b.length() - a.length(); i++)
    {
        int count = 0;
        for(int j = 0; j < a.length(); j++)
        {
            if(a[j]==b[i+j])
            {
                count++;
            }
        }
        maxx = max(count, maxx);
    }

    cout<<b.length() - maxx-ckdl;
    return 0;
}