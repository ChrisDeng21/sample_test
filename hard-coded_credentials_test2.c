#include <stdio.h>
#include <string.h>

static int VerifyAdmin(char* password)
{
    if (strcmp(password, "68af404b513073584c4b6f22b6c63e6b")) {
        printf("Incorrect Password!\n");
        return (0);
    }
    printf("Entering Diagnostic Mode...\n");
    return (1);
}

int hct2(void)
{
    int i;
    char input[40] = {
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
