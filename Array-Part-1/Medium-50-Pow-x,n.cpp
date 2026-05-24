#include <iostream>
#include <cmath>
using namespace std;

int main()
{
      double x;
      int n;
      cout << "Enter any number : ";
      cin >> x;

      cout << "Enter the power : ";
      cin >> n;

      cout << "Answer is : " << pow(x, n) << endl;

      return 0;
}