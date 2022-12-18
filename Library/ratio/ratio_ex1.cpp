#include <iostream>
#include <ratio>
using namespace std;

int main ()
{
  typedef std::ratio<1,2> one_half;
  typedef std::ratio<2,4> two_fourths;
  cout << std::boolalpha;
  cout << "1/2 == 2/4 ? "; 
  cout << std::ratio_equal<one_half,two_fourths>::value << endl;
  return 0;
}
