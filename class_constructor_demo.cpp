#include <iostream>
#include <string>
using namespace std;

class Cat
{
private:
  string name;

public:
  /* Cat()
   {
     cout << "Hello from default constructor" << endl;
  } */

  Cat(string name = "Monshin") : name(name)
  {
    cout << "Hello from Cat(string)" << endl;
  }

  void bark()
  {
    cout << "LaaLaa " + name << endl;
  }
};

int main()
{
  Cat c1;
  Cat* c2  = new Cat;

  return 0;
}
