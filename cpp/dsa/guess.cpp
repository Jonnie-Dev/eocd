#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
	int num;
	int curr_num {2};

	bool correct {false};
	
	cout << "Enter a number between 1 and 100: ";
	
	while(!correct){
		cin >> num;
		if (num < 1 || num > 100 || !num)
			cout << "Invalid number, Try again: ";
		else if (num > curr_num)
			cout << "Enter a lower number: ";
		else if (num < curr_num)
			cout << "Enter a higher number: ";
		else{
			cout << "Booyah,  you got it. Right number is " << curr_num << "\n";
			correct = true;
		}
	}
	return 0;
}