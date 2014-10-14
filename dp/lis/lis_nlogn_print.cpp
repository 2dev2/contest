#include<iostream>
#include<map>
#include<vector>
using namespace std;
 
typedef pair < int , int > PI;
 /*
 To also get the LIS we need to maintain a previous array which stores the index of the previous element in the LIS. 
 It returns the LIS as an array.
 
 Note that if there are more than one LIS the above code prints the last one which occured in the input array. 
 */
vector<int> LIS(vector<int> A)
{
    int N = A.size(),i,j=-1,t;
    vector<int> pre(N,-1),res;
    map<int,int> m;
    map<int,int>::iterator k,l;
    for (i=0;i<N;i++)
    {
        if (m.insert(PI(A[i],i)).second)
        {
           k = m.find(A[i]);
           l = k;
           k++;
           if (l==m.begin())
                  pre[i]=-1;
           else
           {
               l--;
               pre[i]=l->second;
           }
           if (k!=m.end())
              m.erase(k);
        }
    }
    k=m.end();
    k--;
    j = k->second;
    while (j!=-1)
    {
          res.push_back(A[j]);
          j = pre[j];
    }
    reverse (res.begin(),res.end());
    return res;
}
