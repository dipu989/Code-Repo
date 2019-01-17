#include<bits/stdc++.h>
using namespace std;

const int N = 100031;

int main() {
  ios_base::sync_with_stdio(0);
  int n;
  cin>>n;
  int arr[N];
  long long res[10];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }

for(int i = 0; i< 3; i++)
{
  int curr = i;
  do
  {
    res[i] = res[i] + arr[curr];
    curr = curr + 3;
  }while(curr<n);

}
for(int i = 0 ;i< 3;i++)
{
  cout<<res[i]<<" ";
}
  return 0;
}
