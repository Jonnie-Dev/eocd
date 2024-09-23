#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;

    int set_size;

    cin >> set_size;

    for(int i = 0; i < set_size; i++) {
        int el;
        cin >> el;
        s.insert(el);
    }

    cout << s.size();

    return 0;
}