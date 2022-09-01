/*Your class recently got a maths assignment with 55 questions. There are N (\le 20)N(≤20) students in the class and at most 22 people can collaborate. For each student, you know which problems they solved.

Find out if there exists a team of two students who can together solve all problems.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases. TT test cases follow.

Each of the following test cases contains N + 1N+1 lines, where NN is the number of students in the class.
The first line contains a single integer NN.
Each of the following NN lines contains K_i + 1K 
i
​
 +1 positive integers separated by whitespaces.
In the i^{th}i 
th
  line, the first positive integer K_iK 
i
​
  is the number of problems the i^{th}i 
th
  student can solve. The next K_iK 
i
​
  integers are x_1, x_2, \ldots, x_{K_i}x 
1
​
 ,x 
2
​
 ,…,x 
K 
i
​
 
​
 , the indices of the problems this student can solve.
Output Format
The output must consist of TT lines.

Each line must contain a single string: The solution to the i^{th}i 
th
  test case as a YES or NO (where YES should be returned if some pairing of students is capable of solving all the problems, and NO otherwise).
You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints
1 \leq T \leq 10001≤T≤1000
2 \leq N \leq 202≤N≤20
0 \leq K_i \leq 50≤K 
i
​
 ≤5
1 \leq x_i \leq 51≤x 
i
​
 ≤5*/
#include <bits/stdc++.h>
#define l1 long long int
using namespace std;

int chkvector(vector<int> v, vector<int> u){
    map<int, int> m;
    for(int i=0; i<v.size(); i++)
    m[v[i]];
    for(int i=0; i<u.size(); i++)
    m[u[i]];
    int sum=0; 
    for(auto it:m){
        sum+=it.first;
    }
    if(sum==15) return 1;
    else return 0;
}

int main(){
   
   l1 T;
   cin>>T;
   while(T--){
   int n;
   cin>>n;
   vector<vector<int>> v;
   int x,y;
   for(int i=0; i<n; i++){
      cin>>x;
      vector<int> u;
      for(int j=0; j<x; j++){
        cin>>y;
       u.push_back(y);
      }
      v.push_back(u);
   }
   int count=0;
   for(int i=0; i<n; i++){
     for(int j=i+1; j<n; j++){
        count=chkvector(v[i], v[j]);
        if(count==1) break;
     }
        if(count==1) break;
     
   }
   if(count==1)  cout<<"yes"<<endl;
   else cout<<"no"<<endl;

   }
    return 0;
}
