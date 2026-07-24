#include<iostream>
#include<vector>
#include<list>
using namespace std;

class slidingWindow{
public:
    void firstNeg(vector<int>& nums,int k){
        int i=0;
        int j=0;
        list<int>l;
        while (j<nums.size())
        {
            if(nums[j]<0)
            {
                l.push_back(nums[j]);
            }
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                if(l.size()!=0)
                {
                    cout<<l.front()<<endl;
                }
                else{
                    cout<<0<<endl;
                }

                if(nums[i]<0)   // outgoing element check karo, not l.front()
                {
                    l.pop_front();
                }

                i++;
                j++;
            }
        } 
    }
};

int main()
{
    slidingWindow sw;
    vector<int>nums={12,-1,-7,8,-15,30,16,28};
    int k=2;
    sw.firstNeg(nums,k);
    return 0;
}