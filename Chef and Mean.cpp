//Chef and Mean Problem of July Challenge 2019 Div 2

#include<bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t;
      cin>>t;
      while(t)
      {
       long long n;
       cin>>n;
       long long array[n];
       long long sum = 0;
       for(long long i = 0; i<n; i++)
       {
         cin>>array[i];
         sum = sum + array[i];
       }
       int flag = 0;
       long double num = (double)sum/n;

         for(long long i = 0; i<n; i++)
         {
           if(array[i] == num)
           {
             cout<<(i+1)<<endl;
             flag = 1;
             break;
           }
         }
         if(flag == 0)
          cout<<"Impossible"<<endl;
        t--;
      }
  return 0;
}
