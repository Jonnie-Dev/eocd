#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	for(int i = 0; i < t; i++) {
		int n, x;
		int gas_max = 0;

		cin >> n >> x;
		vector<int> gas;
		gas.push_back(0);

		for(int i = 0; i < n; i++){
			int num;
			cin >> num;
			gas.push_back(num);
		}
		
		for(int i = gas.size()-1; i > 0; i-=2) {
			gas_max += gas[i] - gas[i-1];	

			if(gas[i] + gas[i-1] > x){
				break;
			}
		}

		cout << gas_max << endl;
	}
	return 0;
}
