//Lab_02.cpp
//<������ ³�����>
//����������� ������ �2.1
//˳��� ��������
//������ 5

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double a;//�������� ��������
	double z1;// ��������� ���������� 1-�� ������
	double z2;// ��������� ���������� 2-�� ������

	cout << "a = "; cin >> a;

	z1 = 1-(1.0/4)*pow(sin(2*a),2)+cos(2*a);
	z2 = pow(cos(a),2)+pow(cos(a),4);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
