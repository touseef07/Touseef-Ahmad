#include <stdio.h>
struct employee{
char name[30];
char gender[10];
int ID;
int pay;

}s;

int main()
{
FILE *ptr;
ptr=fopen("D:\\pro.txt","w");
if(ptr==NULL){
     printf("Error\n");

}
else
{


    printf("\n enter name =\n");
    scanf("%s",s.name);
    printf("\n enter gender =\n");
    scanf("%s",s.gender);
    printf("\n enter ID =\n");
    scanf("%d",&s.ID);
    printf("\n enter pay =\n");
    scanf("%d",&s.pay);


    fprintf(ptr,"%s\t%s\t%d\t%d",s.name,s.gender,s.ID,s.pay);
    return 0;
}

fclose(ptr);
}
