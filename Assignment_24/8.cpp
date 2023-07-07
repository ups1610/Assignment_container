// <aside>
// 💡 8. **Find K Closest Elements**

// Given a **sorted** integer array `arr`, two integers `k` and `x`, return the `k` closest integers to `x` in the array. The result should also be sorted in ascending order.

// An integer `a` is closer to `x` than an integer `b` if:

// - `|a - x| < |b - x|`, or
// - `|a - x| == |b - x|` and `a < b`
// </aside>

// <aside>
// 💡 6. **Top K Frequent Words**

// Given an array of strings `words` and an integer `k`, return *the* `k` *most frequent strings*.

// Return the answer **sorted** by **the frequency** from highest to lowest. Sort the words with the same frequency by their **lexicographical order**.

// </aside>

#include<bits/stdc++.h>
using namespace std;

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        int place=0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        for(int i=0;i<n;i++)
        {
           pq.push({abs(arr[i]-x),arr[i]}); 
        }
        vector<int>ans;
        cout<<pq.size();
       
        
       for(int i=0;i<k;i++){
           ans.push_back(pq.top().second);
           pq.pop();
       }
        sort(ans.begin(),ans.end());
        return ans;
}
int main()
{
    int n;
    cout<<"Enter size: \n";
    cin>>n;
    vector<int>arr({1,2,3,4,5});
    int k =4;
    int x =3;
    vector<int>ans = findClosestElements(arr,k,x);
    cout<<"Output is : \n";
    for(auto i:ans)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}