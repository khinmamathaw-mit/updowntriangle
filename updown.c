#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define SEPARATOR "----------------------------------------"
#define TRIANGLE1 "▲"
#define TRIANGLE2 "▼"
int number;
int type;

int getinfo();
void makemario(int n); //declaration of makemariopyramid
void makeminverted(int n);
void checktodraw();

int main(void)
{
    printf("TriangleArt\n");
    printf("%s\n",SEPARATOR);
    printf("1 : triangle\n");
    printf("2 : inverted trinagle\n");
    printf("9 : finish\n");
    printf("%s\n",SEPARATOR);
  //  getinfo();
    checktodraw();
    
 
}

int getinfo()
{
     do
    {
        number = get_int("Height?\n");
    }
    while (number<=0);
    return number;
}

void checktodraw()
{
    type = get_int("Type of Triangle to draw\n");
    if (type == 1)
    {
         printf("%s line number\n",TRIANGLE1);
         getinfo();
         makemario(number);
    }
    else if (type == 2)
    {   
         printf("%s line number",TRIANGLE2);
         getinfo();
         makeminverted(number);
    }
    else if (type == 9)
    {
        exit(1);
    }
}

void makemario(int n)
{
    for (int x = 1; x <= n; x++) //x is for row
    {
        for (int space = (n-x); space > 0; space--)
        {
            printf(" ");
        }
         
        for (int hash = 1; hash <= x; hash++)
        {   
            printf("%s ",TRIANGLE1);  
        }
        //end of left pyramid
       
       

       
        printf("\n");
    }
}

void makeminverted(int n)
{
    for (int x = n; x >= 1; x--) //x is for row
    {
        for (int space = (n-x); space > 0; space--)
        {
            printf(" ");
        }

        for (int hash = n; hash >(n-x); hash--)
        {   
            printf("%s ",TRIANGLE2);  
        }
        //end of left pyramid
       
     
       
        printf("\n");
    }
}
