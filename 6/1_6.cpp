//Напишите программу, которая удаляет из массива все простые числа встречающиеся больше одного раза.
#include <iostream>
using namespace std;
void* delete_annoying_primes (int* a,int n){
int p[n];
for (int i=0; i<n; i++){
        if (a[i]==3 || a[i]==2) p[i]=0;
         for (int o=2; o*o<=a[i]; o++) {
          if (a[i]%o==0) {p[i]=1;continue;}
          else p[i]=0;
         }
}
for (int i=0;i<n;i++){
if (p[i]==0) {
    for (int j=i+1; j<n; j++)
        if (a[i]==a[j]){
        a[i]=0;
        a[j]=0;
        }
}
}
}
int main(){
int n;
cout << "How many elements in array? ";
cin >> n;
int a[n];
for(int i=0; i<n; i++){
cout << "Enter the element " << i+1 << " ";
cin >> a[i];
}
int temp[n];
for(int i=0; i<n; i++){
    if(a[i]==0){
        temp[i]=1;
    }
    else{
        temp[i]=0;
    }
}
cout << delete_annoying_primes (a,n) << endl;
cout << "new array: ";
for (int i=0;i<n;i++){
if (a[i]!=0) {
    cout << a[i] <<" ";
}
else{
    if(temp[i]==1) cout << 0 << " ";
}
}
delete[]a;
delete[]temp;
return 0;
}
