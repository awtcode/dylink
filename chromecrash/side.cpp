#include <boost/property_tree/ptree.hpp>
#include <string>
#include "emscripten.h"

#define _TEST_T(x)      L ## x
#define TEST_T(x)      _TEST_T(x)

#define TESTTEST    TEST_T(/*MSG0*/"TESTTEST")

using boost::property_tree::wptree;
EMSCRIPTEN_KEEPALIVE extern "C" void start() {
  if (setlocale(LC_ALL, "C") == nullptr) {
        printf("CLocale::setLocale set to C locale\n");
        setlocale(LC_ALL, "C");                // set to "C"
    } else {
      printf("CLocale::setLocale set to C!!!\n");
    }
  std::string testString("test");
  wptree container;
  uint32_t value = 0;
  const wchar_t* name = L"testtesttest1";
  for (int i=0; i<9; ++i) {
    container.put(TESTTEST, name);
  }
  
  container.put(TESTTEST, value);
  printf("start-:%s\n", testString.c_str());
  return;
}