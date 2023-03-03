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
	cout << "|     1.创建数据库             |" << endl;
	cout << "|     2.创建数据表             |" << endl;
	cout << "|                              |" << endl;
	cout << "|                              |" << endl;	
	cout << "|                              |" << endl;
	cout << "|                              |" << endl;
	cout << "|     0.退出程序               |" << endl;
	cout << "--------------------------------" << endl;
	cout << "请输入您的选项 >> ";

}

int main() {
	int option;
	string DBMS_name;	// 数据库名称
	// 循环判断指令
	while (1) {
		showList();
		cin >> option;
		if (option == 0) {
			return 0;
		}
		switch (option) {
		case 1: // 创建数据库
			cout << "请输入要创建的数据库的名称: ";
			cin >> DBMS_name;
			DBMS student(DBMS_name);
		//case 2:
			
		}
		system("pause");
		system("cls");
	}







	// 新建数据库

	// 创建文件夹

	//fstream file;
	//file.open("./student/student_info.txt", ios::app);

	//file.write((char*)&student, sizeof(DBMS));



	system("pause");
	return 0;
}