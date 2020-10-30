#include<iostream>
using namespace std;
class arrow
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
        cout<<n<<"\n";
    }
    arrow *operator ->();
};
arrow* arrow::operator->()
{
    return this;
}
int main()
{
    arrow a;
    a.getel();
    cout<<"with dot operator:\n";
    a.show();
    cout<<"with overloaded arrow operator:\n";
    a->show();          // without overloading -> ,error: base operand of '->' has non-pointer type 'arrow'

    return 0;
}
