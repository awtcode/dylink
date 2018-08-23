#include <stdio.h>
#include "sidey.h"
#include "sidey3.h"

const sidey2 sidey2::abc(0.0f, 0.1f, 0.2f, 0.3f);

sidey::sidey(float a, float b, float c, float d, float e, int f, float const* g) {
    printf("constructor a:%f\n", a);
}

sidey::sidey() {
    printf("emptyconstructor \n");
}
sidey::sidey(sidey const& a) {
    printf("copyconstructor \n");
}
sidey::~sidey() {
    printf("destructor\n");
}

sidey const&  sidey::operator= (sidey const& a) {
    printf("assignment operator\n");
}


sidey2::sidey2(int count, sidey const* array, bool set) {
    printf("sidey2::sidey2\n");
    //sidey* temp = new sidey();
    float a = 0.0, b = 0.0, c = 0.0, d = 0.0;
    sidey* temp = NEW(sidey, this)(a, b, c, d);
    sidey3* temp3 = new sidey3(a,b,c,d);
}

sidey2::sidey2(double a, double b, double c, double d) {
    sidey3* temp3 = new sidey3(a,b,c,d);
}