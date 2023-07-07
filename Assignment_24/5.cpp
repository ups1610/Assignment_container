// <aside>
// 💡 5. **Ugly Numbers**

// An **ugly number** is a positive integer whose prime factors are limited to `2`, `3`, and `5`.

// Given an integer `n`, return *the* `nth` ***ugly number***.

// </aside>

// <aside>
// 💡 3. **Majority Element**

// Given an array `nums` of size `n`, return *the majority element*.

// The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.

// </aside>

#include<bits/stdc++.h>
using namespace std;
bool isUgly(int n) {
        if(n<=0)
        return false;
       while(n!=1)
       {
           if(n%2==0)
           n/=2;
           else if(n%3==0)
           n/=3;
           else if(n%5==0)
           n/=5;
           else
           return false;
       }
       return true;
    } 

int main()
{
    int n;
    cout<<"Enter array size and elements: \n";
    cin>>n;
    bool ans = isUgly(n);
    cout<<"Output is:\n";
    cout<<ans<<endl;
    return 0;
}      