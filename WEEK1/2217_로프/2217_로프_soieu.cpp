#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, temp, siasia[100000] ={};
    vector<int> v;

    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++)
    {
        siasia[i] = v[i] * (n-i);
    }
    int *max = max_element(begin(siasia), end(siasia));

    cout<<*max;
    
    return 0;
}