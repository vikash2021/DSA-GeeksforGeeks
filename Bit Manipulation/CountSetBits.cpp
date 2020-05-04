

    unsigned int countSetBits(int n)
    {
        unsigned int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }

//OR
// Note: In GCC, we can directly count set bits using __builtin_popcount(). So we can avoid a separate function for counting set bits.
    
    cout << __builtin_popcount(4) << endl;
 //  O/P: 1


// OR
// Using lookup table
#include <bits/stdc++.h>
using namespace std;

int BitsSetTable256[256];

// Function to initialise the lookup table 
void initialize() 
{ 

    // To initially generate the 
    // table algorithmically 
    BitsSetTable256[0] = 0; 
    for (int i = 0; i < 256; i++)
    { 
        BitsSetTable256[i] = (i & 1) + 
        BitsSetTable256[i / 2]; 
    } 
} 

// Function to return the count 
// of set bits in n 
int countSetBits(int n) 
{ 
    return (BitsSetTable256[n & 0xff] + 
            BitsSetTable256[(n >> 8) & 0xff] + 
            BitsSetTable256[(n >> 16) & 0xff] + 
            BitsSetTable256[n >> 24]); 
} 

// Driver code 
int main() 
{ 
    // Initialise the lookup table 
    initialize(); 
    int n = 9; 
    cout << countSetBits(n);
} 
