#include <cstdlib>
#include <iostream>

#include "example.h"
using namespace std;
int main(int argc, char** argv)
{
    foobar::Example example{};
    std::cout << "Example.getValue() => " << example.getValue() << std::endl;
    cout << "hola mundo" << endl;
    float resultado = 0;
    resultado = suma(3,5);
    cout << "el resultado es: " << resultado << endl;
    return EXIT_SUCCESS;
}
