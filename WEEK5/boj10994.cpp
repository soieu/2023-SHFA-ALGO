#include <iostream>
#include <vector>
using namespace std;

// 1 -> 5(1+4*1) -> 9(1+4*2) -> 13(1+4*3) -> 17 ...
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;

    cin>>n;

    if(n ==1)
    {
        cout<<"*";
        return 0;
    }
    for(int i = 0; i < 1+4*(n-1); i++)
    {
        cout<<"*";
        if (i == 0 || i == 4*(n-1) )
        {
            for(int j = 0; j< 4*(n-1)-1; j++)
            {
                cout<<"*";
            }
        }
        cout<<"*\n";
    }

    return 0;
}