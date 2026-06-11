#include<iostream>
using namespace std;
class Solution {
public:
struct Node {
        string s;
        int open;
        int close;
    };
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        queue<Node> q;

        q.push({"", 0, 0});

        while (!q.empty()) {
            Node curr = q.front();
            q.pop();

            if (curr.s.length() == 2 * n) {
                ans.push_back(curr.s);
                continue;
            }

            if (curr.open < n) {
                q.push({curr.s + "(", curr.open + 1, curr.close});
            }

            if (curr.close < curr.open) {
                q.push({curr.s + ")", curr.open, curr.close + 1});
            }
        }

        return ans;
    }
};
       
    