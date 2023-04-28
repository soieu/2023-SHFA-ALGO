#include <iostream>
#include <vector>
using namespace std;

int n, m;
int map[51][51] = {
    0,
};

void func()
{
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m; // n*n 크기의 도시에서 m개의 치킨집을 남겨야함

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; i++)
        {
            cin >> map[i][j];
        }
    }

    func();



    return 0;
}