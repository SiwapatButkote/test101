#include <stdio.h>

int main() {
float net_income;
float tax = 0.0;

printf("================================================\n");
printf("     Lesson 3: Secure Tax Calculator App        \n");
printf("================================================\n");

printf("Enter your Annual Net Income (THB): ");
scanf("%f", &net_income);

if (net_income < 0) {
printf("\n[ALERT] Error: Invalid Income!\n");
}

else if (net_income <= 150000) {
// ช่วงที่ 1: ได้รับสิทธิ์ยกเว้นภาษี
tax = 0.0;
printf("\nStatus: Tax Exempted.\n");
}

else if (net_income <= 300000) {
// ช่วงที่ 2: อัตราภาษี 5% จากส่วนด่างเกิน 150,000
tax = (net_income - 150000) * 0.05;
printf("\nStatus: Tax Rate 5%% Applied.\n");
}
 else{
   tax = 7500.0 + ((net_income - 300000) * 0.10);
printf("\nStatus: Tax Rate 10%% Applied.\n"); 
 }

if (net_income >= 0) {
printf("Total Income Tax Payable: %.2f THB\n", tax);
printf("================================================\n");
}
return 0;
}