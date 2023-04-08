#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("result.dat","wb");
    float a[6];
    a[0]=16.25 ; a[1]=18.96 ; a[2]=22.34 ; a[3]=18.94 ; a[4]=17.42 ; a[5]=22.63 ;
    for(int i=0; i<6; i++)
        fwrite(&a[i], sizeof(float), 1, fp);
    fclose(fp);
    fp=fopen("result.dat","rb");
    float b[6];
    float sum=0;
    for(int i=0; i<6; i++)
    {
        fread(&b[i], sizeof(float), 1, fp);
        printf("%.2f\n", b[i]);
        sum+=b[i];
    }
    printf("the sum is %.2f and the average is %.2f",sum,sum/6);
    return 0;
}