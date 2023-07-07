// <aside>
// 💡 2. **Longest Substring Without Repeating Characters**

// Given a string `s`, find the length of the **longest substring** without repeating characters.

// **Example 1:**

// </aside>

#include<bits/stdc++.h>
using namespace std;
 int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        int i=0,j=0;
        int ans=0;
        while(j<n)
        {
            mp[s[j]]++;
            if(mp.size()>j-i+1)
                j++;
            else if(mp.size()==j-i+1)
            {
                if(mp.size()>ans)
                    ans=j-i+1;
                j++;
            }
            else if(mp.size()<j-i+1)
            {
                while(mp.size()<j-i+1)
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                        mp.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return ans;
        
        //length of substring ->window
        // characters not repeat
        
    }
int main()
{
     string s;
    cout<<"Enter the string: \n";
    cin>>s;
    int ans = lengthOfLongestSubstring(s);
    cout<<"Output is:\n";
    cout<<ans<<endl;
    return 0;
}    