// **Question 3**
// Given a 2D integer array matrix, return *the **transpose** of* matrix.

// The **transpose** of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

// **Example 1:**

// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]

// Output: [[1,4,7],[2,5,8],[3,6,9]]
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& arr)
{
    int n=arr.size();
    int m = arr[0].size();
    vector<vector<int>>v(n,vector<int>(m,0));
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
            v[i][j]=arr[j][i];
        }
    }
    return v;
}
int main()
{
    int n,m;
    cout<<"Enter 2D-arr size : \n";
    cin>>n>>m;
    cout<<"Enter 2D-arr elements : \n";
    vector<vector<int>>arr(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    vector<vector<int>> ans = transpose(arr);
    cout<<"Output is : \n";
    for(auto it:ans){
        for(auto i:it)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
