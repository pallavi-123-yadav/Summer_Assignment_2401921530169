#include<iostream>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low =0;
        int high =k-1;
        
        long long sum =0;
        for(int i =0; i<=high;i++) {
             sum =sum+nums[i];
        }
        long long result =sum;
            while(high<nums.size()) {
                low++;
                high++;
                if(high==nums.size()) {
                    break;
                }
                sum =sum-nums[low-1];
                sum =sum+nums[high];
                
                 result = max(result,sum);
            }
        
       return (double)result/k; 
    }
};