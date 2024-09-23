#include <bits/stdc++.h>
using namespace std;

int main() {
    // get the dictkey length
    int dictKeyLen, dictQueryLen;
    
    // get the dictQuery length
    cin >> dictKeyLen >> dictQueryLen;
    
    // create a vector of dictionary words
    vector<string> words;
    
    // push all the dictionary words to vector
    for(int i = 0; i < dictKeyLen; i++) {
        string str;
        cin >> str;
        words.push_back(str);
    }
    
    // sort the elements in the vector
    sort(words.begin(), words.end());
    
    // create hasmap, and assign each vector word to its idx + 1
    unordered_map<std::string, int> hashMap;
    for(int i = 0; i < dictKeyLen; i++) {
        hashMap[words.at(i)] = i + 1;
    }
    
    // for each query
    for (int i = 0; i < dictQueryLen; i++) {
        string wordKey;
        int pageNo;
        
        cin >> wordKey >> pageNo;
        
        // find the idx of the query word
        int wordIdx {hashMap[wordKey]};
        
        // output the correct page no
        if (pageNo == 1)
            cout << wordIdx;
        else if (wordIdx <= pageNo)
            cout << 1;
        else {
            int div = wordIdx % pageNo;
            if (div == 0)
                cout << wordIdx/pageNo;
            else {
                int temp = wordIdx/pageNo;
                cout << temp + 1;
            }
        }
        
        cout << endl;
    }
    
    return 0;
}