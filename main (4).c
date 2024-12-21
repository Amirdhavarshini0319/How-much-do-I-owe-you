/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


#include <string.h>
#include <stdlib.h>

#define Max_Length 20
#define Num_strings 5

void create(){}
void display(){}




int transfer(char whom[Num_strings][Max_Length],char purpose[Num_strings][Max_Length],char method[Num_strings][Max_Length],int datte[5],int rupees[10])
{
    int i, choice,c1,c2;
    
    printf("\n\t\t\t\t\tYou're now in Transfer Tab !\n\t\t\t\tNow you can transfer money through online with anyone !");
    i = 0;
    do{
        printf("\n\t\t\t\t\t\tTransfer Attempt : %d\n",i+1);
        printf("\nEnter the Date : ");
        scanf("%d",&datte[i]);
        do{
            printf("Enter the method of Payment (UPI/NFC) : ");
            scanf("%s",method[i]);
            c1 = strcmp(method[i], "UPI"); c2 = strcmp(method[i], "NFC");
        }while(c1 != 0 && c2 != 0);
        printf("Transfer to : ");
        scanf("%s",whom[i]);
        printf("Enter the purpose of transfer : ");
        scanf("%s",purpose[i]);
        printf("Enter the Amount in Rupees : ");
        scanf("%d",&rupees[i]);
        printf("\nRECEIPT OF PAYMENT : \n");
        printf("You have successfully transferred an amount of INR %d to %s for the purpose of %s.",rupees[i],whom[i],purpose[i]);
        printf("\n\nDo you want to perform another Transaction ? If Yes input '1' : ");
        scanf("%d",&choice);
        i = i + 1;
    }while(choice == 1);
    
}


//group feature


int group()
{
  int i,amt,num;
 
  float indamt;
  char event;
  char friends[num];
  printf("\n\t\t\t\t\t\t\t WELCOME TO GROUPS SECTION! \t\t\t\t\t\t\t\n\n");
  
  printf("Now you can create a group\n");
  
  printf("Enter the purpose of the event : ");
  scanf("%s",&event);
 
  printf("Enter the number of people : ");
  scanf("%d",&num);
 
  for(i=0;i<=num-1;i++)
  {
   printf("\nEnter the name of the person %d : ",i+1);
   scanf("%s",&friends[i]);
  }
  printf("\n\t\t\t\t---------The group has been succesfully created----------\t\t\t\t\n");
  printf("\t\t\t\t--------- yo! now your a part of the group ---------------\t\t\t\t\n\n");
  printf("Enter the amount to be split among the group members : ");
  scanf("%d",&amt);
  indamt=(amt/num+1);
  printf("\nThe amount to be paid by an individual is %.2f\n",indamt);
  printf("Press esc button to exit");
 
    return 0;
}






int calendar()
{
    printf("\n\t\t\t\t\tYou're in Calendar Tab !\n\n");
    int date;
    printf("Enter the date for which you wanted to access the Calendar : ");
    scanf("%d",&date);
    printf("\nHere are your Reminders and due dates for this month :\n\n");
    if (date >= 27 && date <= 31)
    {
        printf("Your Electricity Bill of INR 800 is to be paid.");
        printf("\nThe amount you have spent during this month = 35000");
    }
    else if (date >= 13 && date <= 26)
    {
        printf("Reminder : Friend's Birthday");
        printf("\nReminder : Business Meet at 5 pm");
    }
    else if (date >= 1 && date <= 12)
    {
        printf("Your House rent of INR 8000 is to be paid.");
        printf("\nTuition Advance to be paid : INR 10000");
    }
}






int savings()
{
    int amt[10];
    char choice[25];
    int i,c1,c2,c3,c4;
    printf("\n\t\t\t\t\tYou're in Savings Tab !\n");
    printf("\t\t\t\tNow you can deposit your savings money here\n\n");
    do{
        c4 = strcmp (choice, "yes");
    do
    {
        printf("Enter the aspect wherein you want to save your money(emergency_fund,investment,personal,for_a_cause) : ");
        scanf("%s", choice);
        c1 = strcmp (choice, "emergency_fund"); c2 = strcmp (choice, "investment"); c3 = strcmp (choice, "personal");
        c4 = strcmp (choice, "for_a_cause");
    }while (c1 != 0 && c2 != 0 && c3 != 0 && c4 != 0);
    
    if  (strcmp (choice, "emergency_fund") == 0)
    {
      printf("\nEnter the amount that you wish to deposit : ");
      scanf("%d",&amt[10]);
      printf("\nReceipt : An amount of INR %d has been sucessfully deposited under Emergency fund Section",amt[10]);
    }
    else if (strcmp (choice, "investment") == 0)
    {
     printf("Enter the amount that you wish to deposit : ");
      scanf("%d",&amt[10]);
      printf("\nReceipt : An amount of INR %d has been sucessfully deposited under Investment Section",amt[10]);   
    }
    else if (strcmp (choice, "personal") == 0)
    {
      printf("Enter the amount that you wish to deposit : ");
      scanf("%d",&amt[10]);
      printf("\nReceipt : An amount of INR %d has been sucessfully deposited under Personals Section",amt[10]);    
    }
    else if (strcmp (choice, "for_a_cause") == 0)
    {
     printf("Enter the amount that you wish to deposit : ");
      scanf("%d",&amt[10]);
      printf("\nReceipt : An amount of INR %d has been sucessfully deposited under For a Cause Section",amt[10]);    
    }
    printf("\n\nIf you wish to deposit in any other section, Input yes : ");
    scanf("%s", choice);
    if(strcmp (choice, "yes") != 0)
    {
        printf("Are you sure that you want to exit ? Input no to exit : ");
        scanf("%s", choice);
    }
    if(strcmp (choice, "no") == 0)
    {
        printf("\n\t\t\t\t\t--------------- ThankYou! ---------------");
    } 
    
    }while(c4 == 0);
    
    return 0;
}
    
    



    
void append(){}
 

int main()
{
 int ch;
 char whom[Num_strings][Max_Length] = {};
    char purpose[Num_strings][Max_Length] = {};
    char method[Num_strings][Max_Length] = {};
    int datte[5],rupees[10];
 
 struct create_account{
    char name[25];
    int age;
    int mobile;
    int accno;
    char password[25];
};
int choice;
struct create_account person;

printf("\t\t\tWELCOME TO THE SOCIAL MONEY MANAGEMENT TOOL !\n");
   
    do
    {
        printf("\nTo sign up input 1 ; To login input 0 : ");
        scanf("%d",&choice);
    }while(choice!= 1 && choice!=0);
    if(choice == 1)
    {
        printf("Enter you Name : ");
        scanf("%s",person.name);
        printf("Enter your Age : ");
        scanf("%d",&person.age);
        printf("Enter your Mobile Number : ");
        scanf("%d",&person.mobile);
        printf("Enter your Bank Account Number : ");
        scanf("%d",&person.accno);
        printf("\nCreate Password : ");
        scanf("%s",person.password);
        printf("\nDear Customer, you are successfully registered. We Welcome you !");
    }
    else
    {
        printf("Enter your Name : ");
        scanf("%s",person.name);
        printf("Enter your Mobile Number : ");
        scanf("%d",&person.mobile);
        printf("Enter your Password : ");
        scanf("%s",person.password);
    }
    printf("\n\t\t\t\t\tWelcome! %s",person.name);
    printf("\nHere are the different sections of the tool, input the respective digit to explore it ");
    
 do{
    printf("\n1.CREATE");
    printf("\n2.DISPLAY");
    printf("\n3.TRANSFER");
    printf("\n4.GROUP");
    printf("\n5.CALENDER");
    printf("\n6.SAVINGS");
    printf("\n7.SUMMARY");
    printf("\n8.APPEND");
    printf("\n0.EXIT");
    
    printf("\nENTER YOUR CHOICE: ");
    scanf("%d",&ch);
    
    switch(ch){
        case 1:
           create();
        break;
        case 2:
           display();
        break;
        case 3:
           transfer(whom,purpose,method,datte,rupees);
        break;
        case 4:
           group();
        break;
        case 5:
           calendar();
        break;
        case 6:
           savings();
        case 7:
           append();
        
    }
}while(ch!=0);
 

    return 0;
}


