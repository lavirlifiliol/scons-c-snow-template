#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}


#ifndef SNOW_ENABLED
int main() {
    int a, b;
    scanf("%i %i", &a, &b);
    printf("%d\n", sum(a, b));
}
#else
#include "snow.h"
describe(sum) {
    it("sums") {
        asserteq(9, sum(4, 5));
    }
}
snow_main();
#endif
