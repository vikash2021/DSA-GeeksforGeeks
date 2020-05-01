#include <bits/stdc++.h>
using namespace std;
long long minimumNumberOfCoins(int coins[],int numberOfCoins,int value)
{
     long long dp[value+1]={0};
     dp[0]=0;
     for(int i=1;i<value+1;i++)
    {
        dp[i]=INT_MAX;
    }
    vector<int> coinsSet;
    
    for(int i=0;i<numberOfCoins;i++)
    {
        coinsSet.push_back(coins[i]);
    }
    for(auto coin:coinsSet) //Iterating over each coin
    {
        for(int i=1;i<value+1;i++)
        {
            if(i>=coin)
            {
                dp[i]=min(dp[i],dp[i-coin]+1);
            }
        }
    }
    
    return minimumNumberOfCoinsRequired[value];
}

int main() {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    int value;
	    cin>>value;
	    int numberOfCoins;
	    cin>>numberOfCoins;
	    int coins[numberOfCoins];
	    
	    for(int i=0;i<numberOfCoins;i++)
	    cin>>coins[i];
	    
	    int answer=minimumNumberOfCoins(coins,numberOfCoins,value);
	    if(answer==INT_MAX)
	    cout<<"Not Possible"<<endl;
	    else
	    cout<<answer<<endl;
	    
	}
	return 0;
} 
