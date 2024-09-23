#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m, k;
	cin >> n >> m >> k;

	vector<long long> have;
	vector<long long> want;

	for(long long i = 0; i < n; i++){
		long long el;
		cin >> el;
		want.push_back(el);
	}

	for (long long i = 0; i < m; i++){
		long long el;
		cin >> el;
		have.push_back(el);
	}

	sort(have.begin(), have.end());
	sort(want.begin(), want.end());

	long long w = 0; 
	long long h = 0;

	long long count = 0;
	long long w_s = want.size();
	long long h_s = have.size();
	
	while(w < w_s && h < h_s) {
		if(abs(want.at(w) - have.at(h)) <= k) {
			count += 1;
			w += 1;
			h += 1;
		} else if (want[w] > have[h])
			h += 1;
		else
			w += 1;
	}

	cout << count << endl;

	return 0;
}
