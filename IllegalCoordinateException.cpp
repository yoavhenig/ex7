#include "IllegalCoordinateException.h"

IllegalCoordinateException::IllegalCoordinateException (Coordinate newc):c(newc){}

 string IllegalCoordinateException::theCoordinate()const{
   string ans=to_string(c.getI())+","+to_string(c.getJ());
   return ans;
 }
