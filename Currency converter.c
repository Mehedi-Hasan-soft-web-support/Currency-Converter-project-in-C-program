#include<stdio.h>
#include<stdlib.h>

int main()
{

   system("color B0");
    int n;
    printf("\n\n\n\n");
    printf("\t\t\t\t******************************************************\n");
    printf("\t\t\t\t|                Currency Converter                  |\n");
    printf("\t\t\t\t******************************************************\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|           Welcome to Currency Converter            |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                    * *                             |\n");
    printf("\t\t\t\t|                  *    *                            |\n");
    printf("\t\t\t\t|                  *                                 |\n");
    printf("\t\t\t\t|                  *                                 |\n");
    printf("\t\t\t\t|                   *                                |\n");
    printf("\t\t\t\t|                    * * *                           |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t******************************************************\n");
    printf("\t\t\t\t| Press [1] to Continue \n");

    scanf("%d",&n);
    if(n==1)
    {
        system("cls");
        admin(1);
    }
}
int admin(int a)
{
    system("cls");
    int password;

    printf("\n\n\n\n");
    printf("\t\t\t\t******************************************************\n");
    printf("\t\t\t\t|                Currency Converter                  |\n");
    printf("\t\t\t\t******************************************************\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|              Enter Valid Password                  |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t******************************************************\n");
    printf("\t\t\t\t|Enter your Password:");
    scanf("%d",&password);

    if(password==1111)

{
    system("cls");
    currency(1111);
}

}

currency(int a)
{

    system("color 20");
    system("cls");

    printf("\t\t\t\t******************************************************\n");
    printf("\t\t\t\t|                Currency Converter                  |\n");
    printf("\t\t\t\t******************************************************\n");
    printf("\t\t\t\t* Here is a list of conversations to choose from:    *\n");
    printf("\t\t\t\t*                                                    *\n");
    printf("\t\t\t\t*      1. USD to Euro.                               *\n");
    printf("\t\t\t\t*      2. URO to Taka.                               *\n");
    printf("\t\t\t\t*      3. Uro to Rupi.                               *\n");
    printf("\t\t\t\t*      4. URO to Taka.                               *\n");
    printf("\t\t\t\t*                                                    *\n");
    printf("\t\t\t\t*                                                    *\n");
    printf("\t\t\t\t*                                                    *\n");
    printf("\t\t\t\t*                                                    *\n");
    printf("\t\t\t\t*                                                    *\n");
    printf("\t\t\t\t*                                                    *\n");
    printf("\t\t\t\t*                                                    *\n");
    printf("\t\t\t\t******************************************************\n");

    cheek();


}


void cheek(void)
{
    int n;
    scanf("%d", &n);
     if(n==1)
     {

            system("cls");
            universal(1);
            float usd, uro;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &usd);
            uro= usd * 0.94;
            printf("\t\t\t\t*");
            printf("Euro: %.2f\n", uro);
     }

    else if(n==2)
    {

            system("cls");
            universal(1);
            float uro,taka;
            printf("Please enter the uro amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &uro);
            taka = uro * 0.94;
            printf("\t\t\t\t*");
            printf("taka: %.2f\n", taka);
    }



}

universal(int a)
{

    system("color 20");
    system("cls");

    printf("\t\t\t\t******************************************************\n");
    printf("\t\t\t\t|                Currency Converter                  |\n");
    printf("\t\t\t\t******************************************************\n");
    printf("\t\t\t\t*                                                    *\n");
    printf("\t\t\t\t*");
}
