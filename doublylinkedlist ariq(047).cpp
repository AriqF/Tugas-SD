#include<iostream>
using namespace std;

int n;
struct data
{
    char pass;
    data *next;
    data *prev;
};

class link
{
private:
    data *head, *tail;
public:
    link()
    {
        head=NULL;
        tail=NULL;
    }
    void creates(int a)
    {
        data *temp=new data;
        temp->pass=a;
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
            head->prev=temp;
            head=temp;
            tail=temp;
        }
    }
    void display()
    {
        data *temp=new data;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->pass<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void inserts(int a)
    {
        data *temp=new data;
        temp->pass=a;
        temp->next=head;
        temp->prev=tail;
        head=temp;
        tail=temp;
    }

    void encrypt()
    {
        int i;
        data *temp=NULL;
        data *prev=NULL;
        data *curr=head;
        for(i=1;i<=n;i++)
        {
            if(i=n)
            {
                temp=curr->next;
                curr->next=prev;
                prev=curr;
                curr=temp;
            }
        }
        head=prev;
    }

    void backward()
    {
        data *temp=NULL;
        data *prev=NULL;
        data *curr=head;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        head=prev;
    }

    void tried()
    {
        data *secLast=NULL;
        data *last=head;
        while(last->next!=NULL)
        {
            secLast=last;
            last=last->next;
        }
        secLast->next=NULL;
        last->next=head;
        head=last;
    }

    void insertkey(char p)
    {
        data *pre=new data;
        data *curr=new data;
        data *temp=new data;
        curr=head;
        for(int i=0;i<3;i++)
        {
            pre=curr;
            curr=curr->next;
        }
        temp->pass=p;
        pre->next=temp;
        temp->next=curr;
    }
};

int main()
{
    char pass;
    link sets;
    do
    {
        cout<<"berapa huruf panjang password anda? ";
        cin>>n;
        if(n<6)
        {
            cout<<"password berisi minimal 6 huruf!"<<endl;
        }
    }while(n<6);
    for(int i=1;i<=n;i++)
    {
        cout<<"karakter ke-"<<i<<": ";
        cin>>pass;
        sets.inserts(pass);
    }
    cout<<endl;
    cout<<"Data asli: ";
    sets.backward();
    sets.display();
    cout<<"data setelah di enkripsi: ";
    for(int i=1;i<=n-3;i++)
    {
        sets.tried();
    }
    sets.insertkey('p');
    sets.display();
}
