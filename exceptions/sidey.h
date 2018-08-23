#define null 0
#pragma pack (push, 8)
class sidey {
public:
    sidey(float a, float b, float c, float d, float e = 0.0f, int f = 0, float const* g = null);
    sidey();
    sidey(sidey const& a);
    ~sidey();
    sidey const& operator= (sidey const& a);
    static const sidey abc;
};

class sidey2base {
protected:
    sidey2base() {}
    sidey2base(const sidey2base&) {}
    virtual ~sidey2base() {}
};

class sidey2:sidey2base {
public:
    sidey2() {}
    sidey2(int count, sidey const* array, bool set = true);
    sidey2(double a, double b, double c, double d);
    static const sidey2 abc;
};

#define NEW(T, ptr)  new T