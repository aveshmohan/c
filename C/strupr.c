#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "welcome";

    printf("entered string is %s\n", str);

    // Convert the string to lowercase
    strupr(str);

    printf("upper case is %s", str);

    return 0;
}
