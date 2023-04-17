#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main() {

    float numero = 1.2f;
    float numero2 = 1.2f;
    unsigned int* puntero = reinterpret_cast<unsigned int*>(&numero);
    unsigned int valor = *puntero;
    unsigned int* puntero2 = reinterpret_cast<unsigned int*>(&numero2);
    unsigned int valor2 = *puntero2;

    std::bitset<32> bitsa(valor);
    std::bitset<32> bitsb(valor2);

    if (numero == 0 || numero2 == 0)
    {
        cout << 0;
    }
    else {
        string a = bitsa.to_string();
        string b = bitsb.to_string();

        string a1 = "";
        string b1 = "";

        for (int i{ 0 }; i < 9; i++)
        {
            if (i != 0) {
                a1 += a[i];
                b1 += b[i];
            }
        }

        int numa = stoi(a1);
        int numb = stoi(b1);

    }


    return 0;
}