#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h;

    cin >> n >> h;
    int width = 0;

    vector<int> heights;

    for(int i = 0; i < n; i++) {
        int h_temp;
        cin >> h_temp;
        if(h_temp < h)  
            width +=1;
        else
            if(h_temp % h == 0)
                width += h_temp/h;
            else
                width += floor(h_temp/h) + 1;
    }

    cout << width;

    return 0;
}