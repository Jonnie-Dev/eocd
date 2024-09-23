#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> pairs = {
            {'{', '}'},
            {'[', ']'},
            {'(', ')'}
        };

        vector<char> st;

        for(int i = 0; i < s.size(); i++) {
            if(s.size() == 0) {
                s.push_back(s[i]);
                continue;
            }

            char top = st[st.size() - 1];

            if(s[i] == pairs[top]) {
                st.pop_back();
            } else {
                st.push_back(s[i]);
            }
        }

        return (st.size() == 0);
    }
};