#include "lib.h"
#include <stdio.h>
#include "base.h"

void function_from_lib(){
    printf("Hello from lib function and from :\n");
    function_from_base();
}