class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        vector<int>result;
        int mx=0;

        while(j<nums.size())
        {
            if(j-i+1>mx){
                mx=j-i+1;
            }
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                result.push_back(mx);
                i++;
                j++;
            }
        }
        return result;
    }
};