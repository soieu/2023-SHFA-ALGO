#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, temp;
    vector<int> v;
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    cout<<v[(n-1)/2];
    return 0;
}