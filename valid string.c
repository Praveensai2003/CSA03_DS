#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isValidString(const char *str) {
    if (str == NULL) {
        return false; // Handle NULL strings
    }
    
    while (*str) {
        if (!isalpha(*str) && *str != ' ') {
            return false; // Non-alphabetical character found
        }
        str++;
    }
    
    return true;
}

int main() {
    const char *input = "Hello World";
    
    if (isValidString(input)) {
        printf("The string is valid.\n");
    } else {
        printf("The string is not valid.\n");
    }
    
    return 0;
}
