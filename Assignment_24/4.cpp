// <aside>
// 💡 4. **Group Anagram**

// Given an array of strings `strs`, group **the anagrams** together. You can return the answer in **any order**.

// An **Anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// </aside>

// <aside>
// 💡 3. **Majority Element**

// Given an array `nums` of size `n`, return *the majority element*.

// The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.

// </aside>

#include<bits/stdc++.h>
using namespace std;
 vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>mp;
        unordered_set<string>s;
        for(auto word:strs)
        {
           string k=word;
           sort(k.begin(),k.end());
           mp[k].push_back(word);
        }
        vector<vector<string>>v;
        for(auto i:mp)
        {
            v.push_back(i.second);
        }
        return v;
    }

int main()
{
    int n;
    cout<<"Enter array size and elements: \n";
    cin>>n;
    vector<string>arr({"eat","tea","tan","ate","nat","bat"});
    vector<vector<string>>ans = groupAnagrams(arr);
    cout<<"Output is:\n";
    for(auto i:ans)
    {
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}      