#include <iostream>
#include<bits/stdc++.h>

using namespace std;
#include<stdlib.h>
#include<math.h>

long int search(vector <long int> arr, long int l, long int r, long int x)
{
  while (l <= r)
  {
    int m = l + (r-l)/2;
 
    // Check if x is present at mid
    if (arr[m] == x) 
        return m;  
 
    // If x greater, ignore left half  
    if (arr[m] < x) 
        l = m + 1; 
 
    // If x is smaller, ignore right half 
    else
        r = m - 1; 
  }
 
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	long int n;
	long int K;
	long int i,length,m,count;
	long int arr[2001];
	for(i=1;i<2001;i++)
    {
        arr[i]=0;
    }
	while(t--)
	{
	    count=0;
	    cin>>n>>K;
	    long int A[n];    
	    for(i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    for(length=1;length<=n;length++)
	    {
			vector <long int> B;
			for(i=0;i<length;i++)
			{
				B.push_back(A[i]);
				arr[A[i]]++;
			}
			sort(B.begin(),B.end());
			m = ceil((double)K/length);
			long int pos;
			if(K%m!=0)
			 	pos = K/m;
			else
				pos = K/m-1;
			long int first;
			long int last; 
			for(first=0;first<=n-length;first++)
			{
				last = first+length-1;
				long int X = arr[B[pos]];
				if(arr[X]>0)
				{
					count++;
				}
					
				if(last+1<n)
				{
					arr[A[first]]--;
					B.erase(B.begin()+search(B,0,length-1,A[first]));
					arr[A[last+1]]++;
					vector<long int>::iterator lower;
					lower = lower_bound(B.begin(), B.end(), A[last+1]);
					B.insert(lower,A[last+1]);
				}	
			}
			for(i=0;i<B.size();i++)
			{
				arr[B[i]]--;
			}
			
	    }
	    cout<<count<<endl;
	}
	return 0;
}