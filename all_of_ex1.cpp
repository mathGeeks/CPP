// all_of example
#include <iostream>     // std::cout
#include <algorithm>    // std::all_of
#include <array>        // std::array

int main () 
{
  std::array<int,8> foo = {3,5,7,11,13,17,19,23};

  if ( std::all_of(foo.begin(), foo.end(), [](int i){return (i%2==1);}) )
  {
    std::cout << "All the elements are odd numbers.\n";
  }
  else
  {
      std::cout << "At least one of the elements are even numbers.\n";
  }

  return 0;
}
