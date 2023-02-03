#include <bits/stdc++.h>
#include "MY_STACK.h"
int main()
{
    Stack numst;
    numst.PUSH(10);
    numst.PUSH(20);
    numst.PUSH(30);
    numst.PUSH(40);
    numst.PUSH(50);
    // while (numst.EMPTY() == false)
    // {
    //     cout << numst.TOP() << " ";
    //     numst.POP();
    // }
    cout << "\n"
         << numst.SIZE() << "\n";

    return 0;
}