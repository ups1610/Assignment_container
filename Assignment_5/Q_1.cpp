// **Question 1**

// Convert 1D Array Into 2D Array

// You are given a **0-indexed** 1-dimensional (1D) integer array original, and two integers, m and n. You are tasked with creating a 2-dimensional (2D) array with  m rows and n columns using **all** the elements from original.

// The elements from indices 0 to n - 1 (**inclusive**) of original should form the first row of the constructed 2D array, the elements from indices n to 2 * n - 1 (**inclusive**) should form the second row of the constructed 2D array, and so on.

// Return *an* m x n *2D array constructed according to the above procedure, or an empty 2D array if it is impossible*.

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>v;
        int k=0;
        int val=0;
        for(int i=0;i<m;i++)
        {
            vector<int>ans;
            for(int j=0;j<n;j++)
            {
                if(m*n==original.size())
                {
                    int value=original[k];
                    ans.push_back(value);
                if(k<original.size()-1)
                k++;
                }
                else
                    return {};
            }
         v.push_back(ans);
        }
        return v;
    }
int main()
{
  int m , n;
  cout<<"Enter the size of 2-d array to be converted : \n";
  cin>>m>>n;
  int k;
  cout<<"Enter array size : \n";
  cin>>k;
  cout<<"Enter 1-d array elements : \n";
  vector<int>arr(k);
  for(int i=0;i<k;i++)
  cin>>arr[i];

  vector<vector<int>>ans = construct2DArray(arr,m,n);
  cout<<"Output is : \n";
  for(auto it:ans)
  {
    for(auto i:it)
    cout<<i<<" ";
    cout<<endl;
  }
  return 0;

}
