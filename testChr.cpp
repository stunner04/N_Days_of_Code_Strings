// #include <bits/stdc++.h>
// using namespace std;
// class jrsu
// {
// public:
//     char name[20];
//     void printname()
//     {
//         cout << "name is " << name << endl;
//     }
// };

// int main()
// {
//     jrsu J, K;
//     strcpy(J.name, "ABC");
//     strcpy(K.name, "ABCD");
//     J.printname();
//     K.printname();
// }

#include <iostream>

using namespace std;

void swap(char *x, char *y)
{
    char *t = x;
    x = y;
    y = t;
}

int main()
{

    char *x = 'v';
    char *y = 'n';

    char *t;

    swap(x, y);

    cout << x << " " << y;
    t = x;
    x = y;
    y = t;
    cout << x << " " << y;
}



