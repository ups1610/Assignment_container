#include<bits/stdc++.h>
using namespace std;
 bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        if(n==1)
            return true;
        while(n%2==0)
        { 
            n/=2;
        }
        if(n==1)
            return true;
        return false;
    }
int main()
{
  int n;
  cout<<"Enter number: \n";
  cin>>n;
  bool ans = isPowerOfTwo(n);
  if(ans)
  cout<<"true";
  else
  cout<<"false";
  return 0;
}