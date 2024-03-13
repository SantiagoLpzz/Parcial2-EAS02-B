#include <iostream>
using namespace std;

class Figura{
private:
    int b, h;
    float p;

public:
    Figura();
    Figura(int b, int h);
    void setPerimetro(float a);
    float getPerimetro();
};

class Cuadrado: public Figura
{
    Cuadrado(int b): Figura(b, 0){
        this->setPerimetro(b*4);
    }
};

class Rectangulo: public Figura
{
    Rectangulo(int b, int h): Figura(b, h){
        this->setPerimetro(b*h);
    }
};

class Circulo: public Figura
{
    Circulo(int b): Figura(b, 0){
        int r = (b/2)*(b/2);
        float per = 3.1416*r;
        this->setPerimetro(per);
    }
};

/*
    Implementa los constructores y funciones de la clase Figura.
    La función setPerimetro UNICAMENTE recibe el perímetro y lo asigna, NO lo calcula.
*/

/*
    Implementa la clase Cuadrado que hereda de Figura.
    Crear constructor de Cuadrado que herede del constructor de Figura.
    Calcular y asignar el perímetro del cuadrado.
*/

/*
    Implementa la clase Rectángulo que hereda de Figura.
    Crear constructor de Rectángulo que herede del constructor de Figura.
    Calcular y asignar el perímetro del Rectángulo.
*/

/*
    Implementa la clase Círculo que hereda de Figura.
    Crear constructor de Círculo que herede del constructor de Figura.
    Calcular y asignar el perímetro del Círculo.
*/

int main () {

    Cuadrado s(5, 0);
    cout << s.getPerimetro() << endl; // 20
    Rectangulo r(5,10);
    cout << r.getPerimetro() << endl; // 30
    Circulo t(5);
    cout << t.getPerimetro() << endl; // ~31.41592
    return 0;
}

Figura::Figura()
{
    int b = 0;
    int h = 0;
    int p = 0.0;
}

Figura::Figura(int b, int h)
{
    this->b = b;
    this->h = h;
}

void Figura::setPerimetro(float a)
{
    this->p = p;
}

float Figura::getPerimetro()
{
    return this-> p;
}