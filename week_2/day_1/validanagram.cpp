#include<iostream>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;

        unordered_map<char,int>mp;
        for(int c =0; c<s.size();c++) {
            mp[s[c]]++;

        }
        for(int c =0; c<t.size();c++) {
            mp[t[c]]--;
            if(mp[t[c]]<0) return false;
        }
        return true;
        
    }
};