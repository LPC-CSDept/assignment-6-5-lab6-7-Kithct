//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().
void swap(int &a,int &b,int &c)
{
    int temp;
    temp=a;
    a=b;
    b=c;
    c=temp;
}
// swaptwo() ; to swap two values (a, b) to (b, a)
void swaptwo(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}