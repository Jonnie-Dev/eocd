#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;
        vector<vector<string>> res = {};
        

        for(string str : strs) {
            string original_str = str;
            sort(str.begin(), str.end());

            if (hashmap[str].size() > 0) {
                hashmap[str].push_back(original_str);
            } else {
                vector<string> temp_vect = {original_str};
                hashmap.insert({str, temp_vect});
            }
        }

        for (const auto& pair : hashmap) {
            vector<string> temp;
            for (const auto& item : pair.second) {
                temp.push_back(item);
            }

            res.push_back(temp);
        }
    
        return res;
    }
};