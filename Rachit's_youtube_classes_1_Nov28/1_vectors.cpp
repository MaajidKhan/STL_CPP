/*
Vector in C++ STL
Vectors are same as dynamic arrays with the ability to resize itself automatically when an element
is inserted or deleted, with their storage being handled automatically by the container. 

Vector elements are placed in contiguous storage so that they can be accessed and traversed 
using iterators. In vectors, data is inserted at the end. 

Inserting at the end takes differential time, as sometimes there may be a need of extending the array. 
Removing the last element takes only constant time because no resizing happens. 

Inserting and erasing at the beginning or in the middle is linear in time.
*/

#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>

bool f(int x, int y)
{
    return x > y;
}

int main()
{
    vector<int> A = {20,10,30,40};
    std::cout << "A[i]: " << A[1] << std::endl;

    sort(A.begin(), A.end()); //Merge sort from <algorithm>, O(NlogN)

    bool present = binary_search(A.begin(), A.end(), 30); //Binary search in O(logN)
    std::cout << "Element is present: " << present << std::endl;

    present = binary_search(A.begin(), A.end(), 88);
    std::cout << "Element is present: " << present << std::endl;

    A.push_back(150); //Appending more elements into a vector
    A.push_back(150);
    A.push_back(150);
    A.push_back(150);
    A.push_back(170);
    A.push_back(160);

    //printing the elements of the vector
    std::cout << "Printing the elements of the vector: " << std::endl;
    for(int a:A)
    {
        std::cout << a << std::endl;
    }

    //currently the elemnts in the vector are: {10,20,30,40,150,150,150,150,170,160}
    //iterators are kind of pointers
    vector<int>::iterator iterator = lower_bound(A.begin(), A.end(),150); // will return >=, so first 150
    //The output we get is in logn time
    std::cout << "iterator: " << *iterator << std::endl;


    vector<int>::iterator iterator1 = upper_bound(A.begin(), A.end(), 150); // will return >, so 170
    std::cout << "iterator1: " << *iterator1 << std::endl;

    //To know how many times 150 is occuring, the diff would be 4
    std::cout << "iterator1 - iterator = " << iterator1 - iterator << std::endl;

    //sorting the vector in reverse order or descending order
    sort(A.begin(), A.end(), f); //f is defined bus as a comparator function.
    //comparator functions just returns true or false

    //printing the vectors in descending order using iterator approach
    vector<int>::iterator itr3;
    std::cout << "printing the elements of the vector in descending order using an iterator" << std::endl;
    for(itr3 = A.begin(); itr3 != A.end(); itr3++)
    {
        std::cout << *itr3 << " ";
    }
    std::cout << std::endl;

    // _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _

    //cleaning up lot of cpp code, Thanks to advance c++ features

    //1. No need to use iteerator everytime 
    // vector<int>::iterator iterator = lower_bound(A.begin(), A.end(),150);
    // auto will work
    auto itr4 = lower_bound(A.begin(), A.end(), 150);

    //2. No need to use different new iterator to print the elements of the vector

    std::cout << "printing the elements of the vector without using an iterator" << std::endl;
    for(int a:A)
    {   
        // a++; This won't have any effect on the value of a or the elements of the vector A
        std::cout << a << " ";
    }
    std::cout << std::endl;

    std::cout << "printing the elements of the vector by reference there by incrementing the values of a of vector A" << std::endl;
    for(int &a:A)
    {   
        a++;
        std::cout << a << " ";
    }
    std::cout << std::endl;



}