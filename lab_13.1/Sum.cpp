#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace Dod;
using namespace Var;

void Sum::sum(){
 n = 0;
 a = 1;
 s = a;
 do{
     n++;
     R = (2. * (n - 1)) / (2. * (n+1)) * (1.  / (x*x));
     a *= R;
     s += a;
 } while(fabs(a) > e);
}
