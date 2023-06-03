// **Question 7**

// Suppose an array of length n sorted in ascending order is **rotated** between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

// - [4,5,6,7,0,1,2] if it was rotated 4 times.
// - [0,1,2,4,5,6,7] if it was rotated 7 times.

// Notice that **rotating** an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

// Given the sorted rotated array nums of **unique** elements, return *the minimum element of this array*.

// You must write an algorithm that runs in O(log n) time.

// **Example 1:**

// **Input:** nums = [3,4,5,1,2]

// **Output:** 1

// **Explanation:**

// The original array was [1,2,3,4,5] rotated 3 times.

#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int ans=nums[0];
        if(nums[0]<nums[nums.size()-1])
            return nums[0];
        while(i<j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]>nums[mid+1])
                return nums[mid+1];
            else if(nums[mid]<nums[mid-1])
                return nums[mid];
            else if(nums[mid]>nums[0])
                i=mid+1;
            else if(nums[mid]<nums[0])
                j=mid-1;
        }
        return ans;
    }
 int main()
 {
    int n;
    cout<<"Enter size of an array : \n";
    cin>>n;
    cout<<"Enter array  elements : \n";
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Output is : \n";
    int ans = findMin(arr);
    cout<<ans;
    cout<<endl;
    return 0;
 }