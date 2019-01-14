#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,q;
  cin>>n>>q;
  int arr[n];
  for(int i = 0;i<n;i++)
  {
    cin>>arr[i];
  }
  while(q>0)
  {
  int a,b,c;
  int sum = 0;
  cin>>a>>b>>c;
  if(a == 1)
    arr[b] = c;
  else if(a == 2)
  {
    for(int i = b; i<=c; i++)
    {
      sum = sum + arr[i];
    }
    cout<<sum<<endl;
  }
  else{
    cout<<-1<<endl;
  }
  q--;
}
  return 0;
}
