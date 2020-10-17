// C++ menu driven program to implement unary operator overloading (prefix and postfix increment operator) and binary operator overloading (+ and <).
//By ARSHDEEP SINGH (github.com/ar33h)
#include<iostream>
#include<string>
using namespace std;

class complex
{
    private:
        int real, imag;
    public:
        complex()                       //Default Constructor
        {
            
        }

        complex(int r, int i)
        {
            real = r;
            imag = i;
        }

        void input()
        {
            cout<<"   Enter Real Part: ";
            cin>>real;
            cout<<"\n   Enter Imaginary Part: ";
            cin>>imag;
        }

        void sum()
        {
            cout<<"\nSum is: ";
            cout<<real<<" + " <<imag<<"i";
        }

        void compare()
        {
            cout<<"\nGreater Number is: "<<real<<" + "<<imag<<"i";
        }

        void prefix()
        {
            cout<<"\nPrefix Increment: "<<real<<" + "<<imag<<"i";
        }

        void postfix()
        {
            cout<<"\nPostfix Increment: "<<real<<" + "<<imag<<"i";
        }


        //Operator overloading
        complex operator ++ ()                  //Prefix
        {
            complex temp;
            temp.real=++real;
            temp.imag=++imag;
            return temp;
        }

        complex operator ++ (int)                  //Postfix
        {
            complex temp;
            temp.real=real++;
            temp.imag=imag++;
            return temp;
        }

        complex operator + (complex c2)         //Add
        {
            complex temp;
            temp.real = real + c2.real;
            temp.imag = imag + c2.imag;
            return temp;
        }

        bool operator > (complex c2)            //compare
        {
            if(real>c2.real && imag>c2.imag)
            {
                return 1;
            }
            else
            {
                return 0;
            }
            
        }

}c1, c2, result;

int main()
{
    cout<<"\n----------OPERATOR OVERLOADING----------\n";
    
    cout<<"\nEnter First complex number: \n";
    c1.input();
    cout<<"\nEnter Second complex number: \n";
    c2.input();

    while(1)
    {
        cout<<"""\n         1. Prefix Increment \n \
        2. Postfix Increment \n \
        3. Add two objects \n \
        4. Compare two objects \n \
        5. Exit \n """ ;

        int choice;
        cin>>choice;

        switch(choice)
        {
            case 1 : result = ++c1;
                     result.prefix();
                     break;

            case 2 : result = c1++;
                     result.postfix();
                     break;

            case 3 : result = c1 + c2;
                     result.sum();
                     break;
        
            case 4 : result = c1 >c2 ? c1 : c2;
                     result.compare();
                     break;

            case 5 : return 0;

            default: cout<<"\nInvalid Option!";
        }
    
    }

}