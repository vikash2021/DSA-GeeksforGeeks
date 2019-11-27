#include<bits/stdc++.h>
using namespace std;
void recursivePrint(int sum, int n);
void recursivePrintImproved(int sum, int n, int data[], int len, int originalSum, int originalN);
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long int n,sum;
        cin>>n>>sum;
        recursivePrint(sum,n);
        
    }
}


void recursivePrint(int sum, int n) 
   {
                    
            		int data[sum];
            		int len = 0;
            		int originalSum = sum;
            		recursivePrintImproved(sum, n, data, len, originalSum,n);
    }
void recursivePrintImproved(int sum, int n, int data[], int len, int originalSum, int originalN)
	{
	    long long int s=0;
		    long long int i=0;
	    
	    long long int b[1000000000000001];
		if (n == 0) 
		{
		    
			for (int j = 0; j < len; j++) 
			{
			s=s+data[j]*data[j];
			b[i]=s;
			i++;
			}
			long long int l=sizeof(b)/sizeof(b[0]);
			sort(b,b+l);
			cout<<b[1];
			
			return ;
		}
		
		for (int i = 0; i <= sum; i++) 
		{
			int sum1 = 0;
			if (len == originalN - 1) 
			{
				for (int j = 0; j < len; j++) 
				{
					sum1 += data[j];
				}
				  i = originalSum - sum1;
			}
			data[len] = i;
			recursivePrintImproved(sum - i, n - 1, data, len + 1, originalSum, originalN);
		}
	}
