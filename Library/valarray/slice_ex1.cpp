#include <iostream>
#include <string>
#include <cstddef>
#include <valarray>
using namespace std;

template <class T>
void PrintValarray(valarray<T> va, string name)
{
    cout<<name<<":"<<endl;
    for(int i=0;i<va.size();i++)
    {
        cout<<va[i]<<" ";
    }
    cout<<endl;
}

void PrintSlice(slice slc,string name)
{
    cout<<name<<":"<<endl;
    cout<<slc.start()<<" "<<slc.stride()<<" "<<slc.size()<<endl;
}
int main ()
{
  std::valarray<int> foo (12);
  for (int i=0; i<12; ++i)
  {
      foo[i]=i*i;
  }

  std::slice second (2,3,4);
  std::slice third (second);

  std::valarray<int> bar = foo[third];

  PrintValarray<int>(foo,"foo");
  cout<<"---------"<<endl;
  PrintValarray<int>(bar,"bar");
  cout<<"---------"<<endl;
  PrintSlice(second,"second");
  cout<<"---------"<<endl;
  return 0;
}
