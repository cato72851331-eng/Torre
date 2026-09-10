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
};