#include <iostream>
#include <string>
#include <valarray>
using namespace std;

template <class T>
void PrintValarray(std::valarray<T> va,string name)
{
    cout<<name<<":"<<endl;
    for(int i=0;i<va.size();i++)
    {
        cout<<va[i]<<" ";
    }
    cout<<endl;
}

int main ()
{                                //    foo:      bar:

  std::valarray<int> foo (4);    //  0 0 0 0
  std::valarray<int> bar (2,4);  //  0 0 0 0   2 2 2 2

  foo = bar;                     //  2 2 2 2   2 2 2 2
  
  cout<<"~~~~~~~~~"<<endl;
  PrintValarray<int>(foo,"foo");
  PrintValarray<int>(bar,"bar");
  
  bar = 5;                       //  2 2 2 2   5 5 5 5
  
  cout<<"~~~~~~~~~"<<endl;
  PrintValarray<int>(foo,"foo");
  PrintValarray<int>(bar,"bar");
  
  foo = bar[std::slice (0,4,1)]; //  5 5 5 5   5 5 5 5
  
  cout<<"~~~~~~~~~"<<endl;
  PrintValarray<int>(foo,"foo");
  PrintValarray<int>(bar,"bar");
  return 0;
}
