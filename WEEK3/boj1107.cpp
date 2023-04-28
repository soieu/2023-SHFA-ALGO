#include <iostream>
#include <vector>
using namespace std;
int btn[10] = {0,} // 0이면 버튼 정상 작동 1이면 버튼 안작동


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string n;
    int m;
    int btn_max = 9;
    int btn_min = 0;
    int present = 100;
    int count = 0;
    int result;
    string n_min; // 숫자 버튼으로 이동할 곳 작은곳
    string n_max; // 숫자 버튼으로 이동할 곳 큰 곳
    
    cin>>n>>m;

    // 고장난 버튼 설정 & 버튼 중 가장 큰 값, 작은 값 설정정
    for(int i = 0; i < m; i++)
    {
        btn[m] = 1;
        if(m == btn_max)
        {
            btn_max--;
        }
        else if(m== btn_min)
        {
            btn_min++;
        }
    }

    for(int i = 0; i < n.length(); i++)
    {
        if(btn[i] == 0) // 버튼이 안고장 났을때
        {

        }
        else //버튼이 고장났을 때
        {
            for(int j = i; j<n.length(); j++)
            {
                n_min[j] = 
            }
        }
    }
    
    



    return 0;
}