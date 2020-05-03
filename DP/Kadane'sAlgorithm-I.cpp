#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete this function
long long maximumSum(int a[], int size)
{
   int max_so_far = a[0]; 
   int curr_max = a[0]; 
   cout<<curr_max<<" ";
   for (int i = 1; i < size; i++) 
   { 
        curr_max = max(a[i], curr_max+a[i]); 
        max_so_far = max(max_so_far, curr_max); 
        cout<<curr_max<<" ";
        
   } 
   cout<<"\n";
   
   return max_so_far; 
  
}




// { Driver Code Starts.


int main() {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    int sizeOfArray;
	    cin>>sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    cout<<maximumSum(arr,sizeOfArray)<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends
