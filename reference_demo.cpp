#include <iostream>
using namespace std;

int main()
{
  int original = 4413;

  cout << "Original address: " << hex << &original << endl;

  int& ref = original;
  cout << "Reference address: " << hex << &ref << endl;

  return 0;
}
