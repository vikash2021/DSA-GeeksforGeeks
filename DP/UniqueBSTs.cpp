int numTrees(int n) {
    
    int A[n+1];
    A[0]=1;
    A[1]=1;
    int mod = 1000000007;
    for(int i=2;i<=n;i++){
        A[i]=0;
        for(int j=1;j<=i;j++){
            A[i] = A[i]+ (1LL*A[j-1]*A[i-j])%mod;
            if(A[i]>=mod)
                A[i]%=mod;
        }
    }
    return A[n];
}
