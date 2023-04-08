#include<stdio.h>


int main()
{
    FILE *fp;
    fp=fopen("what.txt", "w");
    fprintf(fp, "hello people");
    fclose(fp);
}