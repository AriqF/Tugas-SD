#include<iostream>
#include<conio.h>
using namespace std;

int searchs(int data[], int n, int k)
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

    for(int i=1;i<=n;i++)
    {
        if(data[i]==k)
        {
            check= true;
            break;
        }
    }
    if(check)
    {
        cout<<"angka "<<k<<" ditemukan pada posisi "<<position;
    }
    else
    {
        cout<<"maaf, data yang dicari tidak ada";
    }

    cout<<endl;
}

int main()
{
    int i,  n,  m;
    int finds;

    cout<<"Pencarian angka"<<endl;
    cout<<"masukkan banyak angka? ";
    cin>>n;
    int data[n];
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"masukkan angka ke - "<<i<<": ";
        cin>>data[i];
    }
    cout<<endl;
    cout<<"data yang ingin dicari? ";
    cin>>finds;
    searchs(data, n, finds);
    getch();
}
