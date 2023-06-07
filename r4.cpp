// print 1 to n using backtrackking
#include<iostream>
using namespace std;
class check{

public:
    int i,n;
    void show(int i,int n)
    {
            if(i<=0)
                return;
            show(i-1,n);
            cout<<i<<endl;

    }


};
int main()
{   check c;
    int i,n;
    cout<<"enter the number for printing:"<<endl;
    cin>>n;

    c.show(n,n);
}



/*
void show(int i,int n)              in backtrackin first fun called then logic or printing done
    {
            if(i<=0)
                return;
            show(i-1,n);
            cout<<i<<endl;

    }
show(5,5)   5
false
show(4,5)   4
fales
show(3,5)   3
false
show(2,5)    2
false
show(1,5)   1
false
true

*/
