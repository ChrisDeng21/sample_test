#include <stdio.h>
#include <string.h>

static int VerifyAdmin(char* password)
{
    if (strcmp(password, "Mew!")) {
        printf("Incorrect Password!\n");
        return (0);
    }
    printf("Entering Diagnostic Mode...\n");
    return (1);
}

int hct1(void)
{
    int i;
    char input[10] = {
        0,
    };

    printf("Please input password:\n");
    fgets(input, sizeof(input), stdin); //read string

    for (i = 0; i < (int)sizeof(input); i++) {
        if (input[i] == 0x0A /*enter key*/) {
            input[i] = '\0';
            break;
        }
    }

    return VerifyAdmin(input);
}
