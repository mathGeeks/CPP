#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

struct myStruct
{
  int x;
  int y;
};

class myClass
{
public:  
    int x;
    int y;
};

int main() 
{
  int i;
  int * pi;
  
  long int li;
  long int *pli;
  
  long long int lli;
  long long int * plli;
  
  unsigned int ui;
  unsigned int * pui;
  
  float f;
  float * pf;
  
  double d;
  double * pd;
  
  long double ld;
  long double * pld;
  
  char c;
  char * pc;
  
  unsigned char uc;
  unsigned char * puc;
  
  string s="124";
  string * ps;
  
  struct myStruct mS;
  struct myStruct * pmS;
  
  myClass mC;
  myClass * pmC;
  
  
  
  cout << "int is: " << typeid(int).name() << endl;
  cout << "  i is: " << typeid(i).name() << endl;
  cout << " pi is: " << typeid(pi).name() << endl;
  cout << "*pi is: " << typeid(*pi).name() << endl;
  
  cout << "long int  is: " << typeid(long int).name() << endl;
  cout << "       li is: " << typeid(li).name() << endl;
  cout << "       pi is: " << typeid(pli).name() << endl;
  cout << "     *pli is: " << typeid(*pli).name() << endl;
  
  cout << "long long int is: " << typeid(long long int).name() << endl;
  cout << "          lli is: " << typeid(lli).name() << endl;
  cout << "         plli is: " << typeid(plli).name() << endl;
  cout << "        *plli is: " << typeid(*plli).name() << endl;
  
  cout << "unsigned int is: " << typeid(unsigned int).name() << endl;
  cout << "          ui is: " << typeid(ui).name() << endl;
  cout << "         pui is: " << typeid(pui).name() << endl;
  cout << "        *pui is: " << typeid(*pui).name() << endl;
  
  
  cout << "float is: " << typeid(float).name() << endl;
  cout << "    f is: " << typeid(f).name() << endl;
  cout << "   pf is: " << typeid(pf).name() << endl;
  cout << "  *pf is: " << typeid(*pf).name() << endl;

  cout << "double is: " << typeid(double).name() << endl;
  cout << "     d is: " << typeid(d).name() << endl;
  cout << "    pd is: " << typeid(pd).name() << endl;
  cout << "   *pd is: " << typeid(*pd).name() << endl;

  cout << "long double is: " << typeid(long double).name() << endl;
  cout << "         ld is: " << typeid(ld).name() << endl;
  cout << "        pld is: " << typeid(pld).name() << endl;
  cout << "       *pld is: " << typeid(*pld).name() << endl;
  
  cout << "char is: " << typeid(char).name() << endl;
  cout << "   c is: " << typeid(c).name() << endl;
  cout << "  pc is: " << typeid(pc).name() << endl;
  cout << " *pc is: " << typeid(*pc).name() << endl;
  
  cout << "unsigned char is: " << typeid(unsigned char).name() << endl;
  cout << "           uc is: " << typeid(uc).name() << endl;
  cout << "          puc is: " << typeid(puc).name() << endl;
  cout << "         *puc is: " << typeid(*puc).name() << endl;
  
  cout << "string is: " << typeid(string).name() << endl;
  cout << "     s is: " << typeid(s).name() << endl;
  cout << "    ps is: " << typeid(ps).name() << endl;
  cout << "    *ps is: " << typeid(*ps).name() << endl;
  
  cout << "struct myStruct is: " << typeid(struct myStruct).name() << endl;
  cout << "             mS is: " << typeid(mS).name() << endl;
  cout << "            pmS is: " << typeid(pmS).name() << endl;
  cout << "           *pmS is: " << typeid(*pmS).name() << endl;
  
  cout << "myClass is: " << typeid(myClass).name() << endl;
  cout << "     mC is: " << typeid(mC).name() << endl;
  cout << "    pmC is: " << typeid(pmC).name() << endl;
  cout << "   *pmC is: " << typeid(*pmC).name() << endl;
  
  cout<<"------"<<endl;
  
  int iA[2];
  long int liA[2];
  long long int lliA[2];
  
  float fA[2];
  double dA[2];
  long double ldA[2];
  
  char cA[2];
  unsigned char ucA[2];
  string sA[2];
  
  struct myStruct mSA[2];
  myClass mCA[2];
  
  
  cout << "     iA is: " << typeid(iA).name() << endl;
  cout << "     liA is: " << typeid(liA).name() << endl;
  cout << "     lliA is: " << typeid(lliA).name() << endl;
  cout << "     fA is: " << typeid(fA).name() << endl;
  cout << "     dA is: " << typeid(dA).name() << endl;
  cout << "     ldA is: " << typeid(ldA).name() << endl;
  cout << "     cA is: " << typeid(cA).name() << endl;
  cout << "     ucA is: " << typeid(ucA).name() << endl;
  cout << "     sA is: " << typeid(sA).name() << endl;
  cout << "     mSA is: " << typeid(mSA).name() << endl;
  cout << "     mCA is: " << typeid(mCA).name() << endl;
  
  cout<<"-------"<<endl;
  
  return 0;
}
