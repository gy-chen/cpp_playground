#include <iostream>
using namespace std;

enum Cards
{
    Ace,
    Jack,
    Queen = 45,
    King
};

int main()
{
  cout << "Ace: " << Ace << endl;
  cout << "Jack: " << Jack << endl;
  cout << "Queen: " << Queen << endl;
  cout << "King: " << King << endl;

  return 0;
}
