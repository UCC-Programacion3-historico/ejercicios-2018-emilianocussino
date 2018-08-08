#include "Cuadrado.h"

float Cuadrado::getDiagonal() const {
    return diagonal;
}

void Cuadrado::setDiagonal(float diagonal) {
    Cuadrado::diagonal = exp(2)*getAlto();
}
