#include<iostream>
using namespace std;
class plusplus
{
    int n;
    public:
	void getel()
    {
		cout<<"enter n:";
		cin>>n;
    }
    void show()
    {
        cout<<"Element="<<n<<"\n";
    }
    plusplus& operator ++()     //pre increment
    {
        n++;
        return *this;
    }
    plusplus operator ++(int d)     //post increment
    {
        plusplus temp=*this;
        ++(*this);
        return temp;
    }
};
int main()
{
    plusplus p;
    p.getel();
    cout<<"p++\n";
    (p++).show();
    p.show();
    cout<<"++p\n";
    (++p).show();
    p.show();
    return 0;
}
