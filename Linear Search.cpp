#include<iostream>
using namespace std;

int main()
{
  int n;
  int k;
  cin>>n;
  int arr[n];
  for(int i = 0; i<n; i++)
  {
    cin>>arr[i];
  }
  cin>>k;
  for(int j=0;j<n;j++)
  {
    if(arr[j] == k)
    {
      cout<<j<<endl;
    }
  }
  return 0;
}
