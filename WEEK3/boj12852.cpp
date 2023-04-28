#include <iostream>
#include <vector>

using namespace std;
int d[1000005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
    

	cin>>n;

	d[1] = 0;

	for(int i = 2; i<= n; i++)
	{
		d[i] = d[i-1]+1;
		if(i%2 == 0) d[i] = min(d[i],d[i/2]+1);
		if(i%3 == 0) d[i] = min(d[i], d[i/3]+1);
	}
	cout<<d[n]<<"\n";

    int flag = 0;
    if(n==1)
        {
            cout<<"1";
            return 0;
        }
    while(!flag)
    {
        // n을 뭐로할지 t_n에다가 비교해서 나중에 n에다 대입함
        int t_n = n;

        cout<<n<<" ";
        
        if(n%2 == 0) // n이 2로 나눠지는 수인 경우
        {
            if(d[n/2]+1 > d[n-1]+1) // 저게 저거보다 크면
                t_n = n-1; // 저거로
            else if (d[n/2] < d[t_n]) // 저게 저거보다 작고 현재 저장된 t_n보다 작으면
                t_n = n/2;
        }
        if(n%3 == 0) // n이 3로 나눠지는 수인 경우, 2로 나눠져도 여기 걸려야함
        {
            if(d[n/3]+1 > d[n-1]+1)// 저게 저거보다 크면
                t_n = n-1;
            else if (d[n/3] < d[t_n]) // 저게 저거보다 작고 현재 저장된 t_n보다 작으면
                t_n = n/3;
        }
        if(n%2 != 0 && n%3 != 0) // 2나 3으로 안나눠지는 경우에만 걸림
        {
            t_n = n-1;
        }
        n = t_n;
        if(n==1)
        {
            cout<<"1";
            flag = 1;
        }
    }


	return 0;
}
