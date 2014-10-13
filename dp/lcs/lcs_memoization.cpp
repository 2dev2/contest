//Memoization Technique (Top-down):


int lcs_memo(char* x, int n, char* y,int m)
{

//create table and initialize it
    int memo[n+1][m+1];
    for(int i=0;i<=n;i++)
         for(int j=0;j<=m;j++)
            memo[i][j]=-1;
 
/*base cases*/
    if(m==0)return 0;
    if(n==0)return 0;
 
/*see if already calculated*/
    if(memo[n][m]!=-1) return memo[n][m];
 
/*if not calculated, calculate now*/
    int result=0;
    if(x[n]==y[m])
           result=1+lcs_memo(x,n-1,y,m-1);
    else
           result=max(lcs_memo(x,n-1,y,m),lcs_memo(x,n,y,m-1));
 
/*save result*/
    memo[n][m]=result;
 
    return result;
}

/*
It is possible to write a little more efficient code for LCS . 
The time complexity is the same (or probably a little higher in terms of bigger constants)
but the space complexity can be reduced to be linear . Check the code  here .
Note that the LCS is not unique. If you want to find all the LCSs see the pseudocode at wiki. Lastly,
lcs can also be found using the edit distance algo 
by making the cost of replacement greater than that of an insertion plus a deletion.
*/
