// printing n to 1 without backtracking
#include<iostream>
using namespace std;
class abc{
public:
    void display(int i,int t=1)
    {
        if(i<=0)
            return;
        cout<<i<<endl;
        display(i-1,1);


    }


};
int main(){

        abc o;
        int n;
        cout<<"enter the number upto which you want to print"<<endl;
        cin>>n;
        cout<<"numbers between"<< n <<" and 1 is:"<<endl;
        o.display(n,1);


}
