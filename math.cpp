#include <iostream>
bool isPowTwo(uint64_t value)
{
    if (value == 1) return true;
    while (value!=2)
    {
        if (value % 2 ==1) return false;
        value=value/2;
    }
    return true;
}