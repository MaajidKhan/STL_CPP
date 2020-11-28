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
#include<climits>

void powerOfStl()
{

    // [x, y] pairs . Ex: add [2, 3], add [10, 20], add [30, 400], add [401, 500]
    //creating a pair using set
    set < pair<int, int> > s;
    s.insert({2, 3});
    s.insert({10, 20});
    s.insert({30, 400});
    s.insert({401, 500});

    //As we know, sets maintain the ascending order, it does the same with pairs as well
    //How comparison happens between pairs
    // {a, b} and {c, d} Here, if a < c, pair {a, b} will be stored first, if a==c, then b > d is checked

    int point = 401;

    auto it = s.upper_bound({point, INT_MAX});
    
    //Handling corner case first, what if the point = 1, then upper bound is {2,3} and 
    // we try to go one step back and that doesnot exist

    //int point = 1;
    if(it == s.begin())
    {
        std::cout << "The given point is not lying in any interval " << std::endl;
        return; //as further checks are not required, we return it here itself
    }

    it--;
    pair<int, int> current = *it;
    if (current.first <= point && point <= current.second)
    {
        cout << "yes its present: " << current.first << " " << current.second << endl;  
    }
    else
    {
        cout << "the given point is not lying in any interval" << endl;
    }
    

}

int main()
{
    powerOfStl();
    return 0;
}