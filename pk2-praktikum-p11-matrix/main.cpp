#include <iostream>
#include "matrix.h"

using namespace std;

int main()
{
    Matrix<double> m(2);
    m.set(0, 0, 3);
    m.set(0, 1, 4);
    m.set(1, 0, 2);
    m.set(1, 1, 1);

    Matrix<double> n(m); // copy constructor
    n.set(0, 0, 7);
    n.set(1, 0, 2.5);
    n.set(1, 1, 0);
    cout << m << "*" << endl
         << n << "=" << endl
         << m * n;

    return 0;
}
