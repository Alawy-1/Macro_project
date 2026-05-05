#include <stdio.h>

#define OUTER

int main(){

    #ifdef INNER
    int y = 1;
    printf("Inner defined\n");
    #include "macros_project.b.c"
    #endif
    
    #ifdef OUTER
    printf("Outer defined\n");
    #include "macros_project.a.c"
    #endif

    #ifdef BOTH
    #include "macros_project.a.c"
    #endif
    
    return 0;
}


