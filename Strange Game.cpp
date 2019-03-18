#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
    long long int n,k;
    cin>>n>>k;
    long long int arrayA[n];
    long long int arrayB[n];
    long long int input;
    for(int i = 0; i<n; i++)
    {
      cin>>input;
      arrayA[i] = abs(input);
    }
    for(int i = 0; i<n; i++)
    {
      cin>>input;
      arrayB[i] = abs(input);
    }
    long long int max  = 0;
    for(int i = 0; i<n; i++)
    {
      if(arrayB[i]>max)
      {
        max = arrayB[i];
      }
    }
    long long int increase = 0;
    for(int i = 0; i<n; i++)
    {
      if(arrayA[i]<max+1)
        increase = increase+abs(max+1-arrayA[i]);
    }
    cout<<increase*k<<endl;
    t--;
  }



  return 0;
}
