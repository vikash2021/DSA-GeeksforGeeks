int countSumSubsets(int arr[], int N){
    
    // Your code here
    int c=0;
    for (int i = 1; i < (pow(2, N)); i++) {

        // sum of a combination
        int sum = 0;

        for (int j = 0; j < N; j++)

            // if the bit is 1 then add the element
            if (((i >> j) & 1))
                sum += arr[j];

        // if the sum is equal to given sum print yes
        if (sum%2==0) {
            c++;
           
        }
    }

    return c;
    
}
