#include <iostream>


//Write a program that reads in 5 integers and prints the
// largest and the smallest of the group.
int main() {

    int a, b, c, d, e;
    std::cout << "enter 5 intergers";
    std::cin >> a >> b >> c >> d >> e;
    int largest;

    if (a > b) largest = a; 
    else largest = b;

    if (c > largest)largest = c;

    if (d > largest)largest = d;

    if (e > largest)largest = e;

    std::cout << "the largest number is " << largest << std::endl;
}
int main() {

    int a, b, c, d, e;
    std::cout << "enter 5 intergers";
    std::cin >> a >> b >> c >> d >> e;
    int smallest;

    if (a > b) smallest = a; 
    else smallest = b;

    if (c > smallest)smallest = c;

    if (d > smallest)smallest = d;

    if (e > smallest)smallest = e;

    std::cout << "the smallest number is " << smallest << std::endl;
    

//Write a program that calculates and prints the sum of the first 50 
//positive integers that are multiples of 7.
    return 0;

}

