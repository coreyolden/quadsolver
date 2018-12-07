#include "validinput.h"
#include "qsolveValidRoots.h"
#include "Asserts.h"

int main(void){
  int ret;
  float a = 3.2;
  ret = validDouble(a);
  assert_eq("input validation", ret, 1);
  
  a = 8;
  ret = validDouble(a);
  assert_eq("input validation", ret, 1);
  
  a = 0.0/0.0;
  ret = validDouble(a);
  assert_eq("input validation", ret, 0);
  
  a = 1.0/0.0;
  ret = validDouble(a);
  assert_eq("input validation", ret, 0);
}
