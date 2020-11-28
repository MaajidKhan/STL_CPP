/*
Sets are a type of associative containers in which each element has to be unique, 
because the value of the element identifies it. 

The value of the element cannot be modified once it is added to the set, 
though it is possible to remove and add the modified value of that element. 
*/

#include<iostream>
using namespace std;
#include <map>
#include <algorithm>

//c++ STL
void mapDemo()
{
    map<int, int> A;
    A[1] = 100;  // Each of the operation or statement in map takes logN time where N is the size of the map
    A[2] = -1;
    A[3] = 200;
    A[10000232] = 1;

    map<char, int> cnt;
    string x = "maajid khan";

    for(char c: x)
    {
        cnt[c]++;
    }

    cout << "Number of occurenes of letter a in my name is: " << cnt['a'] << " " <<
    "and number of occurences of letter m in my name is: " << cnt['m'] << endl;
}

int main()
{
    mapDemo();
    return 0;
}