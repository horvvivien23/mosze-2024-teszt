#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // A `NELEMENTS` helytelen, mert a `N_ELEMENTS` nev� v�ltoz� lett defini�lva. Jav�t�s: `N_ELEMENTS`.
    std::cout << '1-100 ertekek duplazasa' //Az id�z�jelek helytelenek, nincs pontosvessz�. Egyszeres id�z�jel (' ') csak karakterekhez haszn�lhat�. Jav�t�s: dupla id�z�jel (" ").
    for (int i = 0;)/// A `for` ciklus szintaxisa helytelen. A ciklus felt�tele hi�nyzik. Jav�t�s: `for (int i = 0; i < N_ELEMENTS; i++)`.
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)// A felt�tel (i; i++) helytelen. A felt�telnek `i < N_ELEMENTS`-nek kell lennie.
    {
        std::cout << "Ertek:"// A `std::cout` utas�t�s v�g�n hi�nyzik a pontosvessz�. Jav�t�s: `std::cout << "Ertek: " << b[i] << std::endl;`.
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // Az `atlag` v�ltoz� nincs inicializ�lva, ami v�letlenszer� kezd��rt�ket ad neki. Jav�t�s: `int atlag = 0;`.
    for (int i = 0; i < N_ELEMENTS, i++) //  A `for` ciklus felt�tele ut�n vessz� szerepel, nem pontosvessz�. Jav�t�s: `i < N_ELEMENTS; i++`.
    {
        atlag += b[i] //  Hi�nyzik a pontosvessz� a sor v�g�r�l. Jav�t�s: `atlag += b[i];`
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
