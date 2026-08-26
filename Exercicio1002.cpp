#include <cstdio>
#include <iostream>
#include <iomanip>

int main() {
    double A, B;
    std::cin >> A;
    
    B = 3.14159 * (A * A);
    std::cout << "A=" << std::fixed << std::setprecision(4) << B << std::endl;
    //std::fixed impede que numeros sejam exibidos em notação científica,
    // e std::setprecision(4) define que o número terá 4 casas decimais.
    //std::endl é usado para pular uma linha no final da saída.
    return 0;
}