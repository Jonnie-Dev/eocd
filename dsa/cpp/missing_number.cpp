#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> numbers;
	bool state = false;

	for(int i = 0; i < n - 1; i++) {
		int num;
		cin >> num;

		numbers.push_back(num);
	}

	sort(numbers.begin(), numbers.end());

	for(int idx = 0; idx < n-1; idx++) {
		if ((idx+1) != numbers.at(idx)) {
			cout << idx+1;
			state = true;
			break;
		}
	}

	if(!state) 
		cout << n;

	return 0;
}
