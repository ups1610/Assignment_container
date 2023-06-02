// **Question 4**
// Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn) such that the sum of min(ai, bi) for all i is **maximized**. Return *the maximized sum*.

// **Example 1:**

// Input: nums = [1,4,3,2]

// Output: 4

// **Explanation:** All possible pairings (ignoring the ordering of elements) are:

// 1. (1, 4), (2, 3) -> min(1, 4) + min(2, 3) = 1 + 2 = 3

// 2. (1, 3), (2, 4) -> min(1, 3) + min(2, 4) = 1 + 2 = 3

// 3. (1, 2), (3, 4) -> min(1, 2) + min(3, 4) = 1 + 3 = 4

// So the maximum possible sum is 4.

#include<bits/stdc++.h>
using namespace std;
int maximized_sum(vector<int>& arr)
{
    int mx=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i+=2)
    {
      mx=max(arr[i],arr[i+1]);
    }
    return mx;
}
int main()
{
    int n;
    cout<<"Enter arr size : \n";
    cin>>n;
    cout<<"Enter arr elements : \n";
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Output is : \n";
    int ans = maximized_sum(arr);
    cout<<ans<<endl;
    return 0;
}
