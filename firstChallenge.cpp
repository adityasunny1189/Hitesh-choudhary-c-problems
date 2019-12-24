#include<iostream>
using namespace std;
int main() {
  int no;
  cout << "Enter no: ";
  cin >> no;
  for(int i = 1 ; i <= 20 ; i++) {
    cout << no << " * " << i << " = " << no*i << endl;
  }
  return 0;
}
