/* sd21p7.cpp is the sourcefile for sd21p7
 *
 * DESCRIPTION:
 * From Dmitrovic, Slobodan, Modern C++ for Absolute Beginners, Apress, 2020.
 *
 * Create an int on the heap and get a pointer to it. Use the pointer to
 * transform the data, reclaim the heap space.
 *
 * Create an array of integers on the heap and get a pointer to the first int.
 * Initialize the array, print out the array, release the heap space.
 *
 * NOTES:
 *
 * Thu 24 Apr 2025 12:21:52 AM PDT
 * Create project on local host and set up repo on GitHub.
 *
*/


#include <iostream>

int main() {
    int *p = new int;

    *p = 123;

    std::cout << "The pointed to value is: " << *p << '\n';

    delete p;


    return 0;
}
