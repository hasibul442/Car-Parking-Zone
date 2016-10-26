#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

struct level_underground
{
    char slot[200],pass[200];
    char ti[100];
    time_t t;
    level_underground *next;

};

struct level_1
{
    char slot[200],pass[200];
    char ti[1000];
    time_t t;
    level_1 *next;

};

struct level_2
{
    char slot[200],pass[200];
    char ti[100];
    time_t t;
    level_2 *next;
};

struct level_3
{
    char slot[200],pass[200];
    char ti[100];
    time_t t;
    level_3 *next;
};

//Global variables
int available[10][1];
time_t tt,ttt;
char ti[10000],tii[10000];
level_underground *pt,*start,*pr;
level_1 *pt1,*start1,*pr1;
level_2 *pt2,*start2,*pr2;
level_3 *pt3,*start3,*pr3;

void node()
{
    //Underground section
    pt=start;
    for(int i=0; i<5; i++)
    {
        if(i<5)
        {
            pt->next=(level_underground *)malloc(sizeof(level_underground));
            strcpy(pt->slot,"empty");
            pt=pt->next;
        }
        else
            pt->next=NULL;
    }

    //Level 1 section
    pt1=start1;
    for(int i=0; i<5; i++)
    {
        if(i<5)
        {
            pt1->next=(level_1 *)malloc(sizeof(level_1));
            strcpy(pt1->slot,"empty");
            pt1=pt1->next;
        }
        else
            pt1->next=NULL;
    }

    //Level 2 section
    pt2=start2;
    for(int i=0; i<5; i++)
    {
        if(i<5)
        {
            pt2->next=(level_2 *)malloc(sizeof(level_2));
            strcpy(pt2->slot,"empty");
            pt2=pt2->next;
        }
        else
            pt2->next=NULL;
    }

    //Level 3 section
    pt3=start3;
    for(int i=0; i<5; i++)
    {
        if(i<5)
        {
            pt3->next=(level_3 *)malloc(sizeof(level_3));
            strcpy(pt3->slot,"empty");
            pt3=pt3->next;
        }
        else
            pt3->next=NULL;
    }
}

int isavailable(int a)
{
    int i=0;
    if(a==0) //Underground available check
    {
        pt=start;
        while(pt->next!=NULL)
        {
            if(strcmp(pt->slot,"empty")==0)
            {
                i++;
            }
            pt=pt->next;
        }

    }
    else if(a==1) //Level 1 available check
    {
        pt1=start1;
        while(pt1->next!=NULL)
        {
            if(strcmp(pt1->slot,"empty")==0)
            {
                i++;
            }
            pt1=pt1->next;
        }
    }
    else if(a==2) //Level 2 available check
    {
        pt2=start2;
        while(pt2->next!=NULL)
        {
            if(strcmp(pt2->slot,"empty")==0)
            {
                i++;
            }
            pt2=pt2->next;
        }
    }
    else if(a==3) //Level 3 available check
    {
        pt3=start3;
        while(pt3->next!=NULL)
        {
            if(strcmp(pt3->slot,"empty")==0)
            {
                i++;
            }
            pt3=pt3->next;
        }
    }
    return i;
}

void input(int a,char number[20],char pass[20])
{
    if(a==0)
    {
        pt=start;
        while(pt->next!=NULL)
        {
            if(strcmp(pt->slot,"empty")==0)
            {
                strcpy(pt->slot,number);
                strcpy(pt->pass,pass);
                time(&pt->t);
                strcpy(pt->ti,ctime(&pt->t));
                break;
            }
            pr=pt;
            pt=pt->next;
        }
    }
    if(a==1)
    {
        pt1=start1;
        while(pt1->next!=NULL)
        {
            if(strcmp(pt1->slot,"empty")==0)
            {
                strcpy(pt1->slot,number);
                strcpy(pt1->pass,pass);
                time(&pt1->t);
                strcpy(pt1->ti,ctime(&pt1->t));
                break;
            }
            pr1=pt1;
            pt1=pt1->next;
        }
    }
    if(a==2)
    {
        pt2=start2;
        while(pt2->next!=NULL)
        {
            if(strcmp(pt2->slot,"empty")==0)
            {
                strcpy(pt2->slot,number);
                strcpy(pt2->pass,pass);
                time(&pt2->t);
                strcpy(pt2->ti,ctime(&pt2->t));
                break;
            }
            pr2=pt2;
            pt2=pt2->next;
        }
    }
    if(a==3)
    {
        pt3=start3;
        while(pt3->next!=NULL)
        {
            if(strcmp(pt3->slot,"empty")==0)
            {
                strcpy(pt3->slot,number);
                strcpy(pt3->pass,pass);
                time(&pt3->t);
                strcpy(pt3->ti,ctime(&pt3->t));
                break;
            }
            pr3=pt3;
            pt3=pt3->next;
        }
    }
}

int searchcar(char n[20],char p[20])
{
    {
        pt=start;
        while(pt->next!=NULL)
        {
            if(strcmp(pt->slot,n)==0)
            {
                if(strcmp(pt->pass,p)==0)
                {
                    strcpy(pt->slot,"empty");
                    strcpy(pt->pass,"\0");
                    strcpy(ti,pt->ti);
                    ttt=pt->t;
                    return 1;
                }
                else
                    return 0;
            }
            pr=pt;
            pt=pt->next;
        }
    }
    {
        pt1=start1;
        while(pt1->next!=NULL)
        {
            if(strcmp(pt1->slot,n)==0)
            {
                if(strcmp(pt1->pass,p)==0)
                {
                    strcpy(pt1->slot,"empty");
                    strcpy(pt1->pass,"\0");
                    strcpy(ti,pt1->ti);
                    ttt=pt1->t;
                    return 1;
                }
                else
                    return 0;
            }
            pr1=pt1;
            pt1=pt1->next;
        }
    }
    {
        pt2=start2;
        while(pt2->next!=NULL)
        {
            if(strcmp(pt2->slot,n)==0)
            {
                if(strcmp(pt2->pass,p)==0)
                {
                    strcpy(pt2->slot,"empty");
                    strcpy(pt2->pass,"\0");
                    strcpy(ti,pt2->ti);
                    ttt=pt2->t;
                    return 1;
                }
                else
                    return 0;
            }
            pr2=pt2;
            pt2=pt2->next;
        }
    }
    {
        pt3=start3;
        while(pt3->next!=NULL)
        {
            if(strcmp(pt3->slot,n)==0)
            {
                if(strcmp(pt3->pass,p)==0)
                {
                    strcpy(pt3->slot,"empty");
                    strcpy(pt3->pass,"\0");
                    strcpy(ti,pt3->ti);
                    ttt=pt3->t;
                    return 1;
                }
                else
                    return 0;
            }
            pr3=pt3;
            pt3=pt3->next;
        }
    }
    return 2;
}
int searchcaar(char n[20])
{
    {
        pt=start;
        while(pt->next!=NULL)
        {
            if(strcmp(pt->slot,n)==0)
            {
                return 1;
            }
            pr=pt;
            pt=pt->next;
        }
    }
    {
        pt1=start1;
        while(pt1->next!=NULL)
        {
            if(strcmp(pt1->slot,n)==0)
            {
                return 1;
            }
            pr1=pt1;
            pt1=pt1->next;
        }
    }
    {
        pt2=start2;
        while(pt2->next!=NULL)
        {
            if(strcmp(pt2->slot,n)==0)
            {
                return 1;
            }
            pr2=pt2;
            pt2=pt2->next;
        }
    }
    {
        pt3=start3;
        while(pt3->next!=NULL)
        {
            if(strcmp(pt3->slot,n)==0)
            {
                return 1;
            }
            pr3=pt3;
            pt3=pt3->next;
        }
    }
    return 2;
}

void timediffernce(double tm)
{
    double a,b,c;
    int d,e,f,g;
    a=tm/3600.0;
    e=a;
    d=a;
    b=a-d;
    b=b*60.0;
    f=b;
    d=b;
    c=b-d;
    c=c*60.0;
    g=c;
    if(e!=0)
        printf("%d hr: ",e);
    if(f!=0)
        printf("%d min: ",f);
    if(g!=0)
        printf("%d sec\n",g);
}

int main()
{
    int wl;
    char license[200];
    start=(level_underground *)malloc(sizeof(level_underground));
    start1=(level_1 *)malloc(sizeof(level_1));
    start2=(level_2 *)malloc(sizeof(level_2));
    start3=(level_3 *)malloc(sizeof(level_3));

    node();
    int available[10];
    {
        fflush(stdin);
        system("cls");
        while(1)
        {
            system("cls");
            available[0]=isavailable(0);
            available[1]=isavailable(1);
            available[2]=isavailable(2);
            available[3]=isavailable(3);
            printf("\n\n\t\t\t:Care Parking Zone:\n\n\n");
            printf("\tFor ENTRY, press 1\n\tFor EXIT,  press 2\n\t");
            char ch;
            ch=getchar();
            fflush(stdin);
            if(ch=='1')
            {
a:
                char nam[200];
                system("cls");
                printf("\n\n\t\t\t:Care Parking Zone:\n\n\n");
                printf("\tOur available slots are:\n");
                if(available[0]!=0)
                    printf("\tAt Level 0    : %d\n",available[0]);
                else
                    printf("\tAt Level 0    :FULL\n");
                if(available[1]!=0)
                    printf("\tAt Level 1    : %d\n",available[1]);
                else
                    printf("\tAt Level 1    :FULL\n");
                if(available[2]!=0)
                    printf("\tAt Level 2    : %d\n",available[2]);
                else
                    printf("\tAt Level 2    :FULL\n");
                if(available[3]!=0)
                    printf("\tAt Level 3    : %d\n",available[3]);
                else
                    printf("\tAt Level 3    :FULL\n");

                printf("\n\n\tEnter the level you want to park: ");
                scanf("%d",&wl);
                if(wl>5)
                {
                    system("cls");
                    printf("\n\n\t\t\t:Care Parking Zone:\n\n\n");
                    printf("\tEnter level number correctly.\n");
                    getch();
                    goto a;
                }
                if(available[wl]==0)
                {
                    system("cls");
                    printf("\n\n\t\t\t:Care Parking Zone:\n\n\n");
                    printf("\tSorry! Level %d is full\n\tChoose another Level\n",wl);
                    getch();
                    goto a;
                }
                printf("\tEnter Your Car's License Number: ");
                fflush(stdin);
                gets(license);
                printf("\tEnter Your Password            : ");
                int t=0;
                while(1)
                {
                    fflush(stdin);
                    nam[t]=getch();
                    if(nam[t]=='\r')
                    {
                        nam[t]='\0';
                        break;
                    }
                    t++;
                    printf("*");
                }
                int fl=searchcaar(license);
                if(fl==1)
                {
                    printf("\n\tThe Car is already in.\n");
                    getch();
                    continue;
                }
                input(wl,license,nam);
                system("cls");
                printf("\n\n\t\t\t :Care Parking Zone: \n\n\n");
                printf("\tThank You!\n",pt);
                printf("\n\tKeep your pasword safe.\n");
                printf("\n\tHave a nice day!\n");
                getch();
            }
            else if(ch=='2')
            {
                char num[20];
                char pas[20];
y:
                printf("\tCar's License Number: ");
                fflush(stdin);
                gets(num);
                fflush(stdin);
x:
                printf("\tPassword            : ");
                int t=0;
                while(1)
                {
                    fflush(stdin);
                    pas[t]=getch();
                    if(pas[t]=='\r')
                    {
                        pas[t]='\0';
                        break;
                    }
                    t++;
                    ttt=pt->t;
                    printf("*");
                }
                int fl=searchcar(num,pas);
                if(fl==0)
                {
                    printf("\n\tPassword doesn't match.\n");
                    getch();
                    system("cls");
                    printf("\n\n\t\t\t :Care Parking Zone: \n\n\n");
                    printf("\tEnter the password again.\n");
                    goto x;
                }
                else if(fl==2)
                {
                    printf("\n\tCar doesn't found.\n");
                    getch();
                    system("cls");
                    printf("\n\n\t\t\t :Care Parking Zone: \n\n\n");
                    goto y;
                }
                else if(fl==1)
                {
                    system("cls");
                    printf("\n\n\t\t\t :Care Parking Zone: \n\n\n");
                    printf("\n\tCar License Number: %s\n\n",num);
                    printf("\tEntry Time      : %s\n",ti);
                    time(&tt);
                    strcpy(tii,ctime(&tt));
                    printf("\tExit Time       : %s\n",tii);
                    double taka, diff=difftime(tt,ttt);
                    printf("\tDuration        : ");
                    timediffernce(diff);
                    taka=(diff*1.55)/60.0;
                    printf("\n\tParking Bill    : %.2lf Taka\n",taka);
                    printf("\n\tHow do you want to pay?\n");
                    printf("\n\t(1) Cash        (2)Card\n\t");
                    getchar();
                    system("cls");
                    printf("\n\n\t\t\t :Care Parking Zone: \n\n\n");
                    printf("\n\n\tPaid!\n\n\tThank you for using our parking system.\n\tHave a safe journey!\n");
                    getch();
                }
            }
        }
    }
    return 0;
}
