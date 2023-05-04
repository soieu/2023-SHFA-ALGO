#include <iostream>
#include <vector>
using namespace std;

const int IM = 0x7FFFFFFF;
struct loc
{
    int x;
    int y;
};

vector<loc> home;
vector<loc> p_chicken;
vector<loc> f_chicken;

int ddd[101];
int n, m;
int result = IM;

void chicken_distance()
{
    for (int i = 0; i < home.size(); i++)
    {
        ddd[i] = IM;
    }
    for (int i = 0; i < home.size(); i++)
    {
        for (int j = 0; j < m; j++)
        {
            ddd[i] = min(ddd[i], abs(home[i].x - f_chicken[j].x) + abs(home[i].y - f_chicken[j].y));
        }
    }
    int sum = 0;
    for (int i = 0; i < home.size(); i++)
    {
        sum += ddd[i];
    }
    result = min(result, sum);
}
void func(int cnt, int idx) // cnt는 치킨집의 숫자 세는거 idx는 치킨집 몇번째꺼를 놓을지
{
    if (m == cnt)
    {
        chicken_distance();
        return;
    }
    for (int i = idx; i < p_chicken.size(); i++)
    {
        f_chicken.push_back({p_chicken[i].x, p_chicken[i].y});
        func(cnt + 1, i + 1);
        f_chicken.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m; // n*n 크기의 도시에서 m개의 치킨집을 남겨야함

    for (int i = 0; i < 101; i++)
    {
        ddd[i] = IM;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k;
            cin >> k;
            if (k == 1)
            {
                home.push_back({i, j}); // 1인 경우 집이니까 집 벡터에 위치 추가
            }
            if (k == 2)
            {
                p_chicken.push_back({i, j}); // 2인 경우 치킨집이니까 치킨 벡터에 위치 추가
            }
        }
    }

    func(0, 0);

    cout << result;

    return 0;
}

//참조 : https://kokodakadokok.tistory.com/5