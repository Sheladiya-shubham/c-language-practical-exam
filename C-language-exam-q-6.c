#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LEN 100
#define MAX_ROLE_LEN 100

int main() {
    FILE *file;
    char name[MAX_NAME_LEN];
    char role[MAX_ROLE_LEN];

    file = fopen("data.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < 3; i++) {
        printf("Enter details for employee %d\n", i + 1);

        printf("Enter name: ");
        getchar();
        fgets(name, MAX_NAME_LEN, stdin);
        
        size_t len = strlen(name);
        if (len > 0 && name[len - 1] == '\n') {
            name[len - 1] = '\0';
        }

        printf("Enter role: ");
        fgets(role, MAX_ROLE_LEN, stdin);
        
        len = strlen(role);
        if (len > 0 && role[len - 1] == '\n') {
            role[len - 1] = '\0';
        }

        fprintf(file, "Employee %d\nName: %s\nRole: %s\n\n", i + 1, name, role);
    }

    fclose(file);

    printf("Data has been written to data.txt\n");

    return EXIT_SUCCESS;
}
