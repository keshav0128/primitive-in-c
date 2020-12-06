#include <iostream>
using namespace std;
class complex
{
    int a,b;
    public:
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
    operator int()
     {
         return (a);
     }
    
};
int main() {
    complex c1;
    c1.set(3,4);
    c1.show();
    int x;
    x=c1;
    cout<<"x is"<<x<<endl;
	
	return 0;
}
