#include <stdio.h>
#include <string.h>

int main(void) {
    char string1[101], string2[101], stringFinal[101];
    int lenString, ans, count = 0;
    
    //gets(string1);
    //gets(string2);
    scanf("%s", &string1);
    scanf("%s", &string2);
    
    lenString = strlen(string1);
    
    for (ans = 0; ans < lenString; ans++) {
        if(string1[ans] != string2[ans]) {
            stringFinal[ans] = '1';
        } else {
            stringFinal[ans] = '0';
        }
        count++;
    }
    stringFinal[count] = '\0';
    printf("%s\n", stringFinal);
    
    return 0;
}