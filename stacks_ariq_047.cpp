#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
#define max 30

class Stack
{
private:
  char words[max];
  int top, length, counts;

public:
  Stack() {
    top=-1;
    length=0;
    counts=0;
  }

void getStr() {
  cout<<"Masukkan kata: ";
  cin.getline(words,max);
  length=strlen(words);
}

void Push(char temp) {
  top++;
  words[top]=temp;
}

void dispy()
{
    cout<<endl<<"kalimat asli: "<<words<<endl;
    cout<<"jumlah huruf: "<<length<<endl;
}

char pop() {
  if(top==-1)  {
    char ch;
    return ch;
  }
  char temp=words[top];
  top--;
  return temp;
}

void dispt()  {
    cout<<"kata setelah dibalik: ";
  for(int i=length-1; i>=0; i--)
  {
      cout<<words[i];
  }
    cout<<endl;
}

void checkPal() {
  for(int i=0; i<length; i++)
    Push(words[i]);

  for(int i=0; i<length; i++) {
    if(words[i]==pop())
      counts++;
  }
  if(counts==length) {
    cout<<"Palindrome";
  }
  else  cout<<"Bukan Palindrome";
}
};

int main()
 {
    cout<<"aplikasi stack untuk membalik kalimat"<<endl;
    for(int i=0;i<=30;i++)
    {
        cout<<"=";
    }
    cout<<endl;
    Stack funct;
    funct.getStr();
    funct.dispy();
    funct.dispt();
    funct.checkPal();
}


