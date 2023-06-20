#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

class Circel {
public:
    float radius;

    Circel() {
        radius = 42;
    }
    
    Circel(float r) {
    radius = r;
    }

    float surface() {
        return M_PI * radius * radius;
    }

};



int main() {



    Circel peter;
    cout << peter.surface() << "\n";
    peter.radius = 56;
    cout << peter.surface() << "\n";

    Circel hans(2);
    cout << hans.surface();


    return 0;
}