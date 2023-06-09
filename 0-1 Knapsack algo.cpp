#include<iostream>
using namespace std;
 

int knapsack(int w[], int p[], int n, int M)
{
    
    if(M==0)
        return 0;
    if(n==0)
        return 0;
    if(w[n-1]>M)
        return knapsack(w,p,n-1,M);
    return max(knapsack(w,p,n-1,M),p[n-1]+knapsack(w,p,n-1,M-w[n-1]));
}
 
int main()
{
    int i,n;
    int M;  //capacity of knapsack
 
    cout<<"Enter the no. of items ";
    cin>>n;
 
    int w[n];  //weight of items
    int p[n];  //value of items
 
    cout<<"Enter the weight and price of all items"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>w[i]>>p[i];
    }
 
    cout<<"enter the capacity of knapsack  ";
    cin>>M;
 
    cout<<"The maximum value of items that can be put into knapsack is "<<knapsack(w,p,n,M);
 
    return 0;
}

