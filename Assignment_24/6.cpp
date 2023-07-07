// <aside>
// 💡 6. **Top K Frequent Words**

// Given an array of strings `words` and an integer `k`, return *the* `k` *most frequent strings*.

// Return the answer **sorted** by **the frequency** from highest to lowest. Sort the words with the same frequency by their **lexicographical order**.

// </aside>

#include<bits/stdc++.h>
using namespace std;
vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        for(auto w : words){
            freq[w]++;
        }
        
        auto comp = [&](const pair<string,int>& a, const pair<string,int>& b) {
            return a.second > b.second || (a.second == b.second && a.first < b.first);
        };
        typedef priority_queue< pair<string,int>, vector<pair<string,int>>, decltype(comp) > my_priority_queue_t;
        my_priority_queue_t  pq(comp);
        
        for(auto w : freq ){
            pq.emplace(w.first, w.second);
            if(pq.size()>k) pq.pop();
        }
        
        vector<string> output;
        while(!pq.empty()){
            output.insert(output.begin(), pq.top().first);
            pq.pop();
        }
        return output;
    }

int main()
{
    int n;
    cout<<"Enter size: \n";
    cin>>n;
    vector<string>arr({"i","love","leetcode","i","love","coding"});
    int k =2;
    vector<string>ans = topKFrequent(arr,k);
    cout<<"Output is : \n";
    for(auto i:ans)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}