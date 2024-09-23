#include <bits/stdc++.h>

using namespace std;

int main() {
    int game_count;
    cin >> game_count;

    string str;
    cin >> str;

    int count_anton = 0;
    int count_danik = 0;

    for(int i = 0; i < game_count; i++) {
        if(str[i] == 'A')
            count_anton += 1;
        else 
            count_danik += 1;

        if(count_anton > game_count/2)
            cout << "Anton";
        if (count_danik > game_count/2)
            cout << "Danik";

        if (count_anton > game_count/2 || count_danik > game_count/2)
            return 0;
    }

    cout << "Friendship";

    return 0;
}