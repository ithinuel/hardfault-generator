#include "mbed.h"

int main(void) {
    uint32_t *a = (uint32_t *)0xDEADBEEF;
    printf("Bonjour !\r\n");
    
//    *a = 123; /* will hf here ! */
    
    printf("Au revoir !\r\n");
    return 0;
}
