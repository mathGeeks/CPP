#include <iostream>
#include <tuple>     
using namespace std;
int main ()
{
  tuple<int,char> foo (10,'x');
  cout << get<0>(foo) << ' ';
  cout << get<1>(foo) << endl;
  cout<<"-------------"<<endl;
  get<0>(foo)=100;
  get<1>(foo)='y';
  int fooInt=0;
  char fooChar='a';
  tie(fooInt,fooChar)=foo;
  cout<<fooInt<<' ';
  cout<<fooChar<<endl;
  return 0;
}
