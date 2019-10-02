#include <iostream>
#include <cstring>
using namespace std;

struct Rational
{
    private:
        int a;
        int b;
        // ������� ����������
        void Reduction ()
            {
                int nod=1,a,b=this->b;

                if(this->a>=0) a=this->a;
                else a=-this->a;

                for (int i = a; i > 0; i--)
                {
                    if (a%i==0 && b%i==0)
                        {
                            nod*=i;
                            break;
                        }
                }
                this->a/=nod;
                this->b/=nod;
            }
    public:
 // ����������� ���������
    Rational(int a, int b)
        {
            this->a=a;
            this->b=b;
            Reduction ();
        }
// ���������� ������������ ��������� Rational ��� ������ �����
    Rational(int a)
        {
            this->a=a;
            this->b=1;
        }
// ����������� �����������
    Rational (const Rational &other)
        {
            this->a=other.a;
            this->b=other.b;
        }
// �������, ��������� �� ����� �����
        void Print()
        {
            if(a==0 || b==1) cout << a << endl;
            if(a!=0 && b!=1) cout << a << "/" << b << endl;
        }
//�������� ����������
        Rational & operator = (const Rational &other)
        {
            this->a=other.a;
            this->b=other.b;
            return *this;
        }
//�������� ��������
        Rational operator + (const Rational &other)
        {
            Rational g(0,0);
            g.a=(this->a)*(other.b)+(other.a)*(this->b);
            g.b=(this->b)*(other.b);
            g.Reduction ();
            return g;
            return *this;
        }
//�������� ���������
        Rational operator - (const Rational &other)
        {
            Rational g(0,0);
            g.a=(this->a)*(other.b)-(other.a)*(this->b);
            g.b=(this->b)*(other.b);
            g.Reduction ();
            return g;
            return *this;
        }
//�������� ���������
        Rational operator * (const Rational &other)
        {
            Rational g(1,1);
            g.a=(this->a)*(other.a);
            g.b=(this->b)*(other.b);
            g.Reduction ();
            return g;
            return *this;
        }
//�������� �������
        Rational operator / (const Rational &other)
        {
            Rational g(1,1);
            g.a=(this->a)*(other.b);
            g.b=(this->b)*(other.a);
            g.Reduction ();
            return g;
            return *this;
        }
// �������� ���������
        void Comparison (const Rational &other)
        {
            if(this->a*other.b>other.a*this->b)
            {
                cout << this->a << "/" << this->b << ">" << other.a << "/" << other.b;
            }
            if(this->a*other.b<other.a*this->b)
            {
                cout << this->a << "/" << this->b << "<" << other.a << "/" << other.b;
            }
            if(this->a*other.b==other.a*this->b)
            {
                cout << this->a << "/" << this->b << "=" << other.a << "/" << other.b;
            }
        }
};

int main()
{
    setlocale(LC_ALL, "ru");
    Rational a(3,25),b(1,5);
    a.Print();
    b.Print();
    // �������� ���������� ��������
    Rational c=a+b;
    c.Print();
    // �������� ���������� ���������
    c=a-b;
    c.Print();
    // �������� ���������� ���������
    c=a*b;
    c.Print();
    // �������� ���������� �������
    c=a/b;
    c.Print();
    // �������� ���������
    c.Comparison(b);
}
