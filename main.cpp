#include <iostream>
using namespace std;
int main () {
int n;
cout << "How many elements in array? " << endl;
cin >> n;
int sum=0, Min=1000;
int*a=new int[5];
for(int i=0; i<5; i++){
cout << "element" << i+1 << endl;
cin >> a[i];
}
int perem;

for (int k=5; k<n; k++) {
cout << "element" << k+1 << endl;
cin >> perem;
for(int i=0; i<5; i++){
if (a[i]<Min) Min=a[i];
if (perem+Min<sum) sum=perem+Min;
}
}
cout << endl << "answer: " << sum;
delete[]a;
return 0;
}
