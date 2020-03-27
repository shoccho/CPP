#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<math.h>


void add_student();
void disp();
void loginAdmin();
void admin();
void student();
void login();
void welcome();
void edit_student();
void loginaccountant();
void accountant();
void pay();
void search_student();

struct admin
{
    char rollno[20];
    char name[30];
    float cgpa;
    float cdt;
    float hsc;
    char hscg[10];
    int waiver;
    float amt;
    float pamt;
    char date[20];
};

main()
{
    welcome();
    login();
}

void welcome()
{
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tWelcome\n\n");
    printf("\t\t\t\tSoftware Engineering Project 1 (Using C)\n");
    printf("\t\t\tPresented by Towfiq Bin Zaman\t ID: 172-35-2138\n");
    printf("\t\t\t\t\tCourse Teacher: Nusrat Jahan\n");
    printf("\n\n\n\n\t\t\t\tPress any key to continue.......");
    getch();
}

void login()
{


    int c;

    do
    {
        system("cls");
        printf("Press 1 for Admin\n");
        printf("Press 2 for Accountant\n");
        printf("Press 3 for Student\n\n\t\t\t");
        scanf("%d",&c);
        if(c==1)
        {

            loginAdmin();
            break;
        }

        if(c==2)

        {

            loginaccountant();
            break;
        }

        if (c==3)
        {
            student();
            break;
        }
        if (c==27)
            exit(0);
    }
    while(1);
}


void loginAdmin()
{
    system("cls");
    int i;
    char username[30];
    char pin[30];

    printf("\nUsername:\n");
    scanf("%s", username);

    printf("\nPin:\n");
    scanf("%s", pin);


    if(strcmp(username, "bean")==0 && strcmp(pin, "007")==0)
    {
        printf("Successfully logged in.\n");
        getch();
        admin();
    }

    else
    {
        printf("Wrong username or pin, try again.\n");
        getch();
        login();
    }

}

void admin()
{
    system("cls");
    int m;
    printf("\n1.Add Student\n2.Edit Name\n3.View Student\n4.Log out\n");
    scanf("%d", &m);
    switch(m)
    {
    case 1:
        add_student();
        break;
    case 2:
        edit_student();
    case 3:
        disp();
        break;
    case 4:
        login();

    }
}



void add_student()
{
    system("cls");
    struct admin ad, adm;
    FILE*fp;
    fp = fopen("Payment.txt", "a");

    printf("Name: ");
    fflush(stdin);
    gets(adm.name);
    printf("ID :");
    scanf("%s", &adm.rollno);
    printf("Prev. Semester SGPA :");
    scanf("%f", &adm.cgpa);
    printf("This semester's Credit :");
    scanf("%f", &adm.cdt);
    printf("Enter HSC GPA :");
    scanf("%f", &adm.hsc);
    printf("Golden in HSC (Y/N) :");
    scanf("%s", &adm.hscg);


    adm.pamt=0;
    strcpy(adm.date,"3/6/2018");



    adm.amt=3200*adm.cdt;

    if(strcmp(adm.hscg,"y")==0)
    {
        adm.amt=adm.amt-(adm.amt*.75);
        adm.waiver=75;
    }

    else if(strcmp(adm.hscg,"Y")==0)
    {
        adm.amt=adm.amt-(adm.amt*.75);
        adm.waiver=75;

    }



    else if(adm.cgpa == 4 )
    {
        adm.amt=adm.amt-(adm.amt*.5);
        adm.waiver=50;

    }
    else if(adm.cgpa >= 3.90 && adm.cgpa <= 3.99)
    {
        adm.amt=adm.amt-(adm.amt*.3);
        adm.waiver=30;

    }

    else if(adm.cgpa >= 3.85 && adm.cgpa <= 3.89)
    {
        adm.amt=adm.amt-(adm.amt*.20);
        adm.waiver=20;
    }
    else if(adm.cgpa >= 3.80 && adm.cgpa <= 3.84)
    {
        adm.amt=adm.amt-(adm.amt*.1);
        adm.waiver=10;

    }



    else if(adm.hsc==5)
    {
        adm.amt=adm.amt-(adm.amt*.3);
        adm.waiver=30;

    }
    else if(adm.hsc>=4.90 && adm.hsc<=4.99)
    {
        adm.amt=adm.amt-(adm.amt*.2);
        adm.waiver=20;

    }


    else if(adm.hsc>=4.80 && adm.hsc<=4.89)
    {
        adm.amt=adm.amt-(adm.amt*.1);
        adm.waiver=10;

    }



    else
    {
        adm.amt=adm.amt;
        adm.waiver=0;

    }

    fwrite(&adm, sizeof(adm), 1, fp);
    fclose(fp);

    printf("Data registered successfully!!!");
    getch();
    admin();
}


void edit_student()

{
    system("cls");
    char s_id[15];

    FILE *fp;
    struct admin ad, adm;
    fp=fopen("Payment.txt","r+");
    printf("Enter student id : ");
    scanf("%s",s_id);
    while (fread(&adm, sizeof(adm), 1, fp))
    {
        if(strcmp(s_id,adm.rollno)==0)
        {
            fseek(fp,-sizeof(adm),SEEK_CUR);
            printf("\nEnter Name:");
            fflush(stdin);
            gets(adm.name);
            fwrite(&adm, sizeof(adm), 1, fp);
            fclose(fp);

            system("CLS");
            printf("Record Edited Successfully!!!");
            getch();
            admin();
        }
    }
    fclose(fp);
}



void disp()
{
    system("cls");
    struct admin ad, adm;
    FILE*fp;
    fp = fopen("Payment.txt","r");
    if (fp==NULL)
    {
        printf("No Data Found");

    }
    printf("\nName\t\tID\t\tSGPA\tCredit\tHSC\tGolden\tAmount\tWaiver\n\n");
    while (fread(&adm, sizeof(adm), 1, fp))
        printf("%s\t%s\t%.2f\t  %0.f\t%.2f\t  %s\t%0.f\t%d\n", adm.name, adm.rollno, adm.cgpa, adm.cdt, adm.hsc, adm.hscg, adm.amt, adm.waiver);
    fclose(fp);
    getch();
    admin();
}




void loginaccountant()

{
    system("cls");
    int i;
    char username[30];
    char pin[30];

    printf("\nUsername:\n");
    scanf("%s", username);

    printf("\nPin:\n");
    scanf("%s", pin);


    if(strcmp(username, "jack")==0 && strcmp(pin, "123")==0)
    {
        printf("Successfully logged in.\n");
        getch();
        accountant();
    }

    else
    {
        printf("Wrong username or pin, try again.\n");
        getch();
        login();
    }

}


void accountant()
{
    system("cls");
    int m;
    printf("\n1.Search Student\n2.Pay\n3.Log out\n");
    scanf("%d", &m);
    switch(m)
    {
    case 1:
       search_student();
        break;
    case 2:
        pay();
        break;
    case 3:
        login();
    }
}


void search_student()
{

    char search_id[20];
    system ("cls");

    FILE *fp;
    fp=fopen("Payment.txt", "r");
    struct admin ad, adm;
    printf("Enter Student ID: ");
    fflush(stdin);
    gets(search_id);
    while (fread(&adm, sizeof(adm), 1, fp))
    {
        if(strcmp(search_id, adm.rollno)==0)
        {

            printf("\nName\t\tID\t\tSGPA\tCredit\tHSC\tGolden\tAmount\tWaiver\n\n");
            while (fread(&adm, sizeof(adm), 1, fp))
                printf("%s\t%s\t%.2f\t  %0.f\t%.2f\t  %s\t%0.f\t%d\n", adm.name, adm.rollno, adm.cgpa, adm.cdt, adm.hsc, adm.hscg, adm.amt, adm.waiver);
            fclose(fp);
            getch();
            accountant();
        }
    }
}

void pay()

{
    char search_id[20];

    system ("cls");

    FILE *fp;
    fp=fopen("Payment.txt", "a+");
    struct admin ad, adm;

    printf("Enter Student ID : ");
    fflush(stdin);
    gets(search_id);
    fflush(stdin);
    while (fread(&adm, sizeof(adm), 1, fp))
    {
        if(strcmp(search_id,adm.rollno)==0)
        {
            printf("\nTotal payable amount : %.0f ",adm.amt);
            printf("\nPay : ");
            scanf("%f",&adm.pamt);
            printf("\nDate : ");
            scanf("%s",&adm.date);
            adm.amt=adm.amt-adm.pamt;
            printf("\nDue : %.0f",adm.amt);
        }
    }

    fwrite(&adm, sizeof(adm), 1, fp);
    fclose(fp);
    getch();
    accountant();



}

void amt()

    {

    char search_id[20];
    system ("cls");

    FILE *fp;
    fp=fopen("Payment.txt", "r");

    struct admin ad, adm;

    printf("Enter Student ID: ");
    fflush(stdin);
    gets(search_id);
    printf("\t  Date         Paid       Due Amount");
    while (fread(&adm, sizeof(adm), 1, fp))
        {
        if(strcmp(search_id,adm.rollno)==0)
            {
                printf("\n\t %s       %.0f         %.0f  ",adm.date,adm.pamt,adm.amt);
            }

        }

    fclose(fp);
    getch();



    }



void student()
{
    char uid[30];

    system ("cls");

    FILE *fp;
    fp=fopen("Payment.txt", "r");

    struct admin ad, adm;

     printf("Enter your ID : ");
    fflush(stdin);
    gets(uid);
    fflush(stdin);

    while (fread(&adm, sizeof(adm), 1, fp))
        {
        if(strcmp(uid,adm.rollno)==0)
            {
                 printf("\nAmount to be paid : %.0f \nPaid : %.0f \nDate : %s",adm.amt,adm.pamt,adm.date);
            }

        }

    fclose(fp);
    getch();
    login();

}
