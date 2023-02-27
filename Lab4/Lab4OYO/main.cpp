#include <iostream>
#include "IntegerList.h"

using namespace std;

void PopulateList(IntegerList &L, int size)
{
    for (int i = 0; i < size; i++)
        L[i] = i;    
}

void PopulateList2(IntegerList L, int size)
{
    for (int i = 0; i < size; i++)
        L[i] = i;    
}

int main()
{
    IntegerList l1(7);
    IntegerList l2(17);

    for (int i = 0; i < 7; i++)
        l1[i] = i * i;

    PopulateList2(l1, 7); 
    PopulateList(l2, 17);

    l1.displayList();
    l2.displayList();

    IntegerList l3;
    l3 = l1 + l2;
    l3.displayList();

    l3[4] = 100;

    l3[-5] = 100;
    l3[750] = 100;
    l3.displayList();


    l3.resize(30);
    l3.displayList();

    IntegerList l4 = l3;
    l4.displayList();

    l4.resize(5);
    l4.displayList();
    
    return 0;
}
