#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Testing various elements of C language
extern char s[];// ?

int main() {
    printf("Hello World!\n");
    srand(time(NULL)); //sets seed based on time
    int h = rand()%3; //generate random value from 0 to 2
    int j, k=NULL; //not initializing value versus initializing as NULL yields different results
    printf("j, k: %d _ %d\n",j,k);
    k = j + h;
    printf("nu k: %d\n",k);
    int a = 0;
    printf("a: %d\n",a++); // 0 or 1? should increment but return original value
    printf("a: %d\n",++a); // 1 or 2? should increment and return new value
    char s[] = "butt";
    printf("%d\t%s\n",5+second(),s);//structure
    if(h==0)
    {
        printf("zero");
        return(0);
    }
    if(h!=0)
        printf("%d\n",h);
    printf("Goodbye");
    return(0);
}
int second()
{
    return (2);
}