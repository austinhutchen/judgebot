#include <iostream>
using namespace std;

int factorial(int n) {
  if (n == 1) {
    return n;
  }
  return n * factorial(n - 1);
}
int main() {
  int n;
  cout << "Enter the number to find the factorial of below:" << endl;
  cin >> n;
  cout << factorial(n);
  return 0;
}