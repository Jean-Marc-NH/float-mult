#include <iostream>
#include <bitset>

int main() {
    float numero = 1.2f;
    unsigned int* puntero = reinterpret_cast<unsigned int*>(&numero);
    unsigned int valor = *puntero;

    std::bitset<32> bits(valor); // Convierte el valor a su representación binaria
    std::cout << bits << std::endl; // Imprime los bits en pantalla

    return 0;
}
