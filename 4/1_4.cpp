#include <iostream>
using namespace std;

int main(){
int N;
cout << "Enter the number of elements-" << endl;
cin >> N;
int A[N];
for(int i=0;i<N;i++){
cout << "Enter the element" << i+1 << "-" << endl;
cin >> A[i];
}
int temp[N];
for (int i=0;i<N;i++){
        if (A[i]==0)temp[i]=-1;
        if (A[i]==3||A[i]==2) temp[i]=0;
         for (int q=2; q*q<=A[i]; q++) {
          if (A[i]%q==0) temp[i]=1;
          else temp[i]=0;
         }
}
for (int i=0;i<N;i++){
if (temp[i]==0) {
    for (int j=i+1;j<N;j++)
        if (A[i]==A[j]){
        A[i]=0;
        A[j]=0;
        }
}
}
  cout << "Array without repeats prime numbers: " << endl;
for (int i=0;i<N;i++){
 if (A[i]!=0) cout << A[i] << endl;
if(temp[i]==-1) cout << 0 << endl;
}
delete []A;
delete []temp;
return 0;
}
