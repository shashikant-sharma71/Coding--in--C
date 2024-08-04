/*#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int menu();
void Bus(),car(),Cycle(),Riksha(),Showstatus(),delete();

int noB = 0, noc, noC, noR, amount = 0, count = 0;
void main()
{
    while (1)
    {
        system("cls");
        switch (menu())
        {
        case 1:
            Bus();
            break;
        case 2:
            car();
            break;
        case 3:
            Cycle();
            break;
        case 4:
            Riksha();
            break;
        case 5:
            Showstatus();
            break;
        case 6:
            delete ();
            break;
        case 7:
            exit(0);
        default:
            printf("\nInviled Choice");
            break;
        }
        getch();
    }
}
int menu()
{
    int ch;
    printf("\n1.Entery Bus:");
    printf("\n2.Entery Car :");
    printf("\n3.Entery Cycle:");
    printf("\n4.Entery Riksha :");
    printf("\n5.Show Status: ");
    printf("\n6.Delete Data ");
    printf("\n7.Exit");
    printf("\nEnter Your choice:");
    scanf("%d",&ch);
    return (ch);
}
void Showstatus()
{
    printf("\nNumber of Bus= %d", noB);
    printf("\nNumber of Car= %d", noc);
    printf("\nNumber of Cycle= %d", noC);
    printf("\nNumber of Riksha= %d", noR);
    printf("\nTotal number of Vehical= %d", count);
    printf("\nTotal Gain amount= %d", amount);
}
void delete()
{
    printf("Data delete Successfully.");
    noB = 0;noc = 0; noC = 0;noR = 0;amount = 0;count = 0;
}
void Bus()
{
    printf("Entery Successfull.");
    noB++; amount = amount + 100; count++;
}
void car()
{
    printf("Entery Successfull.");
    noc++;  amount = amount + 75; count++;
}
void Cycle()
{
    printf("Entery Successfull.");
    noC++;amount = amount + 0; count++;
}
void Riksha()
{
    printf("Entery Successfull.");
    noR++; amount = amount + 50; count++;
}*/
#include<stdio.h>
#include<conio.h>
void main(){
    char a,b;
      
}
