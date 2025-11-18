#include <stdio.h>
#include <string>
#include <vector>

template <typename T>
class Pilha
{
private:
    std::vector<T> dadoDaPilha;
    int fodaSe = 0;
public:
    Pilha(/* args */);

    ~Pilha();
    void colocaNaPilha(T dado)
    {
        if(dadoDaPilha.size() == fodaSe)
        {
            dadoDaPilha.resize(++fodaSe);
            dadoDaPilha[fodaSe - 1] = dado;
        }
        else
        {
            dadoDaPilha[fodaSe] = dado;
            fodaSe++;
        }
    }

    void removeTopo()
    {
        if(fodaSe == 0)
            return;
        fodaSe--;
    }

    int pegaDoTopo()
    {
        if(fodaSe == 0)
            return 0;
        return dadoDaPilha[fodaSe - 1];
    }
};

int main()
{
    Pilha<float> pilha;
    pilha.colocaNaPilha(1);
return 0;
}