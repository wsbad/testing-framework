#include <iostream>


using namepace std; 

int yo() {


}

int toto(int a, int b)
{
        if (a == -1)
            return 0; //@test a= -1, b= anything, rest = 0 

        yo();

        return a + b; //@test a = 10, b = 30, res = 40
}


int main() {

    for (uint32_t i = 0; i < 50; i++) {
        for (uint32_t j = 0; j < i; j++)
            cout << "*";

        cout << endl;
    }
    return 0;
}
