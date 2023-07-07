// 💡 1. **Roman to Integer**

// Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D` and `M`.

// ```
// SymbolValue
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// ```

// For example, `2` is written as `II` in Roman numeral, just two ones added together. `12` is written as `XII`, which is simply `X + II`. The number `27` is written as `XXVII`, which is `XX + V + II`.

// Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not `IIII`. Instead, the number four is written as `IV`. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as `IX`. There are six instances where subtraction is used:

// - `I` can be placed before `V` (5) and `X` (10) to make 4 and 9.
// - `X` can be placed before `L` (50) and `C` (100) to make 40 and 90.
// - `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900.

// Given a roman numeral, convert it to an integer.

// **Example 1:**

// ```
// Input: s = "III"
// Output: 3
// Explanation: III = 3.
// ```


#include<bits/stdc++.h>
using namespace std;
int romanToInt(string s) {
         int sum=0;
        
        unordered_map <char,int> r;
        r['I'] = 1;
        r['V'] = 5;
        r['X'] = 10;
        r['L'] = 50;
        r['C'] = 100;
        r['D'] = 500;
        r['M'] = 1000;
        int len=s.size();
        int temp=1000,num=0;
        for(int i=0;i<len;i++)
        {
            num=r[s[i]];
            if(num>temp)
                sum-=2*temp;
            temp=num;
            
            sum+=temp;
           
        }
        return sum;
    }
int main()
{
    string s;
    cout<<"Enter the roman string: \n";
    cin>>s;
    int ans = romanToInt(s);
    cout<<"Output is:\n";
    cout<<ans<<endl;
    return 0;
}    