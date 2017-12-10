#include <iostream>
using namespace std;
int main(){
    int n,t;
    cout << "Enter the number of roads: ";
    cin >> n;
    cout << endl << "Enter the time of every road: ";
    cin >> t;
    int a,b;
    int x=0;
    int y=0;
    int ss=0;
    int s=0;
    for (int i=0;i<n;i++){
            cout << endl << "Enter the time of A" << i+1 << "A" << i+1 << "and B" << i+1 << "B" << i+1 << ": ";
            cin >> a >> b;
            x=x+a;
            y=y+b;
            ss=x+t;
            if (y<ss) s=y;
            else y=ss;
    }
cout<<"Minimum time is " << s;
return 0;
}
