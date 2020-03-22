#include<iostream>
using namespace std;

struct bio
{
    string name;
    int nim;
    bio *next;
};

class links
{
private:
    bio *head, *tail;
public:
    links()
    {
        head=NULL;
        tail=NULL;
    }
    void create(string a, int b)
    {
        bio *temp= new bio;
        temp->name=a;
        temp->nim=b;
        temp->next=NULL;
       if(head==NULL)
        {
            head=temp;
            tail=temp;
            temp=NULL;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    void display()
    {
        bio *temp=new bio;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->name<<endl;
            cout<<temp->nim<<endl;
            temp=temp->next;
        }
    }
    void inserts(string a, int b)
    {
        bio *temp=new bio;
        temp->name=a;
        temp->nim=b;
        temp->next=head;
        head=temp;
    }
    void deletepos(int pos)
    {
        bio *curr=new bio;
        bio *prev=new bio;
        curr=head;
        for(int i=1;i<pos;i++)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        cout<<"data mahasiswa ke-"<<pos<<" terhapus!"<<endl;
    }
};

int main()
{
    int n,  x;
    int nimu;
    string namae;
    links dat;
    cout<<"Data mahasiswa"<<endl;
    cout<<"Berapa data yang ingin diinput? ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"mahasiswa ke-"<<i+1<<endl;
        cout<<"nama: ";
        cin>>namae;
        cout<<"nim: ";
        cin>>nimu;
        dat.create(namae,nimu);
    }
    cout<<endl<<"menampilkan semua data "<<endl;
    dat.display();
    cout<<"hapus data mahasiswa ke berapa? ";
    cin>>x;
    dat.deletepos(x);
    cout<<endl<<"menampilkan semua data "<<endl;
    dat.display();
}
