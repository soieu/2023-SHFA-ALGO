#include <iostream>
#include <vector>
using namespace std;

int n, m; // n : 1부터 n까지의 자연수 m : 수열의 길이

int arr[10];
int isused[10001] = {
    0,
}; // 0이면 사용 안함 1이면 사용함
int r_isused[10001] = {0,}; // 중복체크

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

    for (int i = 1; i <= 10000; i++)
    {
        if(isused[i] != 0 && !r_isused[i])
        {
            arr[k] = i;
            r_isused[i] = 1;
            func(k + 1);
            r_isused[i] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        isused[temp] = 1;
    }

    func(0);

    return 0;
}