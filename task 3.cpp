//C++ Program to Find Size of int, float, double and char in Your System

#include <iostream>
using namespace std;

int main()
{
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    return 0;
}

//C++ Program to find the product of two numbers entered by the User


#include <iostream>

using namespace std;

int main() {
    float a, b, product;
    cout << "Enter two Numbers: ";
    cin >> a >> b;
    product = a*b;
    cout << "Product = " << product;
    return 0;
}



