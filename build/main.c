#include <stdio.h>
int sum(int a, int b) {
    return a + b;
}


#ifdef SNOW_ENABLED
snow_main();
#else
int main() {
    printf("4 + 5 = %d", sum(4, 5));
}
#endif
#include <snow.h>
describe(sum) {
    it(sums) {
        asserteq(9, sum(4, 5));
    }
}
