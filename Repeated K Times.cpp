#include<iostream>
#include<climits>
using namespace std;

void getValue(int arr[], int n, int k);
void DeleteMin(int arr[],int n,int min);
int k;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cin>>k;
  getValue(arr,n,k);
  return 0;
}

void getValue(int arr[], int n, int k)
{
  int min = INT_MAX;
  for(int k = 0; k< n; k++)
  {
    if(arr[k]<min)
    {
      min = arr[k];
    }
  }
  int count = 0;
  for(int j=0;j<n;j++)
  {
    if(arr[j] == min)
    {
      count++;
    }
  }

  if(count == k)
    cout<<min;
  else
    DeleteMin(arr,n,min);
}

void DeleteMin(int arr[], int n, int min)
{
  for(int i=0;i<n;i++)
  {
    if(arr[i] == min)
    {
      for(int j = i; j<(n)-1; j++)
      {
        arr[j] = arr[j+1];
      }
    }
  }
  getValue(arr,n,k);

}
