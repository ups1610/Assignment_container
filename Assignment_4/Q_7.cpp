// **Question 7**
// You are given an m x n matrix M initialized with all 0's and an array of operations ops, where ops[i] = [ai, bi] means M[x][y] should be incremented by one for all 0 <= x < ai and 0 <= y < bi.

// Count and return *the number of maximum integers in the matrix after performing all the operations*

// **Example 1:**

// ![q4.jpg](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/4d0890d0-7bc7-4f59-be8e-352d9f3c1c52/q4.jpg)

// **Input:** m = 3, n = 3, ops = [[2,2],[3,3]]

// **Output:** 4

// **Explanation:** The maximum integer in M is 2, and there are four of it in M. So return 4.

#include<bits/stdc++.h>
using namespace std;
int maxCount(int m, int n, vector<vector<int>>& ops) {
        int min_row = m;
        int min_col = n;
        for (int i=0; i<ops.size(); i++){
            if (ops[i][0]<min_row) min_row=ops[i][0];
            if (ops[i][1]<min_col) min_col=ops[i][1];
        }        
        return min_row*min_col;
        
    }
int main()
{
    int m,n;
    cout<<"Enter value of m and n : \n";
    cin>>m>>n;
    int x,y; 
    cout<< "Enter arr size :\n";
    cin>>x>>y;
    vector<vector<int>>arr(x,vector<int>(y,0));
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        cin>>arr[i][j];
    }
    
    int ans = maxCount(m,n,arr);
    cout<<"Output is : \n";
    cout<<ans<<endl;
}