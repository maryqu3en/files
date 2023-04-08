#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("resultt.dat","wb");
    int n;
    printf("how many numbers would you like to enter?");
    scanf("%d", &n);
    int a[n];
    printf("enter the numbers");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        fwrite(&a[i],  sizeof(int), 1, fp);
    }
    fclose(fp);

    fp=fopen("resultt.dat","rb");
    int b[n], sum=0;
    for(int i=0; i<n; i++)
    {
        fread(&b[i], sizeof(int), 1, fp);
        printf("%d\n", b[i]);
        
    }
    for (int i=0; i<n; i++)
    {
        sum=sum+b[i];
    }
    printf("the sum is %d and the average is %f", sum, sum/n);
    fclose(fp);
    return 0;

}