#include <stdio.h>
#include <chrono>
#include <iostream>
#include <iomanip>
//#include "side.h"
#include <dlfcn.h>
#include <emscripten.h>
#include <math.h>
using namespace std;
using namespace std::chrono;

#include <string>

extern "C" int sideyPOD(char* str, int num);

EMSCRIPTEN_KEEPALIVE
int main() {
  return 0;
}