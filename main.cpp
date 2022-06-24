#include <iostream>
#include "math.h"

using namespace std;

int main() {
    int a=6;
    Storage<int> & st = Storage<int>::Instance();

    for (int i = 0; i < 10; i++) {
        st.AddTo(i);
    }

    st.DeleteFrom(3);

    return 0;
}
