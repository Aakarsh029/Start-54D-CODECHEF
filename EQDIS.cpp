/*Let F(S)F(S) denote the number of distinct elements in the array SS. For example, F([1, 2, 3, 2]) = 3, F([1, 2]) = 2.F([1,2,3,2])=3,F([1,2])=2.

You are given an array AA containing NN integers. Find if it is possible to divide the elements of the array AA into two arrays BB and CC such that :

Every element of the array AA belongs either to array BB or to array CC.
F(B) = F(C)F(B)=F(C).*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--)
    {
        int n,count;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        if(n%2!=0)
        {
                set<int> S; 
            for (int i = 0; i < n; i++) {
                S.insert(a[i]); 
        }
            count = S.size();
            if(count<n)
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
	return 0;
}
