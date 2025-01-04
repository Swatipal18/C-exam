#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char name[50], course[50];
    for (int i = 0; i < 3; i++) {
        printf("Enter student %d's name: ", i + 1);
        scanf("%s", name);
        printf("Enter student %d's course: ", i + 1);
        scanf("%s", course);

        fprintf(file, "Student %d: Name: %s, Course: %s\n", i + 1, name, course);
    }

    fclose(file);
    printf("Data written to data.txt successfully.\n");
    return 0;
}