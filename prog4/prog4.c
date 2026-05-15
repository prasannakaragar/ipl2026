#include <stdio.h>

struct Bitfiled {
    unsigned int firstbit : 4;
    unsigned int secondbit : 2;
    unsigned int thirdbit : 3;
};

int main() {
    struct Bitfiled a;
    
    a.firstbit = 15;
    
    printf("%u\n", a.firstbit);
    
    return 0;
}
