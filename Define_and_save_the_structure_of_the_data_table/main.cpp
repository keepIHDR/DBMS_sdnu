#include <iostream>
using namespace std;
#include "DBMS.h"

void showDataBaseList() {
	cout << "--------------------------------" << endl;
	cout << "|        DBMS_sdnu             |" << endl;
	cout << "--------------------------------" << endl;
	cout << "|     1.�������ݿ�             |" << endl;
	cout << "|     2.ʹ�����ݿ�             |" << endl;
	cout << "|     3.ɾ�����ݿ�             |" << endl;
	cout << "|     0.�˳�����               |" << endl;
	cout << "--------------------------------" << endl;
	cout << "����������ѡ�� >> ";
}

int main() {
	int option;
	// ѭ���ж�ָ��
	while (1) {
		showDataBaseList();
		cin >> option;
		if (option == 0) {	// �˳�����
			return 0;
		}
		switch (option) {
		case 1: // �������ݿ�
			createDataBase();
			break;
		case 2:	// ʹ�����ݿ�
			useDataBase();
			break;
		case 3:	// ɾ�����ݿ�
			deleteDataBase();
			break;
		}
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}