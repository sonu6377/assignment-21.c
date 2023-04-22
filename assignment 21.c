/* 1
#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    struct employee b={1,"sonu sharma ",50000};
    printf(" %d  %s  %d ",b.id,b.name,b.salary);
    return 0;
}*/
/* 2
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
struct employee input()
{
    struct employee a;
    printf(" enter the employee id ");
    scanf("%d",&a.id);
    fflush(stdin);
    printf(" enter the employee name  ");
    fgets(a.name,20,stdin);
    a.name[strlen(a.name)-1]='\0';
    printf(" enter the employee salary  ");
    scanf("%d",&a.salary);
    return a;
};
int main()
{
    struct employee b;
    b=input();
    printf("\n %d  %s  %d",b.id,b.name,b.salary);
    return 0;
}*/

/* 3
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
struct employee input()
{
    struct employee a;
    printf(" enter the employee id ");
    scanf("%d",&a.id);
    fflush(stdin);
    printf(" enter the employee name  ");
    fgets(a.name,20,stdin);
    a.name[strlen(a.name)-1]='\0';
    printf(" enter the employee salary  ");
    scanf("%d",&a.salary);
    return a;
};
void display(struct employee b)
{
    printf(" \n  %d  %s  %d  ",b.id,b.name,b.salary);
}
int main()
{
    struct employee b;
    b=input();
    display(b);
    return 0;
}*/
/* 4
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
struct employee input()
{
    struct employee a;
    printf(" enter the employee id ");
    scanf("%d",&a.id);
    fflush(stdin);
    printf(" enter the employee name  ");
    fgets(a.name,20,stdin);
    a.name[strlen(a.name)-1]='\0';
    printf(" enter the employee salary  ");
    scanf("%d",&a.salary);
    return a;
};
void highest_salary(struct employee b[],int size)
{
    int i,j;
    struct employee temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(b[i].salary<b[j].salary)
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
}
void display(struct employee b)
{
    printf(" \n %d  %s  %d  ",b.id,b.name,b.salary);
}
int main()
{
    struct employee b[10];
    int i;
    for(i=0;i<10;i++)
        b[i]=input();
    highest_salary(b,10);
    printf(" \n  highest salary of employee \n ");
    for(i=0;i<10;i++)
        display(b[i]);
    return 0;
}*/
/* 5
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
struct employee input()
{
    struct employee a;
    printf(" enter the employee id ");
    scanf("%d",&a.id);
    fflush(stdin);
    printf(" enter the employee name  ");
    fgets(a.name,20,stdin);
    a.name[strlen(a.name)-1]='\0';
    printf(" enter the employee salary  ");
    scanf("%d",&a.salary);
    return a;
};
void sortby_salary(struct employee b[],int size)
{
    int i,j;
    struct employee temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(b[i].salary>b[j].salary)
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
}
void display(struct employee b)
{
    printf(" \n %d  %s  %d  ",b.id,b.name,b.salary);
}
int main()
{
    struct employee b[10];
    int i;
    for(i=0;i<10;i++)
        b[i]=input();
    sortby_salary(b,10);
    printf(" \n  highest salary of employee \n ");
    for(i=0;i<10;i++)
        display(b[i]);
    return 0;
}*/

/* 6
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
struct employee input()
{
    struct employee a;
    printf(" enter the employee id ");
    scanf("%d",&a.id);
    fflush(stdin);
    printf(" enter the employee name  ");
    fgets(a.name,20,stdin);
    a.name[strlen(a.name)-1]='\0';
    printf(" enter the employee salary  ");
    scanf("%d",&a.salary);
    return a;
}
void sortby_name(struct employee b[],int size)
{
    int i,j;
    struct employee temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(strcmp(b[i].name ,b[j].name)>0)
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
}
void display(struct employee b)
{
    printf(" \n %d  %s  %d ",b.id,b.name,b.salary);
}
int main()
{
    struct employee b[10];
    int i;
    for(i=0;i<10;i++)
        b[i]=input();
    sortby_name(b,10);
    for(i=0;i<10;i++)
        display(b[i]);
    return 0;
}*/
/* 7
#include<stdio.h>
struct time
{
    int hrs;
    int min;
    int sec;
};
 void diff_between_time(struct time start , struct time stop,struct time *diff)
{
    while(stop.sec>start.sec)
    {
        --start.min;
        start.sec +=60;
    }
    diff->sec=start.sec-stop.sec;

    while(stop.min>start.min)
    {
        --start.hrs;
        start.min +=60;
    }
    diff->min=start.min-stop.min;
    diff->hrs=start.hrs-stop.hrs;
}
int main()
{
    struct time start_time,stop_time,diff;
    printf(" \n start time \n");
    printf(" enter the hours minutes seconds  ");
    scanf("%d%d%d",&start_time.hrs,&start_time.min,&start_time.sec);

    printf("\n stop time \n ");
    printf(" enter the hours  minutes seconds ");
    scanf("%d%d%d",&stop_time.hrs,&stop_time.min,&stop_time.sec);

    diff_between_time(start_time,stop_time,&diff);

    printf("\n time diff %d  %d  %d ",start_time.hrs,start_time.min,start_time.sec);
    printf(" - %d  %d  %d ",stop_time.hrs,stop_time.min,stop_time.sec);
    printf("= %d  %d  %d ",diff.hrs,diff.min,diff.sec);

    return 0;
}*/
/* 8
#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[20];
    int marks;
};
struct student input()
{
    struct student a;
    printf(" enter the student roll no ");
    scanf("%d",&a.rollno);
    fflush(stdin);
    printf(" enter the student name ");
    fgets(a.name,20,stdin);
    a.name[strlen(a.name)-1]='\0';
    printf(" enter the student marks ");
    scanf("%d",&a.marks);
    return a;
};
void display(struct student b)
{
    printf(" \n %d  %s  %d ",b.rollno,b.name,b.marks);
}
int main()
{
    struct student b[10];
    int i;
    for(i=0;i<10;i++)
        b[i]=input();
    for(i=0;i<10;i++)
        display(b[i]);
    return 0;
}*/
/* 9
#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[20];
    int marks;
};
struct student input()
{
    struct student a;
    printf(" enter the student roll no ");
    scanf("%d",&a.rollno);
    fflush(stdin);
    printf(" enter the student name ");
    fgets(a.name,20,stdin);
    a.name[strlen(a.name)-1]='\0';
    printf(" enter the student marks ");
    scanf("%d",&a.marks);
    return a;
}
void display(struct student b)
{
    printf(" \n %d  %s  %d ",b.rollno,b.name,b.marks);
}
int main()
{
    struct student b[10];
    int i,n;
    printf(" enter the n numbers ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        b[i]=input();
    for(i=0;i<n;i++)
        display(b[i]);
    return 0;
}*/

#include<stdio.h>
#include<string.h>
struct marks
{
    int rollno;
    char name[20];
    int chem_marks,math_marks,phy_marks;
};
struct marks input()
{
    struct marks a;
    printf(" enter the student roll no ");
    scanf("%d",&a.rollno);
    fflush(stdin);
    printf(" enter the student name ");
    fgets(a.name,20,stdin);
    a.name[strlen(a.name)-1]='\0';
    printf(" enter the chemistry marks ");
    scanf("%d",&a.chem_marks);
    printf(" enter the mathematics marks ");
    scanf("%d",&a.math_marks);
    printf(" enter the physics marks ");
    scanf("%d",&a.phy_marks);
    return a;
};
int main()
{
    struct marks b[5];
    int i,percentag;
    float avg;
    for(i=0;i<5;i++)
        b[i]=input();
    for(i=0;i<5;i++)
    {
        percentag=b[i].chem_marks+b[i].math_marks+b[i].phy_marks;
        avg=percentag/3;
        printf("\n %.2f ",avg);
    }
    return 0;
}
