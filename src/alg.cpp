#include <cstdint>
#include <cmath>
#include "alg.h"


bool checkPrime(uint64_t value) {
bool s = true;
for (int i = 2; i < sqrt(value); i++) {
if (value%i == 0) {
s = false;
break;
}
}
if (s) {
return true;
} else {
return false;
}
}


uint64_t nPrime(uint64_t n) {
bool flag = true;
uint64_t check = 0;
int number = 0;
for (int i = 2; flag != false; i++) {
number = i;
bool s = true;
for (int i=2; i <= sqrt(number); i++) {
if (number%i == 0) {
s = false;
break;
}
}
if (s) {
check++;
if (check == n) {
flag = false;
}
}
}
return number;
}

uint64_t nextPrime(uint64_t value) {
bool flag = true;
int num = 0;
int next = value+1;
for (next; flag != false; next++) {
num = next;
bool s = true;
for (int i = 2; i <= sqrt(num); i++) {
if (num%i == 0) {
s = false;
break;
}
}
if (s) {
flag = false;
}
}
return num;
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t sum = 0;
int number = 0;
for (int i = 2; i < hbound; i++) {
number = i;
bool s = true;
for (int i = 2; i <= sqrt(number); i++) {
if (number%i == 0) {
s = false;
break;
}
}
if (s) {
sum += number;
}
}
return sum;
}
