
#include <stdio.h>

int main(void)
{
    double money;
    int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, m100=0, m50=0, m25=0, m10=0, m5=0, m1=0;
    
    scanf("%lf", &money);
    money += 0.000000001;
    
    n100 = money / 100;
    money = money - (n100*100);
    n50 = money / 50;
    money = money - (n50*50);
    n20 = money / 20;
    money = money - (n20*20);
    n10 = money / 10;
    money = money - (n10*10);
    n5 = money / 5;
    money = money - (n5*5);
    n2 = money / 2;
    money = money - (n2*2);
    m100 = money / 1;
    money = money - m100;
    
    while (money >= 0.01)
    {
          if (money - 0.50 >= 0)
          {
              m50 += 1;
              money -= 0.5;          
          }
          else if (money - 0.25 >= 0)
          {
              m25 += 1;
              money -= 0.25;    
          }
          else if (money - 0.10 >= 0)
          {
               m10 += 1;
               money -= 0.10;    
          }
          else if (money - 0.05 >= 0)
          {
               m5 += 1;
               money -= 0.05;  
          }
          else
          {
              m1 += 1;
              money -= 0.01;
          }          
    }
   
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m100);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m1);
    
    return 0;    
}