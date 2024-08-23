// NAME - SHIVENDRA DWIVEDI 
// PRN - 23070123122
// EXPERIMENT - 10(B)  

// Swapping the values 

#include<iostream> 
using namespace std; 
void swap(int *x, int *y) 
{
    int *swap;
    swap=x;
    x=y;
    y=swap;
}

int main() 
{
    int a=4,b=7;
    swap(a,b);
    cout<<"Value of a is: "<<a<<"\n";
    cout<<"Value of b is: "<<b<<"\n";
    return 0;
} 

// Value of a is: 7
// Value of b is: 4 








