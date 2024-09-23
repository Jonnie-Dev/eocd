#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num;
	vector <int> vec;

	cout << "Enter an integer, n: ";
	cin >> num;

	vec.push_back(num);

	while(num != 1) {
		if (num%2 == 0)
			num = num/2;
		else 
			num = (num*3 + 1);

		vec.push_back(num);
	}

	for(int i = 0; i < vec.size(); i++) {
		cout << vec.at(i);
		if (i == vec.size() - 1) {
			cout << "\n";
		} else {
			cout << " -> ";
		}
	}

	cout << endl;

	return 0;
}
