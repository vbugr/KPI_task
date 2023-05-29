#include "array.h"
#include <iostream>

using namespace std;

Array::Array(int size, int step)
        : ar_size(size), ar_step(step), po_array(new int[ar_size]), index(0) {}

Array::~Array() {
    delete[] po_array;
}

void Array::showElements() {
    for (int i = 0; i < index; ++i) {
        cout << po_array[i] << " ";
    }
    cout << endl;
}

void Array::expandArray(int size) {
    int* new_array = new int[ar_size + size];
    for (int i = 0; i <index; ++i) {
        new_array[i] = po_array[i];
    }
    delete[] po_array;
    po_array = new_array;
    ar_size += size;
}

int Array::getSize() const {
    return ar_size;
}

int Array::getElemSize() const {
    return index;
}

void Array::setValue(int val) {
    if (index == ar_size) {
        expandArray(ar_step);
    }
    po_array[index] = val;
    index++;
}

void Array::setArray(int* pArr, int size) {
    for (int i = 0; i < size; ++i) {
        setValue(pArr[i]);
    }
}