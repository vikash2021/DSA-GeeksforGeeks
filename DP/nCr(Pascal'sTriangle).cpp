#include<bits/stdc++.h> 
using namespace std; 

const int p = 1e9+7;

int nCrModp(int, int);

// Driver program 
int main() 
{ 
  int t, n, r;
  cin >> t;
  
  while(t--){
      cin >> n >> r;
      cout << nCrModp(n, r) << endl;
  }
  
  return 0; 
}
// } Driver Code Ends


// Returns nCr % p 
int nCrModp(int n, int r) 
{
  // The array C is going to store last row of 
  // pascal triangle at the end. And last entry 
  // of last row is nCr 
  int C[r+1];
  memset(C, 0, sizeof(C));

  C[0] = 1; // Top row of Pascal Triangle 

  // One by constructs remaining rows of Pascal 
  // Triangle from top to bottom 
  for (int i = 1; i <= n; i++) 
  { 
    // Fill entries of current row using previous 
    // row values 
    for (int j = min(i, r); j > 0; j--) 

      // nCj = (n-1)Cj + (n-1)C(j-1); 
      C[j] = (C[j]%p + C[j-1]%p)%p; 
  } 
  return C[r]; 
}
