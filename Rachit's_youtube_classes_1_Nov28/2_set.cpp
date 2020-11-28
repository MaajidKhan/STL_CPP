/*
Sets are a type of associative containers in which each element has to be unique, 
because the value of the element identifies it. 

The value of the element cannot be modified once it is added to the set, 
though it is possible to remove and add the modified value of that element. 
*/

#include<iostream>
using namespace std;
#include <algorithm>
#include<set>

void setDemo()
{
    set<int> s; // set always internally maintains ascending order sequence
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(-3);

    for(int x:s)
    {
        cout << x << " ";
    }
    cout << endl;

    //checking if some particular value is present or not
    auto it = s.find(-3);
    if(it == s.end())
    {
        cout << "Not present " << endl;
    }
    else
    {
        cout << "present " << endl;
    } 

    auto it1 = s.lower_bound(-3);    // will return >=
    std::cout << "it1: " << *it1 << std::endl;

    auto it2 = s.upper_bound(-3);    // will return >
    std::cout << "it2: " << *it2 << std::endl;

    s.erase(-3); //Removing an element from a set

}

int main()
{
    setDemo();
    return 0;
}