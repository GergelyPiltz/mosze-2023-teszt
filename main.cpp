#include <iostream>

constexpr int N_ELEMENTS = 100; //constexpr?

int main()
{
    int* b = new int[NELEMENTS]; //hiányzik _
    std::cout << '1-100 ertekek duplazasa' // '' helyett "" és sor nincs lezárva és std::endl;
        for (int i = 0;) //hiányzik a ciklus léptetés, feltétel
        {
            b[i] = i * 2; // b egy pointer tömb
        }
    for (int i = 0; i; i++) //hiányzik a feltétel
    {
        std::cout << "Ertek:" // sor nincs lezárva és std::endl;
    } // a két for ciklusnak egynek kéne lennie
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //nincs kezdőérték és float vagy double kell
    for (int i = 0; i < N_ELEMENTS, i++) // , helyett ;
    {
        atlag += b[i] // sor nincs lezárva
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
