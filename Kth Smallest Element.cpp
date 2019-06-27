// This code was accepted after I used ios::sync_with_stdio(false) and cin.tie(NULL)
#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t)
	{
	    int n;
	    cin>>n;
	    int array[n];
	    for(int i = 0; i<n; i++)
	    {
	        cin>>array[i];
	    }
	    int k;
	    cin>>k;
	    sort(array,array+n);
	    int i =0;
	    while(k)
	    {
	        if(array[i] == array[i+1])
	        {
	            i++;
	        }
	        else{
	            i++;
	            k--;
	        }
	    }
	    t--;
	    cout<<array[i-1]<<endl;
	}
	return 0;
}
