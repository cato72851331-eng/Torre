#include <iostream>
using namespace std;

class Torre
{
public:
    short fila;
    short columna;

private:
    bool isBlack;

public:
    Torre()
    {
        fila = 0;
        columna = 0;
        isBlack = false;
    }

    void Visualizar()
    {
        cout << "Fila: " << fila << endl;
        cout << "Columna: " << columna << endl;
    }

    bool Mover(short nuevaFila, short nuevaColumna)
    {
        if (nuevaFila < 0 || nuevaFila > 7 ||
            nuevaColumna < 0 || nuevaColumna > 7)
        {
            return false;
        }

        if ((nuevaFila == fila && nuevaColumna != columna) ||
            (nuevaFila != fila && nuevaColumna == columna))
        {
            fila = nuevaFila;
            columna = nuevaColumna;
            return true;
        }

        return false;
    }

    
};

