#include <iostream>
#include <queue>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    queue<int> q;
    int temp;
    int result = 0;

    for(int i = 0; i < 10; i++)
    {
        cin>>temp;
        q.push(temp);
    }

    while(!q.empty())
    {
        if(abs(q.front() + result - 100) > abs(result - 100))
            break;
        result += q.front();
        q.pop();
    }
    cout<<result;

    return 0;
}