// <aside>
// 💡 7. **Sliding Window Maximum**

// You are given an array of integers `nums`, there is a sliding window of size `k` which is moving from the very left of the array to the very right. You can only see the `k` numbers in the window. Each time the sliding window moves right by one position.

// Return *the max sliding window*.

// </aside>

// <aside>
// 💡 6. **Top K Frequent Words**

// Given an array of strings `words` and an integer `k`, return *the* `k` *most frequent strings*.

// Return the answer **sorted** by **the frequency** from highest to lowest. Sort the words with the same frequency by their **lexicographical order**.

// </aside>

#include<bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>v;
        deque<int>dq;
        int i=0,j=0;
        int ans=0;
        while(j<nums.size())
        {
            //calculation---
            
            while(dq.size()>0 && dq.back()<nums[j])
                dq.pop_back();
             dq.push_back(nums[j]);
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                //ans from calculation---
                if(!dq.empty())
                   v.push_back(dq.front());
                if(dq.front()==nums[i])
                {
                    dq.pop_front();
                }
                i++;
                j++;
            }
        }
        return v;
    }

int main()
{
    int n;
    cout<<"Enter size: \n";
    cin>>n;
    vector<int>arr({1,3,-1,-3,5,3,6,7});
    int k =2;
    vector<int>ans = maxSlidingWindow(arr,k);
    cout<<"Output is : \n";
    for(auto i:ans)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}