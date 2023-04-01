#include <stdio.h>
#include <string.h>

void Histogram(char text[]) {
    
    for (int i = 0 ; i < strlen(text) ; i++) {
        int number = 0;
        char temp = text[i];
        for (int counter = 0 ; counter < strlen(text) ; counter++) {
                if (temp == text[counter]) {
                    number++;
                }
        }
        printf("\'%c\' | " , text[i]);
        for (int j = 0 ; j < number ; j++) {
            printf("X");
        }
        printf("\n");
    }
}

int main() {
    
    char text[100];

    fgets(text , 100 , stdin);
    printf("----------------------------------------------------------------\n");
    Histogram(text);
    printf("----------------------------------------------------------------");

    return 0;
}
