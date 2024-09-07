#include <stdio.h>

#define MAX_TITLE_LEN 100
#define MAX_AUTHOR_LEN 100

struct Book {
    char title[MAX_TITLE_LEN];
    char author[MAX_AUTHOR_LEN];
    float price;
};

int main() {
    int N;

    printf("Enter the number of books: ");
    scanf("%d", &N);

    struct Book books[N];

    for (int i = 0; i < N; i++) {
        printf("\nEnter details for book %d\n", i + 1);

        printf("Enter title: ");
        getchar(); // Consume newline character left over by scanf
        fgets(books[i].title, MAX_TITLE_LEN, stdin);

        printf("Enter author: ");
        fgets(books[i].author, MAX_AUTHOR_LEN, stdin);

        printf("Enter price: ");
        scanf("%f", &books[i].price);
    }

    // Display the details of all the books
    printf("\nDetails of books:\n");
    for (int i = 0; i < N; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Title: %s", books[i].title);
        printf("Author: %s", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}

