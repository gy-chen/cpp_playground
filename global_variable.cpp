#include <iostream>
#include <string>
using namespace std;

string name;

void input_name();

int main() {
  input_name();
  cout << "Your name is " << name << endl;

  return 0;
}

void input_name() {
  cout << "Enter your name: ";
  cin >> name;
}
