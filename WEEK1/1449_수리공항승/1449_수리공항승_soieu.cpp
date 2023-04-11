#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N, L, temp;
	vector<int> v;
	int start;
	int tape = 0; 

	cin >> N >> L;

	for (int i = 0; i < N; i++) {
		cin>>temp;
        v.push_back(temp);
	}

	sort(v.begin(), v.end());

	start = *v.begin();

	for (int i = 1; i < N; i++) {
		if (L <= v[i] - start) {
			tape++;		
			start = v[i];
		}
	}

	cout << tape + 1;

}