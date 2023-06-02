// **Question 5**
// You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase **may be** incomplete.

// Given the integer n, return *the number of **complete rows** of the staircase you will build*.

#include<bits/stdc++.h>
using namespace std;
int complete_rows(int n, int sum, int i){
    if(sum>n)
    return 0;
    return 1+complete_rows(n,sum+i,i+1);
}
int main()
{
    int n;
    cout<<"Enter the number of coins: \n";
    cin>>n;
    cout<<"Output is : \n";
    int ans = complete_rows(n,0,1);
    cout<<ans-1<<endl;
    return 0;
}