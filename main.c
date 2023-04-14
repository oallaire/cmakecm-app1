//
// Created by oallaire on 14/04/23.
//

#include <cmakecm-lib.h>
#include <stdio.h>

#define _STR(X) #X
#define STR(X) _STR(X)

int main(void) {
    printf(STR(CMAKECM_LIB_VERSION));
}
