#include <stdio.h>

int main() {
    
    double revenue;
    double expenses;
    double balance;

    int departments;
    double payroll;
    double procurement;
    double assets;
    char budgetStatus;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("---------------------------\n");

    printf("Enter total revenue: ");
    scanf("%lf", &revenue);

    printf("Enter total expenses: ");
    scanf("%lf", &expenses);

    printf("Enter number of departments: ");
    scanf("%d", &departments);

    printf("Enter total monthly payroll: ");
    scanf("%lf", &payroll);

    printf("Enter procurement value: ");
    scanf("%lf", &procurement);

    printf("Enter asset value: ");
    scanf("%lf", &assets);

    getchar(); 
    printf("Enter budget category (e.g., A, B, C): ");
    scanf("%c", &budgetStatus);

    balance = revenue - expenses;

    printf("\n--- MUNICIPAL FINANCIAL SUMMARY ---\n");
    printf("Revenue:     %.2f\n", revenue);
    printf("Expenses:    %.2f\n", expenses);
    printf("Balance:     %.2f\n", balance);
    printf("Departments: %d\n", departments);
    printf("Payroll:     %.2f\n", payroll);
    printf("Procurement: %.2f\n", procurement);
    printf("Assets:      %.2f\n", assets);
    printf("Category:    %c\n", budgetStatus);

    if (balance > 0) {
        printf("Status:      Surplus\n");
    } else if (balance < 0) {
        printf("Status:      Deficit (%.2f)\n", -balance);
    } else {
        printf("Status:      The budget is balanced.\n");
    }

    return 0;
}
