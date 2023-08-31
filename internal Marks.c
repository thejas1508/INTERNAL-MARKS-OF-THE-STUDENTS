#include<stdio.h> 
struct student
{
char name[20]; 
int t[15][15]; 
int mark[5];
};
void internal( struct student); 
void main()
{
struct student s; 
int x,y; 
for(x=0;x<3;x++)
{
printf("Enter the internal test %d marks for five subjects:\t",x+1); 
for(y=0;y<5;y++)
scanf("%d",&s.t[x][y]);
}
internal(s);
}
void internal(struct student s1)
{
int i,x,y,sum[20],c=0; 
for(x=0;x<5;x++)
KGISL INSTITUTE OF TECHNOLOGY 
20IT54
711720205053
THEJASKUMAR.B
{ 
c=0;
for(y=0;y<3;y++)
{
c=c+s1.t[y][x];
}
s1.mark[x]=((c/3)/5);
}
for(i=0;i<5;i++)
printf("\nSubject %d Internal Mark (max. marks 20)= %d",i+1,s1.mark[i]);
}
