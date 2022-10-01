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

// What is Lorem Ipsum?
// Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.
