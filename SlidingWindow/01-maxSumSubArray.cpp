#include<vector>
#include<iostream>
#include <climits>

using namespace std;

class subArr{
public:
    int maxSub(vector<int>& nums ,int k)
    {
        int i=0;
        int j=0;
        int sum=0;
        int mx=INT_MIN;

        while(j<nums.size())
        {
            sum+=nums[j];
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                mx=max(mx,sum);  
                sum-=nums[i];
                i++;
                j++;
            }
        }
        return mx;
    }
};

int main()
{
    subArr sa;
    subArr as;
    vector<int>v={2,5,1,8,2,9,1};
    int num=3;
    vector<int>v2={2,5,1,0,1,0};
    int result=sa.maxSub(v,num);
    int result2=as.maxSub(v2,num);
    cout<<"max sum of a subarray="<<result<<" ";
    cout<<"max sum of a subarray2="<<result2<<" ";
    return 0;
}