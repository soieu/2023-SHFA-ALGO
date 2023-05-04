// 이것도 바킹독봤어요... 근데 백트래킹 처음 푼단말이에요........
#include <iostream>
#include <vector>
using namespace std;

bool isused1[40];
bool isused2[40];
bool isused3[40];

int cnt = 0;
int n;


/*
 1. 한 행이랑 열이 다 0이면 돌을 놓고 다음 행(재귀)시작

*/
void func(int cur) // cur번째 행에 말을 배치
{
    if(cur == n)
    {
        cnt++;
        return;
    }
    for(int i = 0; i < n; i++)
    {
        if(isused1[i] || isused2[i+cur] || isused3[cur-i+n-1])
            continue;
        isused1[i] = 1;
        isused2[i+cur] = 1;
        isused3[cur-i+n-1] = 1;
        func(cur+1);
        isused1[i] = 0;
        isused2[i+cur] = 0;
        isused3[cur-i+n-1] = 0;
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>n;
    func(0);
    cout<<cnt;
    return 0;
}