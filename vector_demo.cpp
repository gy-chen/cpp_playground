#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vector_i (3);

  cout << "Size of vector<int> (3): " << vector_i.size() << endl;

  vector_i.push_back(0);

  cout << "Size of vector<int> (3) after pushing back a value: " << vector_i.size() << endl;

  return 0;
}
