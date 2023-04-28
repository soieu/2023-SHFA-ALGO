#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, k; // n : 동전 갯수, k : 목표 금액
    cin>>n>>k;
    vector<int> v; // 동전의 유형 저장

    for(int i = 0; i <n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    sort(v.rbegin(), v.rend());// 그리디 사용하기 위해 역순 배열
    
    for(int i = 0; i < n; i )

    return 0;
}