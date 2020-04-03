#include<stdio.h>
int main()
{
    int size, chk_size;
    printf("\nEnter the size of main string and check string ");
    scanf("%d%d",&size, &chk_size);
    printf("\nEnter main string and check string :");
    char str[size], chk_str[chk_size];
    scanf("%s%s",str, chk_str);
    length=strlen
    for(int i=0; i<size;i++)
    {
        for(int j=0; j<7; j++)
        {
            if(str[i]==check[j])
            {
                c[j]++;
            }
        }
    }
    int no;
    no=c[0]/2;
    if(c[1]/2<no)
    {
       no=c[1]/2;printf("%d\n",no);
    }
    if(c[2]<no)
    {
       no=c[2];printf("%d\n",no);
    }
    if(c[3]<no)
    {
       no=c[3];printf("%d\n",no);
    }
    if(c[4]/2<no)
    {
       no=c[4]/2;printf("%d\n",no);
    }
    if(c[5]/2<no)
    {
       no=c[5]/2;printf("%d\n",no);
    }
    if(c[6]<no)
    {
       no=c[6];printf("%d\n",no);
    }
    printf("%d\n",no);
    return 0;
}