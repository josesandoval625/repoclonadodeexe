#include <cstdlib>
#include <iostream>
#include"funcionesMatematicas.h"
#include "example.h"
using namespace std;
int main(int argc, char** argv)
{
    foobar::Example example{};
    std::cout << "Example.getValue() => " << example.getValue() << std::endl;
    cout << "hola mundo" << endl;
    float resul = suma(3, 5);
    cout << " el resultado es: " << resul << endl;

    return EXIT_SUCCESS;
}
