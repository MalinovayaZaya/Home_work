/*�������� ��������� ��������� � ��������� ������� �������� �������� ������� ����� ����� ������ ����� �������� ����� ��������.
� ���� ������ ������ ������������ �� ������, �.�. ������� ����������� ����� ����������.
��� �������� ������� ����������� ������ ��������, ��� ������ �������� �����������(�.�. ��� ������� ��������).
������ ����� �������� �� ���� ����������. */

#include <iostream>
using namespace std;

int main (){
   int n,w;
   cout<< "Enter the number of rows and columns ";
   cin>>n>>w;
   int A [n][w];

  for (int i = 0; i < n; i++){
        cout<<"Enter the elements of your array column " << i+1 << endl;
        for (int j = 0; j < w; j++){
            cin>>A [i][j];

    }
  }
  int u;
  int g;
  for (int i = 0; i < n; i++){
        for (int j = 0; j < w; j++){
            u=i+j;
           g=A[i][j];
                if(g!=0&&g==3*u){
            cout << "Element Array(" << i+1 << "," << j+1 << ")=" << A[i][j] << endl;
    }
  }
  }
 delete[]A;
  return 0;
}
