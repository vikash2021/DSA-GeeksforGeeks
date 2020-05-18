#include<bits/stdc++.h>
using namespace std;

int minSwaps(int A[], int N);

// Driver program to test the above function
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    cout<<minSwaps(a,n)<<endl;
	}
}

// } Driver Code Ends


/* You are required to complete this method */
int minSwaps(int A[], int N){
    int n=N;
	pair<int, int> arrPos[n];
	for (int i = 0; i < n; i++)
	{
		arrPos[i].first = A[i];
		arrPos[i].second = i;
	}

	sort(arrPos, arrPos + n);


	vector<bool> vis(n, false);


	int ans = 0;


	for (int i = 0; i < n; i++)
	{
	
		if (vis[i] || arrPos[i].second == i)
			continue;

		
		int cycle_size = 0;
		int j = i;
		while (!vis[j])
		{
			vis[j] = 1;

		
			j = arrPos[j].second;
			cycle_size++;
		}

	
		ans += (cycle_size - 1);
	}

	
	return ans;
}

