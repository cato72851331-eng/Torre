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
};

int main()
{
    Torre torre;

    torre.Visualizar();

    return 0;
}