#include <iostream>
#include <exception>
using namespace std;

struct ooops : std::exception 
{
  const char* what() const noexcept {return "Ooops!";}
};

int main () 
{
  ooops e;
  std::exception* p = &e;
  try 
  {
      throw e;       // throwing copy-constructs: ooops(e)
  } catch (std::exception& ex) 
  {
      cout << ex.what()<<endl;
  }
  
  cout<<"---"<<endl;
  
  try 
  {
      throw *p;      // throwing copy-constructs: std::exception(*p)
  } catch (std::exception& ex) 
  {
      cout << ex.what()<<endl;
  }
  return 0;
}
