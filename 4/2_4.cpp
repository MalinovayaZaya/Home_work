#include <iostream>
using namespace std;
int main (){
int N;
int i=0;
char*A=new char[N];
cin>>A;
int s=0;
for (i=0;i<N; i++) {
if (A[i]=='w') s++;
}
cout<<s<<" letters w";
delete[] A;
return 0;
}
