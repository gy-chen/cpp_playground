#include <iostream>
using namespace std;

constexpr double PI();
constexpr double TWICE_PI();

int main()
{
    cout << "pi: " << PI() << endl;
    cout << "twice of pi: " << TWICE_PI() << endl;

    return 0;
}

constexpr double PI()
{
  return 22. / 7;
}

constexpr double TWICE_PI()
{
  return PI() * 2;
}
