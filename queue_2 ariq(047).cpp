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
            cout<<"Masukkan plat nomor mobil: ";
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
};

int main()
{
    int menu;
    park funct;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"ANTRIAN PARKIRAN MOBIL"<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"1. Masukkan mobil"<<endl;
    cout<<"2. Keluarkan mobil"<<endl;
    cout<<"3. Tampilkan list mobil"<<endl;
    cout<<"4. exit"<<endl;
    do
    {
        cout<<"==================="<<endl;
        cout<<"pilihan anda: ";
        cin>>menu;
        cout<<"==================="<<endl;
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
            cout<<"exit . . .";
            break;
        default:
            cout<<"invalid"<<endl;
        }
    }while(menu!=4);
    return 0;
}
