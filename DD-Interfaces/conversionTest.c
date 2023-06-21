#include <stdio.h>
#include <assert.h>
#include "conversion.h"

void testFahrenheitACelsius() {

    float result = fahrenheitACelsius(32);
    assert(result == 0);
}

int main() {
    testFahrenheitACelsius();
    return 0;
}