/* Create a class Complex to represent a complex number with real and imaginary parts.
Implement:
• A parameterized constructor to initialize the complex number.
• A function addComplex(Complex c1, Complex c2) that takes two Complex objects
as arguments and returns their sum as a new Complex object.
Write a program to demonstrate adding two complex numbers using this function.*/
#include <iostream>
using namespace std;

class Complex
{
private:
    double real, imaginary;

public:

    Complex()
    {
        real= 0;
        imaginary= 0;
    }

    Complex(double r, double i)
    {
        real= r;
        imaginary= i;
    }
    friend Complex addComplex(Complex c1, Complex c2 );

    void display()
    {
        cout<<real<<"r "<<imaginary<<"i"<<endl;
    }
};

Complex addComplex(Complex c1, Complex c2 )
{
    Complex result;
    result.real= c1.real + c2.real;
    result.imaginary= c1.imaginary + c2.imaginary;
    return result;
}
int main()
{
    Complex c1(3.4, 4.6);
    Complex c2(2.2, 9.8);

    Complex sum= addComplex(c1,c2);

    cout<<"first set of complex numbers are: ";
    c1.display();

    cout<<"second set of complex numbers are: ";
    c2.display();

    cout<<"sum: ";
    sum.display();

    return 0;
}
