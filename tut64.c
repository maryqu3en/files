#include<stdio.h>

typedef struct car
{
    int num, miles, gal;
}car;

int main()
{
    FILE *fp;
    car c[5];
    c[0].num=54 ; c[0].miles=250 ; c[0].gal=19 ;
    c[1].num=62 ; c[1].miles=525 ; c[1].gal=38 ;
    c[2].num=71 ; c[2].miles=123 ; c[2].gal=6 ;
    c[3].num=85 ; c[3].miles=1322 ; c[3].gal=86 ;
    c[4].num=97 ; c[4].miles=235 ; c[4].gal=14 ;

    fp= fopen("car.dat", "wb");
    fwrite(c, sizeof(c), 1, fp);
    fclose(fp);
    car r[5];
    int summ=0, sumg=0;
    fp=fopen("car.dat", "rb");
    fread(r, sizeof(r), 1, fp);
    fclose(fp);
    for( int i=0; i<5; i++)
    {
        printf("car no= %d, miles driven= %d, gallons used= %d.\n", r[i].num, r[i].miles, r[i].gal);
        summ+=r[i].miles;
        sumg+=r[i].gal;

    }
    printf("the total miles driven is %d, the total gallons used is %d, the average of miles driven per gallon is %d", summ, sumg, summ/sumg);

}