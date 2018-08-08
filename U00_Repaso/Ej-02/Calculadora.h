#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H

template <class T>
class Calculadora {
public:
    T sumar (T a, T b){
        return a + b;
    }

    T restar (T a, T b){
        return a - b;
    }
    T dividir (T a, T b){
        T tmp;
        if(b==0)
            throw 404;

        return a / b;
    }
    T multiplicar (T a, T b){
        return a * b;
    }
    bool igual (T a, T b){
        return a == b;
    }
};


#endif //REPASO_CALCULADORA_H
