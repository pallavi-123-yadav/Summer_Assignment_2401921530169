#include<iostream>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
        

        stack<char> st;

        for (char c : s) {
            if (c != ']') {
                st.push(c);
            } else {
               
                string temp = "";
                while (!st.empty() && st.top() != '[') {
                    temp = st.top() + temp;
                    st.pop();
                }

                st.pop(); 

                
                string num = "";
                while (!st.empty() && isdigit(st.top())) {
                    num = st.top() + num;
                    st.pop();
                }

                int k = stoi(num);

                
                while (k--) {
                    for (char ch : temp) {
                        st.push(ch);
                    }
                }
            }
        }

        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};
        
    
