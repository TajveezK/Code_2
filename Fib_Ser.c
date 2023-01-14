# include<stdio.h>
int main()
{
    int a = 0 , b = 1 , c ,i;
    int num ;
    printf("Enter the number till where you want to print the series = ");
    scanf("%d",&num);

    for (i=1 ; i <=num ; i++)
    {
        printf("%d",a);
        c = a + b ;
        b = a ;
        a = c ;
    }
}