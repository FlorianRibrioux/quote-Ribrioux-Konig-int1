#include "quotes.h"
#include <time.h>

void add_quote(char * quotes, int index);

int main() {
    int n=0;
    printf("Enter the number of Quotes: ");
    scanf("%d",&n);
    char * quotes=(char*)malloc(n*sizeof(char));

    srand(time(NULL));
    print_random_quote(quotes);
    return 0;
}

void add_quote(char * quotes, int index) {
    FILE * file = fopen("quotes.txt", "a");
    if (file == NULL) {
        printf("File could not be opened\n");
        return;
    }
    for (int i = 0; i < index; i++) {
        fprintf(file, "%c", quotes[i]);
    }
    fclose(file);
}