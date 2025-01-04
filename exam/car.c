#include <stdio.h>

struct Car {
    int modelYear;
    float price;
};

int main() {
    int n=1;
  

    struct Car cars[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details of car %d (Model Year, Price): ", i + 1);
        scanf("%d %f", &cars[i].modelYear, &cars[i].price);
    }

    printf("\nCar Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Car %d - Model Year: %d, Price: %.2f\n", i + 1, cars[i].modelYear, cars[i].price);
    }

    return 0;
}   