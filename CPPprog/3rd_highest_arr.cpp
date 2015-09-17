/*This is only working if numbers in sorted sequence */
#include<iostream>
using namespace std;
void find_third_highest(int arr[],int len)
{
    int i;
    int f,s,t;
    f=s=t=arr[0];
    for (i=0;i<len;i++)
    {
      //  cout<<*(arr+i)<<"\n";
        if(f<*(arr+i))
        {
            t=s;
            //cout<<"t"<<t;
            s=f;
            //cout<<"s"<<s;
            f=*(arr+i);
            //cout<<"f"<<f;
        }
    }
    cout<<"Second Highest: "<<s;
    cout<<"Third hightest"<<t;
}
int main()
{
 //   int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int arr[]={3,1,2,5,4};
    int len=sizeof(arr)/sizeof(arr[0]);
    find_third_highest(arr,len);
}

/*Will work for any kind of sequence*/

/*#include <stdio.h>

void main ()
{
    int number[30];
    int i, j, a, n, counter, average;

    printf("Enter the value of N\n");
    scanf("%d", &n);
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
    scanf("%d", &number[i]);
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] < number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers arranged in descending order are given below \n");
    for (i = 0; i < n; ++i)
    {
        printf("%d\n", number[i]);
    }
    printf("The 2nd largest number is  = %d\n", number[1]);
    printf("The 2nd smallest number is = %d\n", number[n - 2]);
    average = (number[1] + number[n - 2]) / 2;
    counter = 0;
    for (i = 0; i < n; ++i)
    {
        if (average == number[i])
        {
            ++counter;
        }
    }
    if (counter == 0 )
        printf("The average of %d  and %d is = %d is not in the array \n",
        number[1], number[n - 2], average);
    else
        printf("The average of %d  and %d in array is %d in numbers \n",
        number[1], number[n - 2], counter);
}*/
