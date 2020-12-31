#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "hello there!\0";
    char tmp[100]; // I didn't want to count.

    char * p1 = str;
    char * p2 = tmp;

    while ((* p1) != '\0') {
        // This is faster because of assembly jump table.
        switch (* p1) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'a': case 'e': case 'i': case 'o': case 'u':
                p1++; continue;
            default: break; // This can be removed eventually.
        }
        * (p2++) = * (p1++);
    }
    * p2 = '\0';

    for (int i = 0; i < strlen(tmp); i++) {
        printf("%c", tmp[i]);
    }

    return 0;
}
