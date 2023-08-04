#include <iostream>
using namespace std;
int main()
{
    int a;
    float marks, sum, avg;
    cout<<("enter marks in five subjects:");
    for(a=0;a<5;a++)
    {
        cin>>marks;
        sum=sum+marks;

    }
    avg=sum/5;
    cout<<("\n grade =");
    if(avg>=91 && avg<=100)
    cout<<("A1");
    else if (avg>81 && avg<91)
    cout<<("A2");
    else if(avg>71 && avg<81)
    cout<<("B1");
    else if(avg>61 && avg<71)
    cout<<("B2");
    else if(avg>51 && avg<61)
    cout<<("C1");
    else if(avg>41 && avg<51)
    cout<<("C2");
    else if(avg>33 && avg<41)
    cout<<("D1");
    else if(avg>21 && avg<33)
    cout<<("D2");
    else if(avg>0 && avg<21)
    cout<<("E");
    else
    cout<<("wrong output!");
    cout<<(endl);
    return 0;
}