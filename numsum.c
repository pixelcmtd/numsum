#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

unsigned num(int c) {
    if(c >= 'A' && c <= 'Z') return c - 'A' + 1;
    if(c >= 'a' && c <= 'z') return c - 'a' + 1;
    return 0;
}

unsigned numsum(char *s) {
    unsigned sum = 0;
    while(*s) sum += num(*s++);
    return sum;
}

// checks if `i` can be divided by 3, 5, 7, ..., sqrt(i)
bool is_prime(unsigned i) {
    if(i == 2) return true;
    if(i < 2 || i % 2 == 0) return false;
    for(unsigned p = 3; p <= sqrt(i); p += 2) {
        if(i % p == 0) return false;
    }
    return true;
}
