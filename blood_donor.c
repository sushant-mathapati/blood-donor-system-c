#include <stdio.h>
#include <string.h>

struct Donor {
    char name[50];
    char blood[3];
};

// Function to check compatibility
int isCompatible(char donor[], char recipient[]) {
    if (strcmp(recipient, "O") == 0)
        return strcmp(donor, "O") == 0;
    if (strcmp(recipient, "A") == 0)
        return strcmp(donor, "A") == 0 || strcmp(donor, "O") == 0;
    if (strcmp(recipient, "B") == 0)
        return strcmp(donor, "B") == 0 || strcmp(donor, "O") == 0;
    if (strcmp(recipient, "AB") == 0)
        return 1; // AB can receive from all
    return 0;
}

int main() {
    int n, i;
    char required[3];

    printf("Enter number of donors: ");
    scanf("%d", &n);

    struct Donor d[n];

    // Input donor details
    for (i = 0; i < n; i++) {
        printf("\nEnter donor %d name: ", i + 1);
        scanf("%s", d[i].name);

        printf("Enter blood group (A/B/AB/O): ");
        scanf("%s", d[i].blood);
    }

    // Required blood group
    printf("\nEnter required blood group: ");
    scanf("%s", required);

    printf("\nCompatible donors:\n");

    int found = 0;

    for (i = 0; i < n; i++) {
        if (isCompatible(d[i].blood, required)) {
            printf("%s (%s)\n", d[i].name, d[i].blood);
            found = 1;
        }
    }

    if (!found) {
        printf("No compatible donors found.\n");
    }

    return 0;
}