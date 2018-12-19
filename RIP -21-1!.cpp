#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
  int test;
  cin>>test;
  while(test>0)
  {
    int number;
    int count = 0;
    cin>>number;
    string str;
    str = to_string(number);
    for(int i = 0;i < str.length()-1; i++)
    {
      if(str[i]=='2' && str[i+1] == '1')
      {
        count++;
      }
    }
    if( count ==1 || number % 21 == 0 )
    {
        cout<<"The streak is broken!"<<endl;
    }
    else
      cout<<"The streak lives still in our heart!"<<endl;
    test--;
  }
  return 0;
}
