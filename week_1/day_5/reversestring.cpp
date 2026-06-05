#include<iostream>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>st;
        string res;
        for(int i=0;i<s.size();i++) {
            st.push(s[i]);
        }
         for(int i=0;i<s.size();i++) {
            s[i]=st.top();
            st.pop();
        }
        
        
        
    }
};