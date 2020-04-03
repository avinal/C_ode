#include<stdio.h>
int main()
{
    int seat, opp, id;
    char se[2];
    se[1]='S';
    printf("Enter the seat number.\n");
    scanf("%d", &seat);
    id=seat%12;
    opp=((id<=11 && id!=0)? seat+13-2*id : seat-11 );
    if(id==0 || id==1 || id==6 || id==7)
    {
        se[0]='W';
    }
    else if(id==2 || id==5 || id==8 || id==11)
    {
         se[0]='M';
    }
    else
    {
        se[0]='A';
    }
    printf("%d %s\n", opp, se);
    return 0;
}