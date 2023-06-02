// **Question 8**

// Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

// *Return the array in the form* [x1,y1,x2,y2,...,xn,yn].

// **Example 1:**

// **Input:** nums = [2,5,1,3,4,7], n = 3

// **Output:** [2,3,5,4,1,7]

// **Explanation:** Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].

#include<bits/stdc++.h>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n) {
       for(int i=n;i<2*n;i++)
       {
           nums[i]=(nums[i]*1002)+nums[i-n];
       }
       int j=0;
       for(int i=n;i<2*n;i++)
       {
           nums[j]=nums[i]%1002;
           nums[j+1]=nums[i]/1002;
           j+=2;
       }
       return nums;
    }
int main()
{
    int n;
    cout<<"Enter arr size : \n";
    cin>>n;
    cout<<"Enter arr elements : \n";
    vector<int>arr(2*n);
    for(int i=0;i<2*n;i++)
    {
        cin>>arr[i];
    }
    
    vector<int> ans = shuffle(arr,n);
    cout<<"Output is : \n";
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}
