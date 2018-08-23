#include <stdio.h>

class sidey3base {
public:
    virtual ~sidey3base() {printf("~sidey3base\n");}
protected:
    sidey3base() { printf("sidey3base\n");}
};

class sidey3 : public sidey3base {
public:
    sidey3(double a, double b, double c, double d);
    virtual ~sidey3() { printf("sidey3\n");}
};