
#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int ar_size;         
    int ar_step;        
    int* po_array;      
    int index;     
public:
    Array(int size = 10, int step = 3);   
    ~Array();                          
    void showElements();              
    void expandArray(int size);            
    int getSize() const;                   
    int getElemSize() const;                
    void setValue(int val);                 
    void setArray(int* pArr, int size);      
};

#endif


