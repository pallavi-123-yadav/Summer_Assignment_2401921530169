#include<iostream>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) 
        return false;
        unordered_map<char,int>mp;
        for(char ch: s1)
        mp[ch]++;
        int left =0;
        int count = s1.size();
        for(int right =0;right<s2.size();right++){
            if(mp[s2[right]]>0) 
            count --;
            mp[s2[right]]--;
            if(count ==0) {
                return true;
            }
            if(right -left +1==s1.size()) {
                if(mp[s2[left]]>=0) 
                count++;
                mp[s2[left]]++;
                left++;
            }
        }
        return false;
    }
};