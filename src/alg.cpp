// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
  if (value <=1)
    return false;
  for (int q = 2; q <= (value/2); q++) {
    if ((value % q) == 0)
      return false;
  }
  return true;
}
uint64_t nPrime(uint64_t n) {
  uint64_t w = 0;
  uint64_t q = 0;
  while (q != n) {
    w++;
    if (checkPrime(w))
      q++;
  }
  return w;
}

uint64_t nextPrime(uint64_t value) {
  value++;
    while (checkPrime(value) != true) {
      value++;
    }
    return value;
}
uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
    for (uint64_t q = 2; q < hbound; q++) {
      if (checkPrime(q) == true)
        sum += q;
    }
    return sum;
}
