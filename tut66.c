#include<stdio.h>

int main()
{
    FILE *fp;
    fopen("what.txt", "r");
    fseek(fp, 0, SEEK_END);
    int x=ftell(fp);
    printf("%d", x);
    return 0;
}