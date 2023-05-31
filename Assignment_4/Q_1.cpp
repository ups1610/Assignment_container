// Question 1
// Given three integer arrays arr1, arr2 and arr3 **sorted** in **strictly increasing** order, return a sorted array of **only** the integers that appeared in **all** three arrays.

// **Example 1:**

// Input: arr1 = [1,2,3,4,5], arr2 = [1,2,5,7,9], arr3 = [1,3,4,5,8]

// Output: [1,5]

// **Explanation:** Only 1 and 5 appeared in the three arrays.
#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>&arr1, vector<int>& arr2, vector<int>& arr3)
{
    int n = arr1.size();
    int m = arr2.size();
    int k = arr3.size();
    set<int>s ;
    for(auto i:arr1)
    s.insert(i);
    unordered_map<int,int>mp1,mp2,mp3;
    for(auto i:arr1)
    mp1[i]++;

    for(auto i:arr2)
    mp2[i]++;

    for(auto i:arr3)
    mp3[i]++;


    vector<int>ans;
    for(auto i:s)
    {
        if(mp1[i] == mp2[i] == mp3[i])
        ans.push_back(i);
    }
    return ans;

}
int main()
{
    int n,m,k;
    cout<<"Enter arr1 size : \n";
    cin>>n;
    cout<<"Enter arr1 elements : \n";
    vector<int>arr1(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter arr2 size : \n";
    cin>>m;
    cout<<"Enter arr2 elements : \n";
    vector<int>arr2(m);
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Enter arr3 size : \n";
    cin>>k;
    cout<<"Enter arr3 elements : \n";
    vector<int>arr3(k);
    for(int i=0;i<k;i++)
    {
        cin>>arr3[i];
    }

    vector<int> ans = intersection(arr1,arr2,arr3);
    cout<<"Output is : \n";
    for(auto i: ans)
    cout<<i<<" ";
    return 0;
}    