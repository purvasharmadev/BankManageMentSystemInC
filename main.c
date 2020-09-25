#include <stdio.h>
#include <stdlib.h>
int list();  //declaring function_variable globally
void deposit();
void transfer();
void withdraw();
void checkDetail();
void last();
int TotalAmount=1000,Amount,Amo,Tr,TotalDeposit=0,TotalWithdraw=0;
int TotalTr=0;
int Acc;
char a[50];
void main()
{
    printf("\nEnter your name:");
    gets(a);
    printf("\nEnter your account number:");
    scanf("%d",&Acc);
    while(1){
        system("cls");

        switch(list()){
        case 1:
            deposit();
            TotalDeposit+=Amount;
            break;
        case 2:
            withdraw();
            if(Amo<=TotalAmount)
                TotalWithdraw+=Amo;
            break;
        case 3:
            transfer();
             if(Tr<=TotalAmount)
                TotalTr+=Tr;
                break;

        case 4:
            checkDetail();
            break;

        case 5:
            system("cls");
            last();
            exit(0);
            getch();
        default:
            printf("\nEnter a valid choice!!");
     }
        getch();

    }

}




int list()
{
    int ch;
    printf("\n\n");
    printf("Welcome To The Lifestyle Bank!!");
    printf("\n\n");
    printf("\n1.Deposit Amount");
    printf("\n");
    printf("\n2.Withdraw Amount");
    printf("\n");
    printf("\n3.Transfer Amount");
    printf("\n");
    printf("\n4.Check Details");
    printf("\n");
    printf("\n5.Exit");
    printf("\n");
    printf("***************************************************************");
    printf("\nEnter Your Choice:");
    scanf("%d",&ch);
    return(ch);
}

void deposit()
{

    printf("\nTotal balance in your account is : %d",TotalAmount);
    printf("\nEnter the amount you want to deposit\n");
    scanf("%d",&Amount);
    TotalAmount+=Amount;
    printf("\nYour amount has been successfully deposited!!\n");
    printf("\nEnter any key to go to main menu\n");

}

void withdraw(){
    printf("Enter the amount you want to withdraw\n");
    scanf("%d",&Amo);
    if(Amo<=TotalAmount){
        TotalAmount-=Amo;
        printf("\nYour amount has been successfully Withdrawn!!\n");
        printf("\nEnter any key to go to main menu\n");


    }
    else{
        printf("You don't have that much balance!\n");
        printf("\nEnter any key to go to main menu\n");

    }

}

void transfer(){
    printf("Enter the amount you want to transfer\n");
    scanf("%d",&Tr);
    if(Tr<=TotalAmount){
        TotalAmount-=Tr;
    printf("\nYour amount has been successfully transfered!!\n");
    printf("\nEnter any key to go to main menu\n");


    }else{
        printf("You don't have sufficient balance to make the transfer!");
        printf("\nEnter any key to go to main menu\n");

    }

}

void checkDetail(){
    printf("\n****************************************\n");
    printf("\n");
    printf("\nBalanced amount in your account:%d",TotalAmount);
    printf("\nTotal deposited amount:%d",TotalDeposit);
    printf("\nTotal withdrawn money:%d",TotalWithdraw);
    printf("\nTotal Transfer:%d",TotalTr);

    printf("\nEnter any key to go to main menu\n");


}

void last(){
    printf("\n****************************************\n");
    printf("\nYour Name=%s",a);
    printf("\nAccount Number=%d",Acc);
    printf("\n");
    printf("\nBalanced amount in your account:%d",TotalAmount);
    printf("\nTotal deposited amount:%d",TotalDeposit);
    printf("\nTotal withdrawn money:%d",TotalWithdraw);
    printf("\nTotal Transfer:%d",TotalTr);
    printf("\n***************Thank You*****************\n");



}
