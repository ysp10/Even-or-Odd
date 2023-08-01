// To check if the number is even or odd.
#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "Enter the number: "; cin >> a;
  /* logic */

  if (a % 2 == 0) {
    cout << "The Number is EVEN" << endl;
  } else {
    cout << "The Nmber is ODD" << endl;
  }

  return 0;
}
