#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::cout << "Hello!" << std::endl;
    int x;
    std::cin>>x;
    x=2*pow(x,5)+3*pow(x,2)-1;
    std::cout<<std::setprecision(3)<<x;
    unsigned int a;
    std::cin>>a;
    std::cout<< std::showpos<<2*abs(a-1)+sqrt(a-6);
    bool k;
    bool l;
    bool m;
    bool n;
    std::cin>>k;
    std::cin>>l;
    std::cin>>m;
    std::cin>>n;
    std::cout<<std::boolalpha<<(l||n)&&(m xor !k);
    short int b;
    std::cin>>b;
    b=pow(2,b);
    std::cout<< std::noshowpos<<b<<std::endl;
    std::cout<< std::oct<<b;
    unsigned short int c;
    unsigned short int f;
    unsigned short int d;
    unsigned short int e;
    std::cin>>c;
    std::cin>>f;
    std::cin>>d;
    std::cin>>e;
    e=c&(f xor d)|~e;
    std::cout<< std::showbase<< std::hex<< e;
    return 0;
}