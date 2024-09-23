#include <bits/stdc++.h>
using namespace std;

int main() {

    int no_of_swaps;
    vector<int> cups = {1, 2, 3};
    int max_score {0};

    // create hashmap to store the score count for every cup
    unordered_map<int, int> hashMap;

    cin >> no_of_swaps;

    // {1: 0; 2: 0; 3: 0}

    // read each swaps made
    int i, j, guess;
    int count {1};

    while (count <= no_of_swaps) {
        cin >> i >> j >> guess;
        swap(cups[i-1], cups[j-1]);

        // check the guessed index, and assign the score accordiingly
        int correctGuess = cups.at(guess-1);
        hashMap[correctGuess] = (hashMap[correctGuess] || 0) + 1;

        count += 1;
    }

    // Print the key-value pairs
    for (const auto& pair : hashMap) {
        if (pair.second > max_score) max_score = pair.second;
    }

    cout << max_score << endl;



    return 0;

    // 1 2 1
    // i = 0, j = 1
    // new swaps = {2, 1, 3}
    // element at 0 is 2, so 2: 0+1
    // 
    // 3 2 1
    // i = 2, j = 1
    // new swaps = {2 3 1}
    // element at 0 is 2, so 2: 0+1+1

    // 1 3 1
    // i = 0, j = 2
    // new swaps = {1 3 2}
    // element at 0 is 1, so 1: 0+1

    // final hasmap => {1: 1; 2: 2; 3: 0}

}