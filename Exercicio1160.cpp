#include <cstdio>
#include <iostream>

int main()
{
    int casos, PA, PB, x, y, i;
    double G1, G2;
    std::cin >> casos;
    while (casos--)
    {
        std::cin >> PA >> PB >> G1 >> G2;
        for(i = 0; i < 100; i++)
        {
            x = PA * (G1 / 100);
            PA += x;
            y = PB * (G2 / 100);
            PB += y;
            if (PA > PB)
            {
                std::cout << i + 1 << " anos.\n";
                break;
            }
        }
        if(i == 100)
            std::cout << "Mais de 1 seculo.\n";
    }
    return 0;
}