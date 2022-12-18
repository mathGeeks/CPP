#include <iostream>
#include <initializer_list>
using namespace std;

int main ()
{
  std::initializer_list<int> mylist;
  mylist = { 10, 20, 30 };
  cout << "mylist contains:";
  for (int x: mylist)
  {
      cout << ' ' << x;
  }
  cout << endl;
  return 0;
}
