#include <iostream>
#include <string>
#include <limits>
using namespace std;

template <class T>
void Print(string msg)
{
  cout<<"Set cout as std::boolalpha"<<endl;
  cout << std::boolalpha;
  cout<<"----"<<endl;
  cout<<"For "<<msg<<endl;
  cout << "Minimum value for "<<msg<<": " << std::numeric_limits<T>::min() << endl;
  cout << "Maximum value for "<<msg<<": " << std::numeric_limits<T>::max() << endl;
  cout << msg<<" is signed: " << std::numeric_limits<T>::is_signed << endl;
  cout << "Non-sign bits in "<<msg<<": " << std::numeric_limits<T>::digits << endl;
  cout << msg<<" has infinity: " << std::numeric_limits<T>::has_infinity << endl;
  cout<<"-----"<<endl;
  cout << msg<<" is an integer: " << std::numeric_limits<T>::is_integer << endl;
  cout << msg<<" is exact: " << std::numeric_limits<T>::is_exact << endl;  
}
int main () 
{
  Print<int>("int");
  Print<long int>("long int");
  Print<long long int>("long long int");
  
  Print<unsigned int>("unsigned int");
  Print<unsigned long int>("unsigned long int");
  
  cout<<"~~~~~~~~~~~~~~~~~~~~"<<endl;
  
  Print<short>("short");
  Print<unsigned short>("unsigned short");
  
  cout<<"~~~~~~~~~~~~~~~~~~~~"<<endl;
  
  Print<float>("float");
  
  cout<<"~~~~~~~~~~~~~~~~~~~~"<<endl;
  
  Print<double>("double");
  Print<long double>("long double");
  
  cout<<"~~~~~~~~~~~~~~~~~~~~"<<endl;
  
  Print<char>("char");
  Print<unsigned char>("unsigned char");
  
  cout<<"~~~~~~~~~~~~~~~~~~~~"<<endl;
  return 0;
}
