#ifndef REPASO_TRIANGULO_H
#define REPASO_TRIANGULO_H


#include "Geometria.h"

class Triangulo : public Geometria  {
protected:
    float angulo;
public:
    void setAngulo(float angulo);

public:
    float getAngulo() const;

    virtual ~Triangulo();

public:


};


#endif //REPASO_TRIANGULO_H
