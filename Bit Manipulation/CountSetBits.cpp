

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
Note: In GCC, we can directly count set bits using __builtin_popcount(). So we can avoid a separate function for counting set bits.
    
    cout << __builtin_popcount(4) << endl;
  //  O/P: 1
