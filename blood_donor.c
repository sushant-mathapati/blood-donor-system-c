#include <stdio.h>
#include <string.h>

struct Donor {
    char name[50];
    char blood[3];
    int age;
    int lastDonationMonths; // months since last donation
};

// Check blood compatibility
int isCompatible(char donor[], char recipient[]) {
    if (strcmp(recipient, "O") == 0)
        return strcmp(donor, "O") == 0;

    if (strcmp(recipient, "A") == 0)
        return strcmp(donor, "A") == 0 || strcmp(donor, "O") == 0;

    if (strcmp(recipient, "B") == 0)
        return strcmp(donor, "B") == 0 || strcmp(donor, "O") == 0;

    if (strcmp(recipient, "AB") == 0)
        return 1;

    return 0;
}

// Check donor eligibility
int isEligible(int age, int months) {
    return (age >= 18 && months >= 3);
}

int main() {
    int n, i;
    char required[3];

    printf("Enter number of donors: ");
    scanf("%d", &n);

    struct Donor d[n];

    // Input donor details
    for (i = 0; i < n; i++) {
        printf("\n--- Donor %d ---\n", i + 1);

        printf("Enter name: ");
        scanf("%s", d[i].name);

        printf("Enter blood group (A/B/AB/O): ");
        scanf("%s", d[i].blood);

        printf("Enter age: ");
        scanf("%d", &d[i].age);

        printf("Months since last donation: ");
        scanf("%d", &d[i].lastDonationMonths);
    }

    // Required blood group
    printf("\nEnter required blood group: ");
    scanf("%s", required);

    printf("\n--- Eligible & Compatible Donors ---\n");

    int found = 0;

    for (i = 0; i < n; i++) {
        if (isEligible(d[i].age, d[i].lastDonationMonths) &&
            isCompatible(d[i].blood, required)) {

            printf("%s (%s, Age: %d, Last Donation: %d months ago)\n",
                   d[i].name,
                   d[i].blood,
                   d[i].age,
                   d[i].lastDonationMonths);

            found = 1;
        }
    }

    if (!found) {
        printf("No eligible donors found.\n");
    }

    return 0;
}