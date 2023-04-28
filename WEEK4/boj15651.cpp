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
        if(arr[k-1] <= i)
        {
            arr[k] = i;
            func(k + 1);
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