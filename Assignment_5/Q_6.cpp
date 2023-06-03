// **Question 6**

// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears **once** or **twice**, return *an array of all the integers that appears **twice***.

// You must write an algorithm that runs in O(n) time and uses only constant extra space.

// **Example 1:**

// **Input:** nums = [4,3,2,7,8,2,3,1]

// **Output:**

// [2,3]

#include<bits/stdc++.h>
using namespace std;
vector<int> duplicate(vector<int>& arr)
{
    int n=arr.size();
    vector<int>fre(n+1,0);
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        fre[arr[i]]++;
    }
    for(int i=0;i<=n;i++)
    {
        if(fre[i]==2)
        ans.push_back(i);
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
    vector<int>ans = duplicate(arr);
    for(auto i:ans)
    cout<<i<<" " ;
    cout<<endl;
    return 0;
}
