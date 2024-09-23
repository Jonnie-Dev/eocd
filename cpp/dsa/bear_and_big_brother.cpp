#include <bits/stdc++.h>
using namespace std;

int main(){
	int limak, bob;

	cin >> limak >> bob;

	if(limak == bob)
		cout << 1;
	else if(bob % limak == 0)
		cout << bob/limak;
	else 
		cout << floor(bob/limak) + 1;
	
	return 0;
}
