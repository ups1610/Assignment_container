#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string addStrings(string n1, string n2)
    {
        // support variables
        int i = 0, maxSize = 1 + (n1.size() > n2.size() ? n1.size() : n2.size()), sum = 0;
        string res(maxSize, '0');
        // parsing the input
        while (i++ < maxSize)
        {
            sum = (i <= n1.size() ? n1[n1.size() - i] - 48 : 0) + (i <= n2.size() ? n2[n2.size() - i] - 48 : 0) + sum % 10;
            res[maxSize - i] = sum % 10 + 48;
            sum /= 10;
        }
        if (res[0] == '0')
            res = res.substr(1);
        return res;
    }
};