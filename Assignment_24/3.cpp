// <aside>
// 💡 3. **Majority Element**

// Given an array `nums` of size `n`, return *the majority element*.

// The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.

// </aside>

#include<bits/stdc++.h>
using namespace std;
 int majorityElement(vector<int>& nums) {
        int major=nums[0],cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt==0){
                major=nums[i];
            }
            if(nums[i]==major)
                cnt++;
            else
                cnt--;
        }
       
        return major;
    }

int main()
{
    int n;
    cout<<"Enter array size and elements: \n";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = majorityElement(arr);
    cout<<"Output is:\n";
    cout<<ans<<endl;
    return 0;
}      