#include <stdio.h>
int main() {
// ประกาศตัวแปรตามชนิดข้อมูลที่โจทย์กำหนด
float total_income;
float total_expenses;
int num_of_days;
float net_remaining;
float daily_average;

printf("================================================\n");
printf("       Lesson 2: Budget Statistics Tool         \n");
printf("================================================\n");

printf("Enter Total Income (THB):");
scanf("%f", &total_income);

printf("Enter Total Expenses (THB): ");
scanf("%f", &total_expenses); 

printf("Enter Number of Days in this month: ");
scanf("%d", &num_of_days);

net_remaining = total_income - total_expenses;

daily_average = net_remaining / (float)num_of_days;

printf("================================================\n");
printf("                 BUDGET REPORT                  \n");
printf("================================================\n");
printf("Net Remaining Money\t:\t%.2f THB\n", net_remaining);
printf("Daily Average emaining\t:\t%.2f THB\n", daily_average);
printf("================================================\n");

return 0;
}