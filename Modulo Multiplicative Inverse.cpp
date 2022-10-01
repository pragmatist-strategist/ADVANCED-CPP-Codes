#include<iostream>
using namespace std;
long long m =1e9+7;

void EE(int a, int b, int& x, int& y){
    if(a%b == 0){x=0,y=1;return;}
    EE(b,a%b,x,y);int t = x;x = y;y = t - y*(a/b);
}
int mmi(int a){int x,y;EE(a,m,x,y);x = (x+m)%m;return x;}


int main(){
    int n;
    cin>>n;
    cout<<(1LL*n*mmi(n))%m;
    return 0;
}

//What is Lorem Ipsum?
//Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum
