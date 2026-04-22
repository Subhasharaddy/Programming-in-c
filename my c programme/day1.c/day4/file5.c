#include <stdio.h>

int vrlen(int n, int marks[]) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += marks[i];
    }
    return total;
}

int main() {
    int n;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    int marks[n];

    for(int i = 0; i < n; i++) {
        printf("Enter marks %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    int Totalmarks = vrlen(n, marks);
    printf("Total marks are %d\n", Totalmarks);

    return 0;
}