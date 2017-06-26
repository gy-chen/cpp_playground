#include <iostream>
using namespace std;

int main()
{
  auto a1 = true;
  auto a2 = 4413;
  auto a3 = 2500000000000;

  cout << "Size of true: " << sizeof(a1) << endl;
  cout << "Size of 4413: " << sizeof(a2) << endl;
  cout << "Size of 2500000000000: " << sizeof(a3) << endl;

  return 0;
}
