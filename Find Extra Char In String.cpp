#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s1 = "abcde";
  string s2 = "abcdefd";

  unordered_map<char, int> m1;

  for(int i =0; i<s2.length(); i++)
  {
    m1[s2[i]]++;
  }
  for(int j = 0; j<s1.length(); j++)
  {
    m1[s1[j]]--;
  }
  for(auto h1 = m1.begin(); h1!=m1.end(); h1++)
  {
    if(h1->second == 1)
      cout<<h1->first;
  }

  return 0;
}
