#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    std::cout <<"Введите координаты (x, y) точки A: ";
    int xA,yA;
    std::cin>>xA>>yA;

    std::cout <<"Введите координаты (x, y) точки B: ";
    int xB,yB;
    std::cin>>xB>>yB;

    std::cout <<"Введите координаты (x, y) точки C: ";
    int xC,yC;
    std::cin>>xC>>yC;

    double a,b,dxA,dxB,dxC,dyA,dyB,dyC;
    dxA= xA;
    dxB= xB;
    dxC= xC;
    dyA= yA;
    dyB= yB;
    dyC= yC;
    b=(dyA*dxB-dyB*dxA)/(dxB-dxA);
    a=(dyA-dyB)/(dxA-dxB);
    if (dyC==a*dxC+b) {
        std::cout<<"No";
    } else {
        std::cout<<"Yes";
    }

    // std::cout.precision(3);
    // std::cout<<b;

}



