#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <error.h>

#include "config.h"

#define ENV_VAR_CONFIG "CONFIG"

int main()
{
    struct Configuration *configuration;
    int status_code;

    configuration = allocate_config();
    status_code = load_config(ENV_VAR_CONFIG, configuration);

    if (status_code == 0)
        print_config(configuration);

    return status_code;
}
