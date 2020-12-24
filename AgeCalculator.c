#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int presentdate(unsigned int,unsigned int,unsigned int);
int date(unsigned int);
int month(unsigned int);
int year(unsigned int);

int main()
{
unsigned int dd,mm,yyyy;
unsigned int d,m,y;
unsigned int day,months,years;
char name[30];

printf("\n Enter your name : ");
gets(name);

printf("\n Enter date of birth : ");
scanf("%u",&dd);
printf("\n Enter month of birth : ");
scanf("%u",&mm);
printf("\n Enter year of birth : ");
scanf("%u",&yyyy);

if(mm>12)
{
    printf("\n \t *INVALID MONTH OF BIRTH ! ");
    month(mm);
}

if(mm==1 || mm==3 || mm== 5 || mm==7 || mm==8 || mm==10 || mm==12)
{
    if(dd>31)
    {
        printf("\n \t *INVALID DATE OF BIRTH ! ");
        date(dd);
    }
}

if(mm==4 || mm==6 || mm==9 || mm==11)
{
    if(dd>30)
    {
        printf("\n \t *INVALID DATE OF BIRTH ! ");
        date(dd);
    }
}

if(yyyy>2020)
{
    printf("\n \t *INVALID YEAR OF BIRTH ! ");
    year(yyyy);
}

if(mm==2)
{
    if(yyyy%4==0 && yyyy%100!=0 && yyyy%400==0)
    {
        if(dd>29)
        {
            printf("\n \t *INVALID DATE OF BIRTH ! ");
            date(dd);
        }
    }
    else
    {
        if(dd>28)
        {
            printf("\n \t *INVALID DATE OF BIRTH ! ");
            date(dd);
        }
    }
}

printf("\n\n Enter today's date : ");
scanf("%u",&d);
printf("\n Enter present month : ");
scanf("%u",&m);
printf("\n Enter present year : ");
scanf("%u",&y);

presentdate(d,m,y);

years=y-yyyy;

if(m>mm)
    months=m-mm;
else
    months=mm-m;

if(d>dd)
    day=d-dd;
else
    day=dd-d;

printf("\n-----------------------------------------------------------------------------");
printf("\n Congrats %s! You have already live for --- %u YEARS , %u MONTHS & %u DAYS.",name,years,months,day);
printf("\n                          Now It's time !                                    ");
printf("\n-----------------------------------------------------------------------------");

return(0);
}

int date(unsigned int date)
{
    printf("\n Enter appropriate date again : ");
    scanf("%u",&date);
    return date;
}

int month(unsigned int month)
{
    printf("\n Enter appropriate month again : ");
    scanf("%u",&month);
    return month;
}

int year(unsigned int year)
{
    printf("\n Enter appropriate year again : ");
    scanf("%u",&year);
    return year;
}

int presentdate(unsigned int d,unsigned int m,unsigned int y)
{
if(m>12)
{
    printf("\n \t *INVALID PRESENT MONTH ! ");
    month(m);
}

if(m==1 || m==3 || m== 5 || m==7 || m==8 || m==10 || m==12)
{
    if(d>31)
    {
        printf("\n \t *INVALID PRESENT DATE ! ");
        date(d);
    }
}

if(m==4 || m==6 || m==9 || m==11)
{
    if(d>30)
    {
        printf("\n \t *INVALID PRESENT DATE ! ");
        date(d);
    }
}

if(y>2020)
{
    printf("\n \t *INVALID PRESENT YEAR ! ");
    year(y);
}

if(m==2)
{
    if(y%4==0 && y%100!=0 && y%400==0)
    {
        if(d>29)
        {
            printf("\n \t *INVALID PRESENT DATE ! ");
            date(d);
        }
    }
    else
    {
        if(d>28)
        {
            printf("\n \t *INVALID PRESENT DATE ! ");
            date(d);
        }
    }
}

}


















