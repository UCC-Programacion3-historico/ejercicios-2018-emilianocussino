#ifndef REPASO_CUADRADO_H
#define REPASO_CUADRADO_H


#include "Geometria.h"

class Cuadrado : public Geometria {
protected:
    float diagonal;
public:
    void setDiagonal(float diagonal);

public:
    float getDiagonal() const;

public:

};


#endif //REPASO_CUADRADO_H
