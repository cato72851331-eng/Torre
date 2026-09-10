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

    void MostrarTablero()
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (i == fila && j == columna)
                    cout << "T ";
                else
                    cout << ". ";
            }

            cout << endl;
        }
    }

    
};

int main()
{
    Torre torre;

    cout << "POSICION INICIAL:" << endl;
    torre.Visualizar();

    cout << "\nTABLERO:" << endl;
    torre.MostrarTablero();

    cout << "\nMOVIENDO TORRE A (0,5):" << endl;

    if (torre.Mover(0, 5))
        cout << "Movimiento valido." << endl;
    else
        cout << "Movimiento invalido." << endl;

    torre.Visualizar();

    cout << "\nTABLERO:" << endl;
    torre.MostrarTablero();

    return 0;
}

