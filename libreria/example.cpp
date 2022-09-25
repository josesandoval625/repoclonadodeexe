#include "example.h"


namespace foobar
{
    int Example::getValue() const
    {
        return 99;
    }
    float Example::suma(float num_1, float num_2) 
    {
        float resultado = 0;
        resultado = num_1 + num_2;
        return resultado;
    }
    float Example::hipotenusa(float cateto1, float cateto2)
    {
        float resultado = 0;
        resultado = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
        return resultado;
    }
}
float suma(float num_1, float num_2)
{
    float resultado = 0;
    resultado = num_1 + num_2;
    return resultado;
}
