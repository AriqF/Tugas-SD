#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    do
    {
       cout<<"berapa banyak huruf? ";
       cin>>n;
       if(n<2)
       {
           cout<<"harus lebih dari 1!"<<endl;
       }
    }while(n<2);

    char lett[n];
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"masukkan huruf ";
        cin>>lett[i];
    }

    for(i=0;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            char temp;
            if(lett[i] > lett[j])
            {
                temp=lett[i];
                lett[i]=lett[j];
                lett[j]=temp;
            }
        }
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<lett[i]<<endl;
    }
}
