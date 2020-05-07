#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string, int> p1, pair<string, int> p2){
    if(p1.second == p2.second){
        return p1.first < p2.first;
    }
    else
    return p1.second > p2.second;
}

vector<pair<string, int>> sortMarks(vector<pair<string, int>> v, int N){
    
    sort(v.begin(), v.end(), compare);
    
    return v;
    
}

int main() {
	
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring vector
	    vector<pair<string, int>> v;
	    
	    // Taking input to vector
	    for(int i = 0;i<N;i++){
	        string s;
	        cin >> s;
	        int k;
	        cin >> k;
	        v.push_back(make_pair(s, k));
	    }
	    
	    // Calling function
	    v = sortMarks(v, N);
	    
	    // Printing student name with their marks
	    for(auto it = v.begin(); it!=v.end();it++){
	     
