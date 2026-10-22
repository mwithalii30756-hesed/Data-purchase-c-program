#include<stdio.h>


int main() {
    int choice;

    printf(" MOBILE DATA BUNDLES \n");
    printf("1. 100 MB  - KES 50\n");
    printf("2. 500 MB  - KES 200\n");
    printf("3. 1 GB    - KES 350\n");
    printf("4. 2 GB    - KES 600\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Bundle selected: 100 MB\n");
            printf("Cost: KES 50\n");
            break;

        case 2:
            printf("Bundle selected: 500 MB\n");
            printf("Cost: KES 200\n");
            break;

        case 3:
            printf("Bundle selected: 1 GB\n");
            printf("Cost: KES 350\n");
            break;

        case 4:
            printf("Bundle selected: 2 GB\n");
            printf("Cost: KES 600\n");
            break;

        default:
            printf("Invalid choice! Please select 1 to 4.\n");
    }

    return 0;
}
