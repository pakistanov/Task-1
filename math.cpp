#include <iostream>
#include "math.h"


bool isPowTwo(uint64_t value)
{
    if (value <= 0) return false;
    if ((value & (value-1)) ==0 ) return true;
    return false;
}

