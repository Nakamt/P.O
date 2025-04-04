//exemplo namespace//
#include <iostream>
#include <cmath>

//fazer um namespace que calcula o seno do meu jeito
namespace MyLib {  
    double sin (double x){
        return x*( 1 + x*x*( -1./6 + x*x*(1./120))); //formula calcula seno
    }

}//namespace MyLib

int main(void){
    double seno = sin(3.0);
    double senoMyLib = MyLib::sin(3.0);

    using namespace std;
    cout <<"\n seno(3.0) = "<<seno<<endl;

    cout<<"\n senomeu(3.0) = "<<senoMyLib<<endl;
    
    return 0;
}//main
