// print 1 to n using recurrsion(without backtrackking)
#include<iostream>
using namespace std;
class test{
public:
    int i,n;
    void show(int i,int n)
    {
        if(i>n)
            return;
        cout<<i<<endl;
        show(i+1,n);            // logic/printing done first and then calling function

    }

};
int main()
{
    test t;
    int i,n;
    cout<<"enter the starting limit of number"<<endl;
    cin>>i;
    cout<<"enter the ending limit of number"<<endl;
    cin>>n;
    cout<<"the numbers between "<<i<<"and "<<n<<" are"<< endl;
    t.show(i,n);

}
