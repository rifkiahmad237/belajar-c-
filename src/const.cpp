#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const double pi = 3.14;
    // pi = 3.14; error: assignment of read-only variable ‘pi
    cout << "Nilai Pi: " << pi << endl;
    return 0;
}
