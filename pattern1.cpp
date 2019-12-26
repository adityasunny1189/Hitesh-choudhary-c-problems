#include<iostream>
using namespace std;
int main() {
  cout << "Pattern 1:-" << endl;
  for(int i = 0 ; i < 5 ; i++) {
    for(int j = 0 ; j <= i ; j++)
      cout << "*";
    cout << endl;
  }

  // output:-
  // Pattern 1:-
  // *
  // **
  // ***
  // ****
  // *****


  cout << "Pattern 2:-" << endl;
  for(int i = 5 ; i > 0 ; i--) {
    for(int j = 1 ; j <= i ; j++)
      cout << "*";
    cout << endl;
  }

  // output:-
  // Pattern 2:-
  // *****
  // ****
  // ***
  // **
  // *

  cout << "Patten 3:-" << endl;
  for(int i = 4; i >= 0 ; i--) {
    for(int j = 0 ; j < 5 ; j++) {
      if(i > j)
        cout << " ";
      else
        cout << "*";
    }
    cout << endl;
  }

//   Patten 3:-
//     *
//    **
//   ***
//  ****
// *****

cout << "Patten 4:-" << endl;
for(int i = 0; i < 5 ; i++) {
  for(int j = 0 ; j < 5 ; j++) {
    if(i > j)
      cout << " ";
    else
      cout << "*";
  }
  cout << endl;
}

// Patten 4:-
// *****
//  ****
//   ***
//    **
//     *


  return 0;
}
