#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    /* pow, sqrt, min, max, round
     */
    int x, y, z, a, b, c;
    x = min(3, 4);
    y = max(5, 6);
    z = pow(4, 5);
    a = sqrt(25);
    b = round(3.89);
    c = abs(-19);

    cout << x << " " << y << " " << z << " " << a << " " << b << " "
         << " " << c << endl;

    return 0;
}
