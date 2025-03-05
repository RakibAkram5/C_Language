#include <stdio.h>

int main() {
    int monthly_income;
    int e_Bill, G_bill, food;
    int monthly_expense;
    int monthly_saving;
    int yearly_saving;
    float avg_monthly_saving;
    
    // Input monthly income and individual expenses
    printf("Enter your monthly income: ");
    scanf("%d", &monthly_income);
    
    printf("Enter the expense on electricity bill: ");
    scanf("%d", &e_Bill);
    
    printf("Enter the expense on gas bill: ");
    scanf("%d", &G_bill);
    
    printf("Enter the expense on food: ");
    scanf("%d", &food);
    
    // Calculate monthly expense as the sum of all individual expenses
    monthly_expense = e_Bill + G_bill + food;
    
    // Calculate monthly saving
    monthly_saving = monthly_income - monthly_expense;
    
    // Calculate yearly saving
    yearly_saving = monthly_saving * 12;
    
    // Average monthly saving over the year is:
    avg_monthly_saving = (float)yearly_saving / 12;
    
    // Display results
    printf("\nMonthly Expense: %d\n", monthly_expense);
    printf("Monthly Saving: %d\n", monthly_saving);
    printf("Yearly Saving: %d\n", yearly_saving);
    printf("Average Monthly Saving: %.2f\n", avg_monthly_saving);
    
    return 0;
}

