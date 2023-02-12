#include <stdio.h>
int main(){
/*
 * THE PROGRAM PRINTS THE ALPHABET IN LOWERCASE THEN UPPERCASE.
 */
    char alf = 97;
    char alp = 65;
    while (alf <= 122) {
        putchar(alf);
        alf += 1;
    }
    while (alp <= 90){
        putchar(alp);
        alp += 1;
    }
    putchar('\n');
    return 0;
}
