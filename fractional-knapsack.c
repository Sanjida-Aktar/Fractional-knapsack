#include<stdio.h>

void sort_items(int value[],int weight[],int n);
void swap(int *a,int *b);
float knapsack(int value[],int weight[],int n,int capacity);
int main()
{
    int value[]={60,100,120};
    int weight[]={10,20,30};
    int n=3, capacity=50;

    sort_items(value,weight,n);

    float maxvalue= knapsack(value,weight,n,capacity);
    printf("Maximum value of knapsack: %f",maxvalue);
}

void sort_items(int value[],int weight[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n;j++)
        {
            int r1=(value[i]/weight[i]);
            int r2=(value[j]/weight[j]);

            if(r2>r1)
            {
                swap(&value[i], &value[j]);
                swap(&weight[i], &weight[j]);
            }
        }
    }
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
float knapsack(int value[],int weight[],int n,int capacity)
{
    float profit=0;
    for(int i=0;i<n && capacity>0;i++)
    {
        if(capacity>weight[i])
        {
            capacity= capacity-weight[i];
            profit=profit+value[i];
        }
        else{
            profit+=value[i]*((float)capacity/weight[i]);
                    capacity=0;

        }
    }
    return profit;
}
