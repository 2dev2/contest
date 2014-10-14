//We will see here an algorithm which take O(n log k) time where k is the size of the LIS.
//http://www.algorithmist.com/index.php/Longest_Increasing_Subsequence
/*
Only they use set instead of array. This helps in finding a place
to update. With array you should implement binary search.
There is a mistake though. It should be multiset, not set.
*/
#include<iostream>
#include<set>
#include<vector>
using namespace std;
 
int LIS(vector<int> A)
{
    int N = A.size(),i;
    set<int> s;
    set<int>::iterator k;
    for (i=0;i<N;i++)
    {
        if (s.insert(A[i]))
        {
           k = s.find(A[i]);
           k++;
           if (k!=s.end())
              s.erase(k);
        }
    }
    return s.size();
}
