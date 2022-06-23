#include <iostream>
#include "math.h"
using namespace std;

int main() {
    int a=6;
    storage<typeof(a)> & obj = storage<typeof(a)>::Get();
    obj.addTo(a);
    return 0;
}
