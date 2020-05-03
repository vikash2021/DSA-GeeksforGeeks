#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

//Complete this function
long long maximumSum(int arr[], int sizeOfArray)
{
   long long dp[sizeOfArray]={0};       // Initializing all the dp elements as 0
   dp[0]=max((long long)arr[0],dp[0]);  // Take max of first element or 0.
   dp[1]=max(dp[0],(long long)arr[1]);  // Take max of second element, first element or 0.
   for(int i=2;i<sizeOfArray;i++)
   {
       dp[i]=max(dp[i-2]+arr[i],dp[i-1]);   // dp to calculate max answer till ith position

   }

   int maxx=INT_MIN;
   bool isAllNegative=true;                 // If all numbers are negative, max number need to be searched

   for(int i=0;i<sizeOfArray;i++)
   {
       maxx=max(maxx,arr[i]);
       if(arr[i]>0)
       {
           isAllNegative=false;
           break;
       }

   }

   if(isAllNegative==true)
   {
       return maxx;                     // Return the max negative if all numbers are negative
   }
   else
   return (dp[sizeOfArray-1]);          // Return the optimal answer at (sizeOFArray-1)th by dp[sizeOfArray-1]
}


  //Your code here
 

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
} 
