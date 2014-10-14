//We will see here an algorithm which take O(n log k) time where k is the size of the LIS.
//http://www.algorithmist.com/index.php/Longest_Increasing_Subsequence
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
