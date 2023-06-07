// printing name 5 times
#include<iostream>
using namespace std;
class recurssion{
    public:
    string name="chitra ramrakhyani";
    int cnt=0;
    void fun()
    {

        if(cnt>=5)
            return;
        cout<<name<<endl;
        cnt++;
        fun();



    }


};
int main(){
        recurssion obj;
        obj.fun();



}

