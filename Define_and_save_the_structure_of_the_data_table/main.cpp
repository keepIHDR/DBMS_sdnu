#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "DBMS.h"
#include "table.h"

void showList() {
	cout << "--------------------------------" << endl;
	cout << "|        DBMS_sdnu             |" << endl;
	cout << "--------------------------------" << endl;
	cout << "|     1.�������ݿ�             |" << endl;
	cout << "|     2.�������ݱ�             |" << endl;
	cout << "|                              |" << endl;
	cout << "|                              |" << endl;	
	cout << "|                              |" << endl;
	cout << "|                              |" << endl;
	cout << "|     0.�˳�����               |" << endl;
	cout << "--------------------------------" << endl;
	cout << "����������ѡ�� >> ";

}

int main() {
	int option;
	string DBMS_name;	// ���ݿ�����
	// ѭ���ж�ָ��
	while (1) {
		showList();
		cin >> option;
		if (option == 0) {
			return 0;
		}
		switch (option) {
		case 1: // �������ݿ�
			cout << "������Ҫ���������ݿ������: ";
			cin >> DBMS_name;
			DBMS student(DBMS_name);
		//case 2:
			
		}
		system("pause");
		system("cls");
	}







	// �½����ݿ�

	// �����ļ���

	//fstream file;
	//file.open("./student/student_info.txt", ios::app);

	//file.write((char*)&student, sizeof(DBMS));



	system("pause");
	return 0;
}