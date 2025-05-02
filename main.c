#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main()
{
    printf("Starting program...\n");
    char *msg = get_message();
    printf("Message: %s\n", msg);
    process_data(NULL);
    char *buffer = (char *)malloc(64);
    strcpy(buffer, "This string is very long");
    buffer[0] = 'X';
    free(buffer);
    char *message = "test";
    process_data(message);
    printf("Print Message: %s\n", message);
    return 0;
}