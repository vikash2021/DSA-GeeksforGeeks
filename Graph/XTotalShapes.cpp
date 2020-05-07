#include <bits/stdc++.h>
using namespace std;

void dfs(vector<string> &A, int x, int y){
    if(x>=A.size()||y>=A[x].length()){
        return ;
    }
	if(A[x][y]=='X'){
		A[x][y]='O';
		dfs(A,x+1,y);dfs(A,x,y+1);dfs(A,x-1,y);dfs(A,x,y-1);
	}
}

int fun(vector<string> &A) {
    int i,j,ans=0;
	for(i=0;i<A.size();i++){
		for(j=0;j<A[i].length();j++){
			if(A[i][j]=='X'){
				ans++;
				dfs(A, i,j);
			}
		}
	}
	return ans;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int m;
		cin>>m;
		vector<string> A;
		for(int i=0;i<n;i++){
			string S;
			cin>>S;
			A.push_back(S);
		}
		cout<<fun(A)<<"\n";
	}
}
