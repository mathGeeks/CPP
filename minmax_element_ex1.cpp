#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main () 
{
  array<int,7> foo {3,7,2,9,5,8,6};
  auto result =minmax_element (foo.begin(),foo.end());
  cout << "min is " << *result.first;
  cout << ", at position " << (result.first-foo.begin()) << '\n';
  cout << "max is " << *result.second;
  cout << ", at position " << (result.second-foo.begin()) << '\n';
  return 0;
}
