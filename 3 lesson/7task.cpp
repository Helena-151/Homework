#include <iostream>
#include <cstring>
using namespace std;

struct String
{
    private:
        char* str;
        int size;
    public:
 // ����������� ��������� String
    String(char* str)
        {
            size=strlen(str);
            this-> str = new char[size+1];
            for(int i=0; i<size; i++)
            {
                this->str[i]=str[i];
            }
            this->str[size]='\0';
        }
// ���������� ������������ ��������� String ��� ���������� ������
    String()
        {
            this->str="p";
            this->size=0;
        }
 // ���������� ��������� String
    ~String()
    {
        delete[]this->str;
    }

// ����������� �����������
    String (const String &other)
        {
            this->size=other.size;
            this->str=new char [other.size+1];
            this-> str = new char[size+1];
            for(int i=0; i<size; i++)
                {
                    this->str[i]=other.str[i];
                }
            this->str[size]='\0';
        }
// �������, ��������� �� ����� ������
        void Print()
        {
            for(int i=0; i<this->size; cout << *(this->str+i++));
            cout << "\n";
        }
// �������, ������������ ������ ������
        int GetSize()
        {
            return size;
        }
//�������� ����������
        String & operator = (const String &other)
        {
            if(this->str!='\0')
            {
                delete[]this->str;
            }
            this->size=other.size;
            this-> str = new char[size+1];
            for(int i=0; i<size; i++)
                {
                    this->str[i]=other.str[i];
                }
            this->str[size]='\0';
            return *this;
        }
//�������� ������������
        String operator + (const String &other)
        {
            String newstr;
            newstr.size=this->size+other.size;
            newstr.str = new char [this->size+(other.size)+1];
            int i=0;
            for(; i<this->size; i++)
            {
                newstr.str[i]=this->str[i];
            }
            for(int j=0; j<other.size; j++,i++)
            {
                newstr.str[i]=other.str[j];
            }
            newstr.str[other.size+this->size]='\0';
            return newstr;
        }
 //����� ��������� � ������
        void Poisk()
        {
            char* smallstr;
            cin >> smallstr;
            int smallsize=strlen(smallstr),y=0;
            for(int i=0; i<this->size; i++)
            {
                for(int j=0; j<smallsize;)
                {
                    if(this->str[i]==smallstr[j])
                        {
                            j++;
                            i++;
                            if(j==smallsize-1)
                                {
                                    cout << "Yes";
                                    y++;
                                }
                        }
                    else
                        break;
                }

            }
            if (y==0)
                cout<< "No" ;
        }
};

int main()
{
    setlocale(LC_ALL, "ru");
    String a("Hello");
    String b("World");
    b.Print();
    String c;
    c=a+b;
    c.Print();
    b.Poisk();
}
