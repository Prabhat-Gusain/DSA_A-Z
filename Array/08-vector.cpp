#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>answer;
        for(int i=0;i<nums.size();i++)
        {
            int product=1;
            for(int j=0;j<nums.size();j++)
            {
                if(i==j)
                {
                    continue;
                }
                product*=nums[j];
            }
            answer.push_back(product);
        }
        return answer;
    }
};

int main()
{
    Solution s;
    vector<int>nums[1,2,3,4];
    s.productExceptSelf(nums);
}