//Даны три натуральных числа A, B, C. Определите, существует ли треугольник с такими сторонами. Если треугольник существует, выведите строку YES, иначе выведите строку NO.
//Треугольник — это три точки, не лежащие на одной прямой.
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//3
//4
//5
//Sample Output:
//
//YES

#include "t02_triangle.h"
#include <iostream>

using namespace std;

int t02_triangle() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a)
        cout<<"YES";
    else cout<<"NO";
};