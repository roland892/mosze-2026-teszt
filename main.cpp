#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // hiányzik a _
    std::cout << '1-100 ertekek duplazasa'// az aposztróf helyett "" kell és a végén kimaradt a ;
    for (int i = 0; i<N_ELEMENTS,i++) //nem teljes a ciklusmag
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"; // a végén hiányzik a ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // nincsen nullázva
    for (int i = 0; i < N_ELEMENTS; i++) // a vessző helyett ;
    {
        atlag += b[i]; // kell a végére a ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}


