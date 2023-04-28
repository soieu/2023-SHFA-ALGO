#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char map[51][51] = {0,};
    int n;
    int maxx = 0;
    char c;
    cin >> n;

    // 맵 만들기
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];
        }
    }

    // 가로교차랑 카운트
    for (int i = 0 ; i < n; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            char temp;
            temp = map[i][j];
            map[i][j] = map[i][j+1];
            map[i][j+1] = temp;
            //가로카운트
            for(int k = 0; k<n; k++)
            {
                int count = 1;
                for(int a = 0; a<n; a++)
                {
                    if(map[k][a] == map[k][a+1])
                        count++;
                    else
                    {
                        maxx = max(maxx, count);
                        count = 1;
                    }
                }
            }
            for(int a = 0; a<n; a++)
            {
                int count = 1;
                for(int k = 0; k<n; k++)
                {
                    if(map[k][a] == map[k+1][a])
                        count++;
                    else
                    {
                        maxx = max(maxx, count);
                        count = 1;
                    }
                }

            }
            temp = map[i][j];
            map[i][j] = map[i][j+1];
            map[i][j+1] = temp;
        }
    }
    // 세로 교차랑 카운트
    for (int i = 0 ; i < n; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            char temp;
            temp = map[i][j];
            map[i][j] = map[i+1][j];
            map[i+1][j] = temp;
            //가로카운트
            for(int k = 0; k<n; k++)
            {
                int count = 1;
                for(int a = 0; a<n; a++)
                {
                    if(map[k][a] == map[k][a+1])
                        count++;
                    else
                    {
                        maxx = max(maxx, count);
                        count = 1;
                    }
                }
                maxx = max(maxx, count);
            }
            for(int a = 0; a<n; a++)
            {
                int count = 1;
                for(int a = 0; a<n; a++)
                {
                    if(map[k][a] == map[k+1][a])
                        count++;
                    else
                    {
                        maxx = max(maxx, count);
                        count = 1;
                    }
                }
                maxx = max(maxx, count);
            }
            temp = map[i][j];
            map[i][j] = map[i+1][j];
            map[i+1][j] = temp;
        }
    }
    
    cout<<maxx;
    return 0;
}