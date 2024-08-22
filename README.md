# Experiment---10
Aim ---> To study and implement Pointer Operations (Call by value and Call by reference).

Software Used --> VS Code

Theory

Pointers are symbolic representations of addresses.
We can pass arguments to funtions using different methods mainly call by value and call by reference.

Call by value
In the call-by-value method, function arguments are passed by copying the value of the actual parameter, ensuring the original values remain unchanged.
The value is copied to the formal parameter.
Any changes made to the parameters within the function do not change the original values outside the function.

Call by reference
In the call-by-reference method, the memory address (reference) of the actual parameter is passed to the function, allowing direct access and modification of the original values.
The actual and the formal parameters point to the same memory address.

Any changes made to the parameters within the function are directly reflected in the original values outside the function.

Code:- 

(A)
// Printing the values by using callby value 

#include<iostream> 
using namespace std; 
void swap(int x, int y) 
{
    int swap;
    swap=x;
    x=y;
    y=swap;
}

int main() 
{
    int a=4, b=7;
    swap(a,b);
    cout<<"Value of a is: "<<a<<"\n";
    cout<<"Value of b is: "<<b<<"\n";
    return 0;
}

(B)
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

(C)
// Swapping the values using call by reference  

#include<iostream> 
using namespace std; 
void swap(int *x, int *y) 
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}

int main() 
{
    int a=4,b=7;
    swap(&a,&b);
    cout<<"Value of a is: "<<a<<"\n";
    cout<<"Value of b is: "<<b<<"\n";
    return 0;
}

Output:-
(A)
![Output_10A](https://github.com/user-attachments/assets/365e0d17-34bf-4eed-ad90-1922bc22801a)

(B)
![Output_10B](https://github.com/user-attachments/assets/ae8888fb-4bcc-4cde-be2e-896243cd0caf)

(C)
![Output_10C ](https://github.com/user-attachments/assets/516a519d-5381-4a49-ac63-c8336e1525f7)


Conclusion --> I learnt about pointers and how to pass arguments to functions using call by value and call by reference methods. I also learnt how to swap values using call by reference.
