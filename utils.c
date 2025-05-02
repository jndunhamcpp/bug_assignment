#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

char* get_message()
{
    char *msg = malloc(20);
    strcpy(msg, "Hello from utils!");
    return msg;
}

void process_data(char *input)
{
    if (input && strlen(input) > 0)
    {
        printf("Processing: %s\n", input);
    }
}