#include <iostream>
#include <vector>
using namespace std;
const int MAX = 8;
//	상		하		좌		우
int dx[4] = {0, 0, -1, 1}; 
int dy[4] = {-1, 1, 0, 0}; 
int N, M, map[MAX][MAX] = { 0,}; // N:세로 M: 가로 map: 원래 상태
int result = 0, count = 0;
int r_map[MAX][MAX] = {0,}; // map 복사후 로직 실행 용 맵
int visited[MAX][MAX] = {0,}; // 0: 방문 안함 1: 방문함
int a_visited[MAX][MAX] = {0,}; // 0: 방문 안함 1: 방문함 - 벽a
int b_visited[MAX][MAX] = {0,}; // 0: 방문 안함 1: 방문함 - 벽b
int c_visited[MAX][MAX] = {0,}; // 0: 방문 안함 1: 방문함 - 벽c

void rvc_init()
{ // 경우의 수 마다 replica map, visited, count 초기화
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			r_map[i][j] = map[i][j];
			visited[i][j] = 0;
		}
	}
	count = 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> map[i][j];
			r_map[i][j] = map[i][j];
		}
	}
	// for(int i = 0; i < N; i++)
	// {
	// 	for(int j = 0; j < M; j++)
	// 	{
	// 		cout << map[i][j]<< " ";
	// 	}
	// 	cout<<"\n";
	// }

	while (true)
	{
		// 1 3개 놓기 이거 넘 어려워요 미치겟어요
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if(c_visited[i][j] == 0 && r_map[i][j] == 0)
				{	
					r_map[i][j] = 1;
					break;
				}
				a_
			}
		}
		// 2 채우기
		//BFS ㅎㅎ
		// 0 세고 값 저장하기
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (r_map[i][j] == 0)
					count++;
			}
		}
		if (result < count)
			result = count;
		
		rvc_init();
	}

	cout << result;

	return 0;
}