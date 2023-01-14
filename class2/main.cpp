#include <iostream>
#include "Add.h"
using namespace std;

void Increment(int& a) //here we are passing a copy by value
{
    a = a+1;
}

void Swap(int& a, int& b) //this is a function that swaps two integers
{
    int temp = a;
    a = b;
    b = temp;
}

//use pointers to swap two integers
void Swap2(int* ap, int* bp)
{
    int temp = *ap;
    *ap = *bp;
    *bp = temp;
}

//recursive function to calculate the factorial of a number
int Factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * Factorial(n-1);
    }
}

//recursive function to calculate the fibonacci of a number
int Fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

//use switch function to check an input and assign a grade from A to F
//switch is like a waterfall
void Grade(int grade)
{
    switch (grade)
    {
    case 95 ... 100:
        cout << "A" << endl;
        break;
    case 90 ... 94:
        cout << "A-" << endl;
        break;
    case 85 ... 89:
        cout << "B+" << endl;
        break;
    case 80 ... 84:
        cout << "B" << endl;
        break;
    case 75 ... 79:
        cout << "B-" << endl;
        break;
    case 70 ... 74:
        cout << "C+" << endl;
        break;
    case 65 ... 69:
        cout << "C" << endl;
        break;
    case 0 ... 64:
        cout << "F" << endl;
        break;
    default:    //this is the default case
        cout << "Invalid grade" << endl;
        break;
    }
}


int main(){
    cout << add(1, 2) << endl; //using the header function
    cout << "printing a float value using static_cast: " <<static_cast<double>(3) / 2 << endl; //static casting is used to define a type desired in Output


    const double pi =3.14; // we define a constant variable
    cout << "print the value of constant pi: " << pi << endl; //print the value of pi
    //pi = 333;  type safety code will catch this as this is const.


    double x = 2.2; //defining two doubles
    double y = 3.1;
    cout << "trying to print double but not possible " << add(x,y) << endl; //trying to print doubles using the Add function (in which we used int). IT DOESNT! IT print an INT


    // make a global variable called m and set it to 5
    // call Increment(m) and print the result
    int m = 5;
    Increment(m);
    cout << "m = " << m << endl; //this will print 6


    int a = 5; //this is an integer
    int* pa = &a; //this is a pointer to a
    cout << "the pointer to 'm' is used " << *pa <<endl; //this is the value of a
    cout<< "the pointer itself is" << &a << endl; //this is the address of a


    int *px2 = nullptr; //this is good practice to initialize a pointer to null


    //call swap(a,b) and print the result
    int b = 6;
    Swap(a,b);
    cout << "a = " << a << " b = " << b << endl; //this will print 6 and 5

    //call swap2(a,b) and print the result
    Swap2(&a,&b);
    cout << "a = " << a << " b = " << b << endl; //this will print 5 and 6

    //define an array of 5 integers
    int arr[5] = {1,2,3,4,5};
    //loop through the array and print the values
    for (int i : arr)
    {
        cout << i << endl;
    }
    
    //print the grade for 95
    Grade(95);

    //print the factorial of 5
    cout << "factorial of 5 is " << Factorial(5) << endl;

    return 0;
}

/* When using references use the & keyword for example
int a = 5;
int& refa = a;
refa = 6;
'a' also becomes 6*/

// Uses of references
// 1. Pass by reference
// 2. Performance reasons like  big matrices pass as const reference
// 3. Learn later

//array is a fixed size collection of elements of the same type
// the elements are next to each other in memory
// array indexes cannot be negative
// starts at 0 like python