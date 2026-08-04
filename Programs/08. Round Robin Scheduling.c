#include <stdio.h>

int main()
{
    int n, tq;
    int bt[10], rem[10];

    printf("Enter number of processes: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Burst Time of P%d: ",i+1);
        scanf("%d",&bt[i]);
        rem[i]=bt[i];
    }

    printf("Enter Time Quantum: ");
    scanf("%d",&tq);

    int completed=0;

    printf("\nExecution Order:\n");

    while(completed<n)
    {
        for(int i=0;i<n;i++)
        {
            if(rem[i]>0)
            {
                printf("P%d ",i+1);

                if(rem[i]<=tq)
                {
                    rem[i]=0;
                    completed++;
                }
                else
                {
                    rem[i]-=tq;
                }
            }
        }
    }

    return 0;
}