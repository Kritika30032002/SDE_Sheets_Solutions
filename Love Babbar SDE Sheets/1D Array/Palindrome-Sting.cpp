#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string S){
  string P = S;
  reverse(P.begin(), P.end());
  if(P == S){
    return 1;
  }
  else{
    return 0;
  }
}
int main()
{
  string S = "ABBA";
  cout<<isPalindrome(S);
  return 0;
}
