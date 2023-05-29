#include <iostream>
#include "array.h"

using namespace std;

int main() {
    Array arr(3, 3);
    int values[] = {1, 0, 2, 20, 12, 1};
    arr.setArray(values, 6);
    arr.setValue(44);
    arr.showElements();
    return 0;
}
