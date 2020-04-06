#include<iostream>
using namespace std;

int que[100], n=100, x=-1, y=-1;
class park
{
public:
    void inserts()
    {
        int nom;
        if(y==n-1)
        {
            return;
        }
        else(x== -1);
        {
            x=0;
            cout<<"input nomor: ";
            cin>>nom;
            y++;
            que[y]=nom;
        }

    }
    void out()
    {
        if(x==-1||x>y)
        {
            cout<<"nope!"<<endl;
            return;
        }
        else
        {
            cout<<que[x]<<" telah keluar"<<endl;
            x++;;
        }
    }
    void display()
    {
        if(x==-1)
        {
            cout<<"empty"<<endl;
        }
        else
        {
            cout<<"nomor yang ada: "<<endl;
            for(int i=x;i<=y;i++)
            {
                cout<<que[i]<<" "<<endl;
            }
        }
    }
    void clears()
    {
        x=-1;
        y=-1;
        cout<<"data berhasil dibersihkan . . ."<<endl;
    }
    int ndata()
    {
        cout<<"jumlah data: "<<y+1<<endl;
    }
    int sumdata()
    {
        int sum=0;
         for(int i=x;i<=y;i++)
        {
            sum+=que[i];
        }
        cout<<"jumlah data: "<<sum<<endl;
    }
    float average()
    {
        float avr;
        int sum=0;
        for(int i=x;i<=y;i++)
        {
            sum+=que[i];
        }
        avr=sum/(y+1);
        cout<<"rata-rata: "<<avr<<endl;
    }
};

int main()
{
    int menu;
    park funct;
    cout<<"Menu ANTRIAN"<<endl;
    cout<<"1. enqueue"<<endl;
    cout<<"2. dequeue"<<endl;
    cout<<"3. tampil"<<endl;
    cout<<"4. clear"<<endl;
    cout<<"5. banyak data"<<endl;
    cout<<"6. jumlah data"<<endl;
    cout<<"7. rata-rata"<<endl;
    cout<<"8. exit"<<endl;
    do
    {
        cout<<"pilihan: ";
        cin>>menu;
        switch(menu)
        {
        case 1:
            funct.inserts();
            break;
        case 2:
            funct.out();
            break;
        case 3:
            funct.display();
            break;
        case 4:
            funct.clears();
            break;
        case 5:
            funct.ndata();
            break;
        case 6:
            funct.sumdata();
            break;
        case 7:
            funct.average();
            break;
        case 8:
            cout<<"exit . . .";
            return 0;
        default:
            cout<<"pilihan tidak tersedia"<<endl;
        }
    }while(menu!=8);
    return 0;
}

