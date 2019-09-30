#include <iostream>
class szulo
{
private:
  unsigned int stuff;
public:
  virtual void setStuff(int m)
  {
    stuff = 1;
  }
  virtual int getStuff()
  {
    return stuff;
  }
};
class gyerek : public szulo
{
  int getGyStuff()
  {
    return 0;
  }
};
int main()
{
  szulo *szulo = new gyerek();
  std::cout << szulo->getGyStuff() << std::endl;
  return 0;
  
}
