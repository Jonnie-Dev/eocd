#include <bits/stdc++.h>
using namespace std;

int main(){
	int q;
	
	cin >> q;

	for(int i = 0; i < q; i++) {
		long long p1, p2, p3;
		cin >> p1 >> p2 >> p3;
		cout << (p1 + p2 + p3)/2 << endl;
	}

	return 0;
}
