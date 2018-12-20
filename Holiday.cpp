#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
string str;
cin>>str;
if(str.length() == n)
{
  int count = 0;
  for(int i = 0;i<n/2;i++)
  {
    if((str[i] == str[i+2]) && (str[i+1] == str[i+3]))
    {
      count++;
    }
  }
  cout<<count<<endl;
}
  return 0;
}
