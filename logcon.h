#ifndef LOGCON_H
#define LOGCON_H

#include <iostream>

using namespace std;

class LogCon
{
public:
          int a,b;
          LogCon() : a(1), b(1) {}

          bool NOT();
          bool AND();
          bool OR();
          bool IMP();
          bool EQU();
          bool XOR();
          bool MyFun(int &q, int &r, int &p);
};

bool LogCon::NOT()
{
   if(a) return false;
   else return true;
}

bool LogCon::AND()
{
    if(a && b) return true;
    else return false;
}

bool LogCon::OR()
{
    if(a || b) return true;
    else return false;
}

bool LogCon::IMP()
{
    if ((a) && (!b)) return false;
    else return true;
}

bool LogCon::EQU()
{
    if (a == b) return true;
    else return false;
}

bool LogCon::XOR()
{
    if (a && b) return false;
    else if (a != b) return true;
    else return false;
}

bool LogCon::MyFun(int &q, int &r, int &p)
{
   int partresults[3];

   this->a = q;
   this->b = r;

   if(AND()) partresults[0] = 1;
   else partresults[0] = 0;

   this->a = p;
   this->b = partresults[0];

   if(IMP()) partresults[0] = 1;
   else partresults[0] = 0; //first

   this->b = q;

   if(IMP()) partresults[1] = 1;
   else partresults[1] = 0;

   this->b = r;

   if(IMP()) partresults[2] = 1;
   else partresults[2] = 0;

   this->a = partresults[1];
   this->b = partresults[2];

   if(AND()) partresults[1] = 1;
   else partresults[1] = 0;

   this->a = partresults[0];
   this->b = partresults[1];

   if(EQU()) return true;
   else return false;
}

#endif // LOGCON_H
