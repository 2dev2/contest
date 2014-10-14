//change in lis_nlogn_print
set<int> s;
to
set<int,greater<int> > s;
and 
map<int,int> m;
to
map<int,int,greater<int> > m;

Also little changes need to be made to the above codes if you dont want the LIS to be 
strictly increasing and rather be Longest Non-Decreasing Subsequence or Longest Non-Increasing Subsequence.
