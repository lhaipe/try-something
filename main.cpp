#include<iostream>
using namespace std;

class A
{
  public:
    void read()
    {
      cout<<"This is an void item!";
    }
};

int main()
{
    A a;
    a.read();
}
