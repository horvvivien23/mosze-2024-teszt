#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // A `NELEMENTS` helytelen, mert a `N_ELEMENTS` nevû változó lett definiálva. Javítás: `N_ELEMENTS`.
    std::cout << '1-100 ertekek duplazasa' //Az idézõjelek helytelenek, nincs pontosvesszõ. Egyszeres idézõjel (' ') csak karakterekhez használható. Javítás: dupla idézõjel (" ").
    for (int i = 0;)/// A `for` ciklus szintaxisa helytelen. A ciklus feltétele hiányzik. Javítás: `for (int i = 0; i < N_ELEMENTS; i++)`.
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)// A feltétel (i; i++) helytelen. A feltételnek `i < N_ELEMENTS`-nek kell lennie.
    {
        std::cout << "Ertek:"// A `std::cout` utasítás végén hiányzik a pontosvesszõ. Javítás: `std::cout << "Ertek: " << b[i] << std::endl;`.
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // Az `atlag` változó nincs inicializálva, ami véletlenszerû kezdõértéket ad neki. Javítás: `int atlag = 0;`.
    for (int i = 0; i < N_ELEMENTS, i++) //  A `for` ciklus feltétele után vesszõ szerepel, nem pontosvesszõ. Javítás: `i < N_ELEMENTS; i++`.
    {
        atlag += b[i] //  Hiányzik a pontosvesszõ a sor végérõl. Javítás: `atlag += b[i];`
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
