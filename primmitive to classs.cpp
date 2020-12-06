#include <iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex()
     {
         
     }
    complex(int k)
     {
         a=k;
         b=0;
     }
    void set(int x,int y)
     {
         a=x;
         b=y;
         
     }
    void show()
     {
         cout<<"a is"<<a<<endl;
         cout<<"b is"<<b<<endl;
     }
    
};
int main() {
    complex c1;
    int x=5;
    c1=x;
    c1.show();
	
	return 0;
}
