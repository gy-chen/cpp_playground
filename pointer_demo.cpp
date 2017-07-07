#include <iostream>
using namespace std;

int main()
{
  string hello = "Hello Pointer!";

  cout << "Address of variable hello: " << &hello << endl;

  string* pointer = &hello;

  cout << *pointer << endl;

  return 0;
}
