// **Question 4**

// Given two **0-indexed** integer arrays nums1 and nums2, return *a list* answer *of size* 2 *where:*

// - answer[0] *is a list of all **distinct** integers in* nums1 *which are **not** present in* nums2*.*
// - answer[1] *is a list of all **distinct** integers in* nums2 *which are **not** present in* nums1.

// **Note** that the integers in the lists may be returned in **any** order.

// **Example 1:**

// **Input:** nums1 = [1,2,3], nums2 = [2,4,6]

// **Output:** [[1,3],[4,6]]

// **Explanation:**

// For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].

// For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1(begin(nums1),end(nums1)),s2(begin(nums2),end(nums2));
        vector<vector<int>>v(2);
        for (auto i : s1) {
            if (s2.count(i) == 0)
                v[0].push_back(i);
        }
        for (auto i : s2) {
            if (s1.count(i) == 0) 
                v[1].push_back(i);
        }
        return v;
    }
int main()
{
    int n,m;
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

    vector<vector<int>> ans = findDifference(arr1,arr2);
    cout<<"Output is : \n";
    for(auto it:ans){
        for(auto i:it)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}