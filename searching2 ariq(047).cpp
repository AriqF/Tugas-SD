#include<iostream>
#include<cstring>
#include<string>
#include<conio.h>
using namespace std;

int searchs(char data[], int n, int k, char rep)
{
    int position, i, found;
    bool check= false;

    if(n<=0)
    {
        position=-1;
    }
    else
    {
        found=0;
        i=1;
        while(i<=n-1 && !found)
        {
            if(data[i]==k)
            {
                position=i;
                found=1;
            }
            else
            {
                i++;
            }
        }
        if(!found)
        {
            position=1;
        }
    }

    for(int i=0;i<=n;i++)
    {
        if(data[i]==k)
        {
            check= true;
            data[i]=rep;
        }
    }
    if(check)
    {
        cout<<"hasil replace adalah sebagai berikut: "<<data;
    }
    else
    {
        cout<<"maaf, data yang dicari tidak ada";
    }

    cout<<endl;

}

int main()
{
    int i, length;
    string k;
    char finds, replaces;

    cout<<"masukkan sebuah kalimat: ";
    cin>>k;

    char str[k.size()+1];
    strcpy(str, k.c_str());
    length=strlen(str);

    cout<<endl;
    cout<<"> masukkan karakter yang dicari: ";
    cin>>finds;
    cout<<"> karakter pengganti: ";
    cin>>replaces;
    cout<<endl;
    searchs(str, length, finds, replaces);
    getch();
}


