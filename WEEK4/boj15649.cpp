// 이실직고 합니다.. 바킹독 보고 풀었습니다... 배낀건 아니고 한번 보고 안보고 품..
#include <iostream>
#include <vector>
using namespace std;

int n, m; // n : 1부터 n까지의 자연수 m : 수열의 길이

int arr[10];
bool isused[10] = {
    0,
};

void func(int k)
{
    if (k == m) // m번째 수까지 수열이 다 채워지면 실행
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!isused[i]) // 현재 수열에서 i가 사용되지 않고있으면
        {
            arr[k] = i;
            isused[i] = 1;
            func(k+1);
            isused[i] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    func(0);

    return 0;
}