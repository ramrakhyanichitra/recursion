//printing n to 1 using backtrackking
#include<iostream>
using namespace std;
class xyz{
public:
    int t=1;
    void show(int i,int n)
    {

        if(i>n)
            return;
        show(i+1,n);
        cout<<i<<endl;

    }

};
int main()
{   xyz o;
    int n;
    cout<<"enter number for upto which series is to be printed"<<endl;
    cin>>n;
    cout<<"numbers between "<<n<<" and 1 are"<<endl;
    o.show(1,n);



}


/*
void show(int i,int n)
    {

        if(i>n)
            return;
        show(i+1,n);
        cout<<i<<endl;

    }
show(1,5)   1
false
show(2,5)   2
false
show(3,5)   3
false
show(4,5)   4
false
show(5,5)   5
false
show(6,5)
true
return

*/
