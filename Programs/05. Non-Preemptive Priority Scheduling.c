#include <stdio.h>

int main()
{
    int n;
    int p[10], priority[10];

    printf("Enter number of processes: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        p[i]=i+1;

        printf("Enter Priority of P%d: ",i+1);
        scanf("%d",&priority[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(priority[i]>priority[j])
            {
                int temp=priority[i];
                priority[i]=priority[j];
                priority[j]=temp;

                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }

    printf("\nExecution Order:\n");

    for(int i=0;i<n;i++)
    {
        printf("P%d ",p[i]);
    }

    return 0;
}