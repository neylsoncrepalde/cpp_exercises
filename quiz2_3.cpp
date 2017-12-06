#include <iostream>

using namespace std;

double getDouble() {
  cout << "Enter a double value: ";
  double x;
  cin >> x;
  return x;
}

char getOperator() {
  cout << "Enter a mathematical operation (+, -, * or /): ";
  char op;
  cin >> op;
  return op;
}

void printResult(double x, char op, double y) {
  // operations
  if (op == '+')
    cout << x << " + " << y << " = " << x + y << endl;
  if (op == '-')
    cout << x << " - " << y << " = " << x - y << endl;
  if (op == '*')
    cout << x << " * " << y << " = " << x * y << endl;
  if (op == '/')
    cout << x << " / " << y << " = " << x / y << endl;
}

int main()
{
  double x = getDouble();
  double y = getDouble();

  char op = getOperator();

  printResult(x, op, y);
  
  return 0;
}
