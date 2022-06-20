#include <iostream>


using namepace std;

int yo() {


}



int main() {

    for (uint32_t i = 0; i < 50; i++) {
        for (uint32_t j = 0; j < i; j++)
            cout << "*";

        cout << endl;
    }
    return 0;
}
