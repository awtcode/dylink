#pragma once
 class input {
 public:
       int* m_test;
 };

class polyCall {
public:
      
      int sidey(input i, char* str, int num) { 
            //printf("hello from side object:%d str:%s num:%d\n", *i.m_test, str, num); 
            int result = 0;
            for (int ii=0; ii<10000000; ++ii) {
                  result = *i.m_test + num + (int)str;
            }
            return result;
      }

      int sideyPOD(char* str, int num) { 
            //printf("hello from side object:%d str:%s num:%d\n", *i.m_test, str, num); 
            int result = 0;
            for (int ii=0; ii<10000000; ++ii) {
                  result = num + (int)str;
            }
            return result;
      }
};