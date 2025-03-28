#include "quotes.h"
#include <time.h>

int main() {
    int n=0;
    printf("Enter the number of Quotes: ");
    scanf("%d",&n);
    char * quotes=(char*)malloc(n*sizeof(char));

    srand(time(NULL));
    print_random_quote(quotes);
    return 0;
}