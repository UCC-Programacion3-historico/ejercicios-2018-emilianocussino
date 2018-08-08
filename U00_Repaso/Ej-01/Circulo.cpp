#include "Circulo.h"
#define PI 3.141516
float Circulo::getRadio() const {
    return radio;
}

void Circulo::setRadio(float radio) {
    Circulo::radio = radio;
}
float Circulo::getPerimetro() {
    2 * PI * radio;
};
