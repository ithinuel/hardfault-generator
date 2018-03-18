#include "mbed.h"

int main(void) {
    uint32_t *a = (uint32_t *)0xDEADBEEF;
    printf("Bonjour !\r\n");
    
#ifndef DISABLE_HF
    *a = 123; /* will hf here ! */
#endif
    
    printf("Au revoir !\r\n");
    return 0;
}
