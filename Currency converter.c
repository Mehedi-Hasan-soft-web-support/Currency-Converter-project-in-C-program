#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    time_t m;
    time(&m);
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
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|       ");
    printf("\t\t");
    printf("%s", ctime(&m));
    printf("\t\t\t\t******************************************************\n");

    printf("\n\t\t\t\t| Press [1] to Continue ");

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
    printf("\t\t\t\t*      3. USD to LKR.                                *\n");
    printf("\t\t\t\t*      4. USD to LRD.                                *\n");
    printf("\t\t\t\t*      5. USD to LSL.                                *\n");
    printf("\t\t\t\t*      6. USD to LYD.                                *\n");
    printf("\t\t\t\t*      7. USD to MAD.                                *\n");
    printf("\t\t\t\t*      8. USD to MDL.                                *\n");
    printf("\t\t\t\t*      9. USD to MGA.                                *\n");
    printf("\t\t\t\t*     10. USD to MKD.                                *\n");
    printf("\t\t\t\t*     11. USD to MMK.                                *\n");
    printf("\t\t\t\t*     12. USD to MNT.                                *\n");
    printf("\t\t\t\t*     13. USD to MOP.                                *\n");
    printf("\t\t\t\t*     14. USD to MRU.                                *\n");
    printf("\t\t\t\t*     15. USD to MUR.                                *\n");
    printf("\t\t\t\t*     16. USD to MVR.                                *\n");
    printf("\t\t\t\t*     17. USD to MWK.                                *\n");
    printf("\t\t\t\t*     18. USD to MXN.                                *\n");
    printf("\t\t\t\t*     19. USD to MYR.                                *\n");
    printf("\t\t\t\t*     20. USD to MZN.                                *\n");
    printf("\t\t\t\t*     21. USD to NAD.                                *\n");
    printf("\t\t\t\t*     22. USD to NGN.                                *\n");
    printf("\t\t\t\t*     23. USD to NIO.                                *\n");
    printf("\t\t\t\t*     24. USD to NOK.                                *\n");
    printf("\t\t\t\t*     25. USD to NPR.                                *\n");
    printf("\t\t\t\t*     26. USD to NZD.                                *\n");
    printf("\t\t\t\t*     27. USD to OMR.                                *\n");
    printf("\t\t\t\t*     28. USD to PAB.                                *\n");
    printf("\t\t\t\t*     29. USD to PEN.                                *\n");
    printf("\t\t\t\t*     30. USD to PGK.                                *\n");
    printf("\t\t\t\t*     31. USD to PHP.                                *\n");
    printf("\t\t\t\t******************************************************\n");

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
    else if(n==3)
     {

            system("cls");
            universal(1);
            float USD, LKR;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            LKR= USD * 0.003052;
            printf("\t\t\t\t*");
            printf("LKR: %.2f\n", LKR);
     }
    else if(n==4)
     {

            system("cls");
            universal(1);
            float USD, LRD;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            LRD= USD * 0.005347;
            printf("\t\t\t\t*");
            printf("LRD: %.2f\n",LRD);
     }
      else if(n==5)
     {

            system("cls");
            universal(1);
            float USD, LSL;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            LSL= USD * 0.0530492;
            printf("\t\t\t\t*");
            printf("Lesotho Loti: %.2f\n",LSL);
     }
    else if(n==6)
     {

            system("cls");
            universal(1);
            float USD, LYD;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            LYD= USD * 0.204128;
            printf("\t\t\t\t*");
            printf("Libyan Dinar: %.2f\n",LYD);
     }
      else if(n==7)
     {

            system("cls");
            universal(1);
            float USD, MAD;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            MAD= USD * 0.0972;
            printf("\t\t\t\t*");
            printf("Moroccan Dirham: %.2f\n",MAD);
     }
      else if(n==8)
     {

            system("cls");
            universal(1);
            float USD, MDL;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            MDL= USD * 0.0554017;
            printf("\t\t\t\t*");
            printf("Moldovan Leo: %.2f\n",MDL);
     }
   else if(n==9)
     {

            system("cls");
            universal(1);
            float USD, MGA;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            MGA= USD * 0.0002209;
            printf("\t\t\t\t*");
            printf("Malagasy Ariary: %.2f\n",MGA);
     }
    else if(n==10)
     {

            system("cls");
            universal(1);
            float USD, MKD;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            MKD= USD * 0.0171851;
            printf("\t\t\t\t*");
            printf("Macedonian Denar: %.2f\n",MKD);
     }
     else if(n==11)
     {

            system("cls");
            universal(1);
            float USD, MMK;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            MMK= USD * 0.0004772;
            printf("\t\t\t\t*");
            printf("Myanma Kyat: %.2f\n",MMK);
     }
     else if(n==12)
     {

            system("cls");
            universal(1);
            float USD, MNT;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            MNT= USD * 0.000289;
            printf("\t\t\t\t*");
            printf("Mongolian Tugrik: %.2f\n",MNT);
     }
     else if(n==13)
     {

            system("cls");
            universal(1);
            float USD, MOP;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            MOP= USD * 0.1241;
            printf("\t\t\t\t*");
            printf("Macanese Pataca: %.2f\n",MOP);
     }
     else if(n==14)
     {

            system("cls");
            universal(1);
            float USD, MRU;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            MRU= USD * 0.0255891;
            printf("\t\t\t\t*");
            printf("Mauritanian Ouguiya: %.2f\n",MRU);
     }
     else if(n==15)
     {

            system("cls");
            universal(1);
            float USD,MUR;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            MUR= USD * 0.02252;
            printf("\t\t\t\t*");
            printf("Mauritian Rupee: %.2f\n",MUR);
     }
     else if(n==16)
     {

            system("cls");
            universal(1);
            float USD,MVR;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            MVR= USD * 0.0656169;
            printf("\t\t\t\t*");
            printf("Maldivan Rufiyaa: %.2f\n",MVR);
     }
     else if(n==17)
     {

            system("cls");
            universal(1);
            float USD,MWK;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            MWK= USD * 0.00087;
            printf("\t\t\t\t*");
            printf("Malawian kwacha: %.2f\n",MWK);
     }
     else if(n==18)
     {

            system("cls");
            universal(1);
            float USD,MXN;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            MXN= USD * 0.0554159;
            printf("\t\t\t\t*");
            printf("Mexican Peso: %.2f\n",MXN);
     }
     else if(n==19)
     {

            system("cls");
            universal(1);
            float USD,MYR;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            MYR= USD * 0.209969;
            printf("\t\t\t\t*");
            printf("Malaysian Ringgit: %.2f\n",MYR);
     }
     else if(n==20)
     {

            system("cls");
            universal(1);
            float USD,MZN;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            MZN= USD * 0.015559;
            printf("\t\t\t\t*");
            printf("Mozambican Metical: %.2f\n",MZN);
     }
     else if(n==21)
     {

            system("cls");
            universal(1);
            float USD,NAD;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            NAD= USD * 0.0532553;
            printf("\t\t\t\t*");
            printf("Namibian Dollar: %.2f\n",NAD);
     }
     else if(n==22)
     {

            system("cls");
            universal(1);
            float USD,NGN;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            NGN= USD * 0.00126;
            printf("\t\t\t\t*");
            printf("Nigerian Naira: %.2f\n",NGN);
     }
      else if(n==23)
     {

            system("cls");
            universal(1);
            float USD,NIO;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            NIO= USD * 0.0273;
            printf("\t\t\t\t*");
            printf("Nicaragun Cordoba: %.2f\n",NIO);
     }
      else if(n==24)
     {

            system("cls");
            universal(1);
            float USD,NOK;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            NOK= USD * 0.0897;
            printf("\t\t\t\t*");
            printf("Norwegian Krone: %.2f\n",NOK);
     }
      else if(n==25)
     {

            system("cls");
            universal(1);
            float USD,NPR;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            NPR= USD * 0.0075;
            printf("\t\t\t\t*");
            printf("Nepalese Rupee: %.2f\n",NPR);
     }
      else if(n==26)
     {

            system("cls");
            universal(1);
            float USD,NZD;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            NZD= USD * 0.5829;
            printf("\t\t\t\t*");
            printf("New Zealand Dollar: %.2f\n",NZD);
     }
      else if(n==27)
     {

            system("cls");
            universal(1);
            float USD,OMR;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            OMR= USD * 2.59758;
            printf("\t\t\t\t*");
            printf("Omani Rial: %.2f\n",OMR);
     }
      else if(n==28)
     {

            system("cls");
            universal(1);
            float USD,PAB;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            PAB= USD * 1.00000;
            printf("\t\t\t\t*");
            printf("Panamanian Balboa: %.2f\n",PAB);
     }
      else if(n==29)
     {

            system("cls");
            universal(1);
            float USD,PEN;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            PEN= USD * 0.2591;
            printf("\t\t\t\t*");
            printf("Peruvian Nuevo Sol: %.2f\n",PEN);
     }
      else if(n==30)
     {

            system("cls");
            universal(1);
            float USD,PGK;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            PGK= USD * 0.2694;
            printf("\t\t\t\t*");
            printf("Papua New Gwinean Kina: %.2f\n",PGK);
     }
      else if(n==31)
     {

            system("cls");
            universal(1);
            float USD,PHP;
            printf("Please enter the USD amount:\n");
            printf("\t\t\t\t*");
            scanf("%f", &USD);
            PHP= USD * 0.01759;
            printf("\t\t\t\t*");
            printf("Philippine Peso: %.2f\n",PHP);
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
