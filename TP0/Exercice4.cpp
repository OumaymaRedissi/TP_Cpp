
#include <iostream>
#include<conio.h>

using namespace std;

int Fct(int h)
{
    cout<< "Fct1" << endl;
    return 0;
}

int Fct(float h)
{
    cout<< "Fct2" << endl;
    return 0;
}

void Fct(int h, float j)
{
    cout<< "Fct3" << endl;

}
void Fct(float h, int j)
{
    cout<< "Fct4" << endl;

}

int main()
{
int Fct(int);//fonction 1
int Fct(float);//fonction 2
void Fct(int,float);//fonction 3
void Fct(float,int);//fonction 4
int n,p;
float x,y;
char c;
double z;
int a=Fct(n); // 1
int b=Fct(x); // 2
Fct(n,x); //3
Fct(x,n); //4
int d=Fct(c); //1
//Fct(n,p);//E
//Fct(n,c);//E
Fct(n,z);
//Fct(z,z);//E

}
