#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

class Circel {
public:
    float radius;
    float surface() {
        return M_PI * radius * radius;
    }

};

int main() {

    Circel frank;
    frank.radius = 25;

    Circel peter;
    peter.radius = 200;

    cout << frank.surface();
    cout << peter.surface();

    return 0;
}