#include <iostream>

using namespace std;

int getInt() {
  cout << "Enter an integer: ";
  int x;
  cin >> x;
  return x;
}

int getBigger() {
  cout << "Enter a larger integer: ";
  int x;
  cin >> x;
  return x;
}

int main()
{
  int x = getInt();
  int y = getBigger();

  if (x < y) {
    cout << "The smaller value is " << x << endl;
    cout << "The bigger value is " << y << endl;
  }

  else if (x > y) {
    cout << "Swapping the values..." << endl;
    int a = y;
    int b = x;
    
    cout << "The smaller value is " << a << endl;
    cout << "The bigger value is " << b << endl;
  }

  else {
    cout << "They are equals!" << endl;
  }
  
  return 0;
}
