#include <iostream>

using namespace std;

int main()
{

    int a = 4;
    float b = 3.2;
    char c = 'a';
    bool d = true;

    enum valueKrestikiNoliki {clean, x, o};

    valueKrestikiNoliki map[3][3] = {clean};

    struct KrestikiNoliki
    {
        valueKrestikiNoliki map[3][3];
        valueKrestikiNoliki current;
        bool endGame;
        unsigned int countMove;
    };

    struct curQuantity
    {
        union quanity
        {
            short count;
            float weight;
            float volume;
        };
        int count : 1;
        int pounds : 1;
        int pints : 1;
    };

    return 0;
}
