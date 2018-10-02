static int solve(int n, int[] s, int d, int m){
    int total=0;
    for (int i=0;i<=n-m;i++){
        if(Arrays.stream(s, i, i+m).sum() == d)
            total++;
    }
    return total;
}

#write test cases to run
