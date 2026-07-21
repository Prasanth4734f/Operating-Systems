#include <stdio.h>

int main()
{
    int n;
    int priority[10], p[10];

    printf("Enter number of processes: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        p[i]=i+1;

        printf("Enter Priority of P%d: ",i+1);
        scanf("%d",&priority[i]);
    }

    printf("\nProcess with Highest Priority Executes First\n");

    while(n>0)
    {
        int min=0;

        for(int i=1;i<n;i++)
        {
            if(priority[i]<priority[min])
                min=i;
        }

        printf("P%d ",p[min]);

        for(int i=min;i<n-1;i++)
        {
            priority[i]=priority[i+1];
            p[i]=p[i+1];
        }

        n--;
    }

    return 0;
}