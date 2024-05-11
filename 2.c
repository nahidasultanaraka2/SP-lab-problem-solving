#include<stdio.h>

int main() {
    int month, year;
    printf("Enter the month and year number: ");
    scanf("%d%d",&month,&year);


    if (month == 1) {
        printf("January %d has 31 days", year);
    } else if (month == 3) {
        printf("The month March %d has 31 days", year);
    } else if (month == 5) {
        printf("The month May %d has 31 days", year);
    } else if (month == 7) {
        printf("The month July %d has 31 days", year);
    } else if (month == 8) {
        printf("The month August %d has 31 days", year);
    } else if (month == 10) {
        printf("The month October %d has 31 days", year);
    } else if (month == 12) {
        printf("The month December %d has 31 days", year);
    } else if (month == 4) {
        printf("April %d has 30 days", year);
    } else if (month == 6) {
        printf("The month June %d has 30 days", year);
    } else if (month == 9) {
        printf("The month September %d has 30 days", year);
    } else if (month == 11) {
        printf("The month November %d has 30 days", year);
    } else if (month == 2) {
        if (year % 4 == 0) {
            printf("The month February %d has 29 days", year);
        } else {
            printf("The month February %d has 28 days", year);
        }
    } else {
        printf("Error");
    }

    return 0;
}
