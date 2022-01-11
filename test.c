#include <assert.h>

#include "numsum.c"

int main() {
    struct {
        char         *input;
        unsigned long result;
        bool          prime;
    } skr[] = {
        {"Jesus Christ", 151, true},
        {"Scooby Doo", 113, true},
        {"Sherlock Holmes", 163, true},
        {"Doctor Watson", 167, true},
    };
    for(unsigned i = 0; i < sizeof(skr) / sizeof(skr[0]); i++) {
        unsigned sum = numsum(skr[i].input);
        assert(skr[i].result == sum);
        assert(skr[i].prime == is_prime(sum));
    }
    return 0;
}
