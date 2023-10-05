//“You don't have to be great to start, but you have to start to be great.”
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

//What is Lorem Ipsum?
//Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum
