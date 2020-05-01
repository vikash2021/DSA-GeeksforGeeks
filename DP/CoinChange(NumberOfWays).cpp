#include <bits/stdc++.h>
using namespace std;
long long numberOfWays(int coins[],int numberOfCoins,int value)
{
    
    long long ways[value+1]={0}; 
    
    ways[0]=1;
    vector<int> coinsSet;
    
    for(int i=0;i<numberOfCoins;i++)
    {
        coinsSet.push_back(coins[i]);
    }
    
    for(auto coin:coinsSet) //Using a coin, one at a time
    {
        for(int i=1;i<value+1;i++)
        {
            if(i>=coin) 
            {
            
             ways[i] = ways[i] + ways[i-coin];
             
            }
        }
    }
    
    return ways[value];
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
	    
	    cout<<numberOfWays(coins,numberOfCoins,value)<<endl;
	    
	}
	return 0;
} 
