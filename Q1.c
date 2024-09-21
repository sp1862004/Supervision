// File Handling 

#include <stdio.h>

int main() {
    FILE *evenFile, *oddFile;
    int i;

    evenFile = fopen("even_numbers.txt", "w");
    if (evenFile == NULL) {
        printf("Error opening file even_numbers.txt\n");
        return 1;
    }

    oddFile = fopen("odd_numbers.txt", "w");
    if (oddFile == NULL) {
        printf("Error opening file odd_numbers.txt\n");
        fclose(evenFile);
        return 1;
    }

    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            fprintf(evenFile, "%d\n", i); 
        } else {
            fprintf(oddFile, "%d\n", i); 
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    printf("Even and odd numbers have been written to their respective files.\n");

    return 0;
}
