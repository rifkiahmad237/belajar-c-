#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (size_t i = 0; i < 20; i++)
    {
        if (i == 13)
        {
            // break; berhenti saat i == 13
            continue; // melompati angka 13
        }
        cout << i << endl;
    }

    return 0;
}
