#include <stdio.h>
#include <inttypes.h>
#include "libIMEI.h"

int main(){
    uint64_t i = IMEI_Generate_Random();
    printf("%015llu\n",i);
    printf("Verify: %d\n",IMEI_Verify(i));
}
