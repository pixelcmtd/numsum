#include "numsum.c"

int main(int argc, char **argv) {
    unsigned sum = 0;
    for(int i = 1; i < argc; i++) {
        sum += numsum(argv[i]);
    }
    printf("%u (%sprime)\n", sum, is_prime(sum) ? "" : "not ");
}
