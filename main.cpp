#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Hibásan van megadva az "NELEMENTS", helyesen "N_ELEMENTS"
    int *b = new int[NELEMENTS];

    // Kiiratással van gond, mert ' jel van használva " helyett, pontos vessző (;) hiánya
    std::cout << '1-100 ertekek duplazasa'
    
    // Kell egy feltétel és egy kezdőérték
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    
    // Ciklus vége nincs meghatározva
    for (int i = 0; i; i++)
    {
       
       // hiányzik a pontosvessző (;)
        std::cout << "Ertek:"
    }    
    
    // "atlag" változót inicializálni kell először
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    
    //  i < N_ELEMENTS feltétel után hibás a vessző, hiszen pontosvessző (;) kell oda
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // Pontosvessző (;) hiánya
        atlag += b[i]
    }

    // "atlag" változó nincs inicializálva
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}