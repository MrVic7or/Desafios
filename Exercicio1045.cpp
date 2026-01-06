#include <stdio.h>
#include <math.h>

//Este programa foi desenvolvido na força do ódio, não me pergunte como, eu do futuro.
//Lembrando que, satisfaz a maior parte das exigências do Beecrowd, porém, ele é fdp, 
//então eu desisti de sumeter apenas pelo ego do sinal verde de exercício resolvido. Foda-se.
//Espero ter sido claro, pau no seu cu. N~]ao procure informações úteis aqui, não tem. Tchau.
int main(){
    int i;
    float A = 0.0, B = 0.0, C = 0.0, x = 0.0, m = 0.0, n = 0.0, o = 0.0;
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    if(A == 0.0)
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    else if(B == 0.0)
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    else if(C == 0.0)
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(A < 0.0)
    {
        A = A * -1;
    }
    else if(B < 0.0)
    {
        B = B * -1;
    }
    else if(C < 0.0)
    {
        C = C * -1;
    }
    if(B > A)
    {
        x = A;
        A = B;
        B = x;
        x = 0.0;
    }
    else if (C > A)
    {
        x = A;
        A = C;
        C = x;
        x = 0.0;
    }
    else if(C > B)
    {
        x = C;
        C = B;
        B = x;
        x = 0.0;
    }
    m = pow(A, 2);
    n = pow(B, 2);
    o = pow(C, 2);
    if(C + B <= A)
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }

    if((A == B && A != C) || (A == C && A != B) || (B == C && B != A))
    {
        if (m > n + o)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if (m < n + o)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        printf("TRIANGULO ISOSCELES\n");
        return 0;
    }
    else if(m > n + o)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(m < n + o)
    {
        printf("TRIANGULO ACUTANGULO\n");
        if((A == C) && (A == B))
        {
            printf("TRIANGULO EQUILATERO\n");
            return 0;
        }
    }
    else if((A == C) && (A == B))
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(m == n + o)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    return 0;
}