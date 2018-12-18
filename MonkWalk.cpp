#include<iostream>
#include<string>
using namespace std;

int main()
{
  int T;
  cin>>T;
  char vowels[10] = {'A','a','E','e','I','i','O','o','U','u'};

  while(T>0)
  {
    string str;
    cin>>str;
    int count = 0;
    for(int i=0; i<str.length(); i++)
      {
        for(int j=0; j<10; j++)
        {
          if(str[i] == vowels[j])
            count ++;
        }
      }
      cout<<count<<endl;
      T--;
  }
  return 0;
}
