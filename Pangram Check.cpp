#include<bits/stdc++.h>
using namespace std;

int main()
{
  int array[26] = {0};

  string str = "The quick brown fox jumps over the lazy dog";
  for(int i = 0; i<str.length(); i++)
  {
    if(97<int(str[i])<122)
    {
      int pos = int(str[i]) - 97;
      array[pos] = 1;
    }
  }

  int z = 0;
  int flag = 1;
  while(flag)
  {
    if(array[z] == 0)
    {
      cout<<"Not an pangram"<<endl;
      flag = 0;
    }
    else if(array[z] == 1)
    {
       if(z == 25)
       {
        cout<<"Pangram"<<endl;
        flag = 0;
      }
    }
    z++;
  }

  for(int i =0; i<26; i++)
  {
    cout<<array[i]<<" ";
  }
  return 0;
}
