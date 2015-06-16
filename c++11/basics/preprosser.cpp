#include "stdio.h"

#ifdef DEBUG
#define printf(x) \
    printf(__DATE__ ": args x is: '" #x "', result: '" x "'");
#else
#define printf(x)
#endif /* DEBUG */

int main () {
    printf("hello world: %d\n");
    return 0;
}
