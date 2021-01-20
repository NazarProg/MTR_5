// Laba_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

//Variant 2
int main()
{    
	double M1, M2, M3, M4, SV1, SV2, SV3, SV4, SSV1, SSV2, SSV3, SSV4, CSV1, CSV2, CSV3, CSV4;
    double  x1, x2, x3, p1, p2, p3;
    double  xx1, xx2, xx3;
    double  y1, y2, y3;
    double  yy1, yy2, yy3;
    
    cout << "Task 1" << endl;
    cout << "Input first string"<< endl;
    cin >> x1 >> x2 >> x3;
    cout << "Input second string" << endl;
    cin >> xx1 >> xx2 >> xx3;
    cout << "Input third string" << endl;
    cin >> y1 >> y2 >> y3;
    cout << "Input fourth string" << endl;
    cin >> yy1 >> yy2 >> yy3;
    cout << "Input P1" << endl;
    cin >> p1;
    cout << "Input P2" << endl;
    cin >> p2;
    cout << "Input P3" << endl;
    cin >> p3;
    //Task 1 minimal semivariation
    M1 = p1 * x1 + p2 * x2 + p3 * x3;
    M2 = p1 * xx1 + p2 * xx2 + p3 * xx3;
    M3 = p1 * y1 + p2 * y2 + p3 * y3;
    M4 = p1 * yy1 + p2 *yy2 + p3 * yy3;
    SV1 = pow((x1 - M1),2) * p1 + pow((x3 - M1),2) * p3;
    SV2 = pow((x2 - M2),2) * p2 + pow((x3 - M2),2) * p3;
    SV3 = pow((y1 - M3),2) * p1 + pow((y2 - M3),2) * p2;
    SV4 = pow((yy2 - M4),2) * p2 + pow((yy3 - M4),2) * p3;
    cout << "SV1: " << SV1 << endl;
    cout << "SV2: " << SV2 << endl;
    cout << "SV3: " << SV3 << endl;
    cout << "SV4: " << SV4 << endl;

    double m[4] = { SV1, SV2, SV3, SV4 };
    double min = m[0];
    for (int i = 0; i < 4; ++i)
    {
        if (m[i] < min)
        {
            min = m[i];
        }
    }
    cout << "Optimal choice is " << min << endl;

    //Task 2 minimal semivariation coefficient

    SSV1 = sqrt(SV1);
    SSV2 = sqrt(SV2);
    SSV3 = sqrt(SV3);
    SSV4 = sqrt(SV4);
    cout << "SSV1: " << SSV1 << endl;
    cout << "SSV2: " << SSV2 << endl;
    cout << "SSV3: " << SSV3 << endl;
    cout << "SSV4: " << SSV4 << endl;
    CSV1 = SSV1 / M1;
    CSV2 = SSV2 / M2;
    CSV3 = SSV3 / M3;
    CSV4 = SSV4 / M4;
    cout << "CSV1: " << CSV1 << endl;
    cout << "CSV2: " << CSV2 << endl;
    cout << "CSV3: " << CSV3 << endl;
    cout << "CSV4: " << CSV4 << endl;

    double m1[4] = {CSV1, CSV2, CSV3, CSV4};
    double min1 = m1[0];
    for (int i = 0; i < 4; ++i)
    {
        if (m1[i] < min1)
        {
            min1 = m1[i];
        }
    }
    cout << "Optimal choice is " << min1 << endl;

}


