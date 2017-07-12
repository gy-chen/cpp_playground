#include <iostream>
#include <string>
using namespace std;

class Cat
{
public:
  string name;

  void bark()
  {
    cout << "LaaLaa " + name << endl;
  }
};

int main()
{
  Cat c1;
  c1.name = "Monshin";
  c1.bark();

  return 0;
}
