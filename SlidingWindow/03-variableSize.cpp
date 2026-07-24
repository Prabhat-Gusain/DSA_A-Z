//longest subarray of sum k 

#include<iostream>
#include<vector>
using namespace std;

int maxSubSum(vector<int>& nums,int k){
    int i=0;
    int j=0;
    int mx=0;
    int sum=0;
    
    while(j<nums.size())
    {   
        sum+=nums[j];
        if(sum<k)
        {
            j++;
        }
        else if(sum==k)
        {
            if((j-i+1)>mx)
            {
                mx=(j-i+1);
            }
            j++;
        }
        else if(sum>k)
        {
            while(sum>k)
            {
                sum-=nums[i];
                i++;
            }
            j++;
        }
    }
    return mx;
}
int main()
{
    vector<int>nums={4,1,1,1,2,3,5};
    int k=5;
    int result=maxSubSum(nums,k);
    cout<<"max length of substring: "<<result<<endl;
}