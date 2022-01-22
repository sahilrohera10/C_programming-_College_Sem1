#include<stdio.h>

int main(){

int id;
char name[100];
int usage;
char code;
scanf("%d %s %d %c" , &id , name , &usage , &code) ;

float bill =0;

if(code == 'R')
{
    bill = 50 + (50*usage);
    printf("the bill to be paid is %0.2f" , bill);
    return 0;
}
else if (code == 'C')
{
    if(usage <= 1000)
    {
        bill = 100;
        printf("the bill to be paid is %0.2f" , bill);
        return 0;
    }
    else{
        bill = 100 + ( 0.45*(usage-1000) ) ;
        printf("the bill to be paid is %0.2f" , bill);
        return 0;
    }
}
else if (code == 'I')
{
       if(usage <= 1000)
    {
        bill = 180;
        printf("the bill to be paid is %0.2f" , bill);
        return 0;
    }
    else{
        bill = 180 + ( 0.75*(usage-1000) ) ;
        printf("the bill to be paid is %0.2f" , bill);
        return 0;
    }
}
else{
    printf("Incorrect code");
    return 0;
}


}
