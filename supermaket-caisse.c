#include <stdio.h>
int main() {

char item1[50], item2[50], item3[50], item4[50], item5[50];
float pri1, pri2, pri3, pri4, pri5;
int qtt1, qtt2, qtt3, qtt4, qtt5;
float total;
  
printf("Hello, welcome to UniSociesc market.\nPlease tell us the itens you are buying: \n");

//asking items name, price and quantity
printf("\nItem 1: ");
scanf("%s", &item1);
printf("Price of %s: ", item1);
scanf ("%f", &pri1);
printf("Quantity of %s: ", item1);
scanf("%d", &qtt1);
  
printf("\nItem 2: ");
scanf("%s", &item2);
printf("Price of %s: ", item2);
scanf ("%f", &pri2);
printf("Quantity of %s: ", item2);
scanf("%d", &qtt2);

printf("\nItem 3: ");
scanf("%s", &item3);
printf("Price of %s: ", item3);
scanf ("%f", &pri3);
printf("Quantity of %s: ", item3);
scanf("%d", &qtt3);
  
printf("\nItem 4: ");
scanf("%s", &item4);
printf("Price of %s: ", item4);
scanf ("%f", &pri4);
printf("Quantity of %s: ", item4);
scanf("%d", &qtt4);
  
printf("\nItem 5: ");
scanf("%s", &item5);
printf("Price of %s: ", item5);
scanf ("%f", &pri5);
printf("Quantity of %s: ", item5);
scanf("%d", &qtt5);
  
//total price of items
total = pri1*qtt1 + pri2*qtt2 + pri3*qtt3 + pri4*qtt4 + pri5*qtt5;
printf("\nTotal: $ %.2f", total);

//finding the most expensive item
if (pri1>pri2 && pri1>pri3 && pri1>pri4 && pri1>pri5) {
  printf("\nThe %s is the most expensive! You paid $ %.2f for %d %ss", item1, pri1*qtt1, qtt1, item1);
}
if (pri2>pri1 && pri2>pri3 && pri2>pri4 && pri2>pri5) {
  printf("\nThe %s is the most expensive! You paid $ %.2f for %d %ss", item2, pri2*qtt2, qtt2, item2);
}
if (pri3>pri1 && pri3>pri2 && pri3>pri4 && pri3>pri5) {
  printf("\nThe %s is the most expensive! You paid $ %.2f for %d %ss", item3, pri3*qtt3, qtt3, item3);
}
if (pri4>pri1 && pri4>pri2 && pri4>pri3 && pri4>pri5) {
  printf("\nThe %s is the most expensive! You paid $ %.2f for %d %ss", item4, pri4*qtt4, qtt4, item4);
}
if (pri5>pri1 && pri5>pri2 && pri5>pri3 && pri5>pri4) {
  printf("\nThe %s is the most expensive! You paid $ %.2f for %d %ss", item5, pri5*qtt5, qtt5, item5);
}
//finding the cheapest item
if (pri1<pri2 && pri1<pri3 && pri1<pri4 && pri1<pri5) {
  printf("\nThe %s is the cheapest! You paid $ %.2f for %d %ss", item1, pri1*qtt1, qtt1, item1);
}
if (pri2<pri1 && pri2<pri3 && pri2<pri4 && pri2<pri5) {
  printf("\nThe %s is the cheapest! You paid $ %.2f for %d %ss", item2, pri2*qtt2, qtt2, item2);
}
if (pri3<pri1 && pri3<pri2 && pri3<pri4 && pri3<pri5) {
  printf("\nThe %s is the cheapest! You paid $ %.2f for %d %ss", item3, pri3*qtt3, qtt3, item3);
}
if (pri4<pri1 && pri4<pri2 && pri4<pri3 && pri4<pri5) {
  printf("\nThe %s is the cheapest! You paid $ %.2f for %d %ss", item4, pri4*qtt4, qtt4, item4);
}
if (pri5<pri1 && pri5<pri2 && pri5<pri3 && pri5<pri4) {
  printf("\nThe %s is the cheapest! You paid $ %.2f for %d %ss", item5, pri5*qtt5, qtt5, item5);
}

printf("\nThanks for coming!");
}
