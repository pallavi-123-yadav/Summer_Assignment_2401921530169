#include<iostream>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i = 0;
        int index = 0;

        while (i < chars.size()) {

            char current = chars[i];
            int count = 0;

            while (i < chars.size() && chars[i] == current) {
                count++;
                i++;
            }

            chars[index++] = current;

            if (count > 1) {
                string s = to_string(count);

                for (char c : s) {
                    chars[index++] = c;
                }
            }
        }

        return index;
    }
};
        
    
