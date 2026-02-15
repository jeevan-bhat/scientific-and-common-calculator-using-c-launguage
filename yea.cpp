#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class calculator{
    protected:
        int num1;
        int num2;
    public:
        void set_num(int a, int b){
            num1=a;
            num2=b;
        }
        void clac(){
            string op;
            cout<<"what is operation you need to do : + , - , * , / "<<endl;
            cin>>op;
            if (op=="+")
            {
                cout<<"the addition is : "<<num1+num2;
            }
            else if (op=="-")
            {
                if(num1>num2){
                    cout<<"the substraction of 1st number - 2nd number is : "<<num1-num2;
                }
                else{
                    cout<<"the substraction of 2nd number - 1st number is : "<<num2-num1;
                }

            }
            else if (op=="/")
            {
                if (num2==0)
                    {
                    cout<<"not possible: ";
                    /* code */
                }
                else{
                    cout<<"the division of numbers is : "<<(num1/num2)<<endl;
                }

            }
            else{
                cout<<"the multiplication is : "<<num1*num2;
            }
        }

};

class scientific {
    protected:
        int a;
        int b;
    public:
        void set(int m1, int m2){
            a=m1;
            b=m2;
        }
        void science(){
            string wh;
            cout<<"what operation should be done : sqrt or power"<<endl;
            cin>>wh;

            if (wh=="sqrt"){
                cout<<"the square root of 1st number is  "<<sqrt(a)<<" and second number is  "<<sqrt(b)<<endl;
            }
            else{
                 cout<<"the power is "<<pow(a,b)<<endl;
            }

        }

};


class all_inherited : public calculator,public scientific{
    protected:
        int bin;
        int mem1;
        int mem2;
    public:
        void set(int a ,int b, int c){
            bin=a;
            mem1=b;
            mem2=c;

        }
        void todo(){

            if(bin==0){
                scientific::set(mem1,mem2);
                scientific::science();
            }
            else{
                calculator::set_num(mem1,mem2);
                calculator::clac();
            }
        }
};
int main(){

    cout<<"started a virtual calulator which perform both common calculations and scientific calculations(square root,power) ......"<<endl;
    int binary;
    cout<<"enter 0 or 1 for scientific or common calculator : "<<endl;
    cin>>binary;

    int number1;
    int number2;
     cout<<"enter number1  : "<<endl;
    cin>>number1;
     cout<<"enter number2 : "<<endl;
    cin>>number2;

    all_inherited all;
    all.set(binary,number1,number2);
    all.todo();


    return 0;
}