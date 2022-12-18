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

void PrintGslice(gslice slc,string name)
{
    cout<<name<<":"<<endl;
    cout<<(int)slc.start();
    cout<<endl;
    PrintValarray<size_t>(slc.stride(),"slc.stride()");
    cout<<endl;
    PrintValarray<size_t>(slc.size(),"slc.size()");
    cout<<endl;
}

int main ()
{
  std::valarray<int> foo (14);
  for (int i=0; i<14; ++i)
  {
      foo[i]=i*i;
  }

  std::size_t start=1;
  std::size_t lengths[]= {2,3};
  std::size_t strides[]= {7,2};

  std::gslice mygslice (start,
                        std::valarray<std::size_t>(lengths,2),
                        std::valarray<std::size_t>(strides,2));

  std::valarray<int> bar = foo[mygslice];

  PrintValarray<int>(bar,"bar");
  cout<<"----"<<endl;
  PrintGslice(mygslice,"mygslice");
  cout<<"----"<<endl;
  return 0;
}
