#include <stdio.h>
#include <stdlib.h>

int main() {

    char *words;
    int wordTotal;

    printf("============= FIND A CHARACTER IN A LENGTH =============\n");
    printf("\nAdd words: ");

    words = (char*)malloc(sizeof(char) * 10000);

    if (words == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }

    scanf("%[^\n]s", words);

    wordTotal = strlen(words);
    
    printf("\n");
    for(int i =  0; i < 40; i++) {
        printf("=");
    }
    
    printf("\n");
    printf("\n- Words: \x1b[32m%s\x1b[0m", words);
    printf("\n- Total Length: \x1b[34m%d\x1b[0m", wordTotal);

    printf("\n\n");
    for(int i =  0; i < 40; i++) {
        printf("=");
    }

    while(1) {
    
        int findChar;
        
        printf("\n\nFind a character in word(s) length: ");
        scanf("%d", &findChar);
        

        if(findChar > 0 && findChar <= wordTotal) {
            printf("The character of the word in length \x1b[34m%d\x1b[0m is: \x1b[32m%c\x1b[0m\n", findChar, words[findChar - 1]);

            printf("\n");
            for(int i =  0; i < 40; i++) {
                printf("=");
            }
        } else {
            printf("Invalid action. The above characters of words only have %d length.\n", wordTotal);

            printf("\n");
            for(int i =  0; i < 40; i++) {
                printf("=");
            }
        }
    }
    free(words);
    return 0;
}