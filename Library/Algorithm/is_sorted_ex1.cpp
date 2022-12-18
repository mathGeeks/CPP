#include <iostream>
#include <algorithm>
#include <array>        
using namespace std;

int main () 
{
  std::array<int,4> foo {2,4,1,3};

  do 
  {
    // try a new permutation:
    std::prev_permutation(foo.begin(),foo.end());

    // print range:
    std::cout << "foo:";
    for (int& x:foo)
    {
        cout <<" "<< x;
    }
    cout <<endl;
  } while (!std::is_sorted(foo.begin(),foo.end()));
  cout << "the range is sorted!\n";
  return 0;
}
