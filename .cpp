
#include <iostream>
using namespace std;
class complex{
    int r;
    int i;
    public:
    void read(){
        cout<<"ENTER REAL AND IMAGINARY\n"<<endl;
        cin>>r>>i;
    }
    complex add(int a){
        complex s;
        s.r=a+r;
        s.i=i;
        return s;
    }
    complex add(complex s1,complex s2){
        complex p;
        p.r=s1.r+s2.r;
        p.i=s1.i+s2.i;
        return p;
    }
    void display(){
        cout<<"complex no.\n"<<r<<"+"<<i<<"i"<<endl;
    }
};
int main(){
    complex s1,s3,s4,s2;
    int a=2;

    s1.read();
    s2.read();
    s3=s3.add(s1,s2);
    s3.display();
     s2=s2.add(a);
    s2.display();
    return 0;
}










