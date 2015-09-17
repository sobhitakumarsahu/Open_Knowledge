#include<iostream>
using namespace std;
int isMajority(int arr[],int len,int cand)
{
    cout<<"LEN: "<<len;
    cout<<"CAND: "<<cand<<"\n";
    int i,count=0;
    for(i=0;i<len;i++)
    {
        if(arr[i]==cand)
        {
            count++;
        }
    }
    cout<<"Count: "<<count<<"\n";
    if(count>len/2)
        {
            return 1;
        }
        else
            return 0;
}
int findCandidate(int arr[],int len)
{
    int i,maj_index=0,count=1;
    for(i=1;i<len;i++)
    {
        if(arr[maj_index]==arr[i])
        {
            count++;
        }
        else
            count--;
        if(count==0)
        {
            maj_index=i;
            count=1;
        }
    }
    return arr[maj_index];
}
void printMajority(int arr[],int len)
{
    int cand=findCandidate(arr,len);
    if(isMajority(arr,len,cand))
    {
        cout<<"Candidate: "<<cand<<"\n";
    }
    else
        cout<<"There is no majority element\n";

}
int main()
{
    int arr[7]={2, 2, 3, 5, 2, 2, 6};
    printMajority(arr,7);
}
