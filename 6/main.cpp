#include <iostream>
#include <cmath>
using namespace std;

int palindrom (int n){
if(n==1)
cout << 9 << " is palindrom multiple of 9";
else{
int p,sum;
p=pow(10,n)-pow(10,n-1);
int**a=new int*[p];
sum=pow(10,n-1);
while (sum%9!=0){
sum=sum+1;
}
for (int i=0;i<p/9;i++){
a[i]=new int [n];
sum=sum+9;
if (sum%10!=0){
for (int j=0;j<n;j++){
a[i][j]=(sum%(int)(pow((float)10,(j+1))))/pow((float)10,j);
}
}
else {continue;}
}
int d,l;
int k,h,c;
d=p/9-p%10;
int u[d];
k=n/2;
for (int i=0;i<d;i++){
        u[i]=0;
h=n-1;
        for (int j=0;j<k;j++){
if (a[i][j]==a[i][h]) {u[i]=u[i]+1;}
else {u[i]=0;continue;}
h=h-1;
}
}
for (int i=0;i<d;i++){
        for (int j=0;j<n;j++){
if (k==u[i]) cout << a[i][j];}
if (u[i]==k) cout << "  is palindrom multiple of 9" << endl;
}
for (int i = 0; i < p; i++)
{
  delete [] a[i];
}
delete [] a;
}
}
int main(){
int n;
cout << "Enter n= ";
cin>>n;
palindrom(n);
return 0;
}
