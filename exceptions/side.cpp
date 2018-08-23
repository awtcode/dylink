#include <string>
#include "sidey.h"

static float const temps[]   = {0.2f, 0.7f};

static sidey const array [] = {
  sidey(0.0f, 0.0f, 0.0f, 0.0f),
  sidey(0.0f, 0.0f, 0.25f, 0.0f),
  sidey(0.0f, 0.0f, 0.0f, 0.0f),
  sidey(0.0f, 0.0f, 0.0f, 0.0f),
  sidey(0.0f, 0.0f, 0.25f, 0.0f, 0.1f, 8, temps),
  sidey(0.0f, 0.0f, 0.25f, 0.0f, 0.1f, 8, temps),
  sidey(0.0f, 0.0f, 0.25f, 0.0f, 0.1f, 8, temps)
};

//sidey(float a, float b, float c = 0.0f, int d = 0, float const* e = null);

extern const sidey2 sidey2_array[] = {
  sidey2(2, &array[0]),
  sidey2(1, &array[0])
};