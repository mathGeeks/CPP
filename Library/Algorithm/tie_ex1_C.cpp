#include <iostream>
#include <tuple>
using namespace std;

int main ()
{
  int myint;
  char mychar;
  tuple<int,float,char> mytuple;
  mytuple = std::make_tuple (10, 2.6, 'a');          // packing values into tuple
  tie (myint, std::ignore, mychar) = mytuple;   // unpacking tuple into variables
  cout << "myint contains: " << myint << endl;
  cout << "mychar contains: " << mychar << endl;
  return 0;
}
