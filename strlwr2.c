
#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "WELCOME";

    printf("entered string is %s\n", str);

    // Convert the string to lowercase
    strlwr(str);

    printf("lower case is %s", str);

    return 0;
}
