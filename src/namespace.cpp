#include <iostream>
#include <string>
using namespace std;

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
    float y = 2.5f;
}

namespace dataString
{
    std::string text = "Halo";
}
int main(int argc, char const *argv[])
{
    int x = 0;
    cout << "Namespace utama: " << x << endl;
    cout << "Namespace 1: " << first::x << endl;
    cout << "Namespace 2: " << second::x << endl;
    cout << "Namespace 2: " << second::y << endl;
    cout << "Namespace dataString: " << dataString::text << endl;
    return 0;
}
