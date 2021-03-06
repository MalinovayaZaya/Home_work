//Напишите эффективную функцию находящую k-ую порядковую статистику в массиве. Программа должна состоять из этой функции и примера её использования в main.
#include <iostream>
using namespace std;
void Sort(int*H, int m, int n){
    int l=m;
    int r=n;
    int piv=H[(l+r)/2];
    while (l<=r) {
        while (H[l]<piv) l++;
        while (H[r]>piv) r--;
        if (l<=r) {swap (H[l],H[r]); l++; r--;
    }
  }
if (m<r) Sort (H,m,r);
if (l<n) Sort (H,l,n);
}
int main(){
    int n,k;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int H[n];
    cout<<endl<<"Enter the array: "<<endl;
    for (int i=0;i<n;i++){
    cin>>H[i];
    }
    cout<<"Enter k ";
    cin>>k;
    Sort(H,0,n-1);
    cout<<k<<" element is "<<H[k-1];
return 0;
}
