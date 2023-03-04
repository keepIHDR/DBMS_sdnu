#include <iostream>
using namespace std;
#include "DBMS.h"

void showDataBaseList() {
	cout << "--------------------------------" << endl;
	cout << "|        DBMS_sdnu             |" << endl;
	cout << "--------------------------------" << endl;
	cout << "|     1.创建数据库             |" << endl;
	cout << "|     2.使用数据库             |" << endl;
	cout << "|     3.删除数据库             |" << endl;
	cout << "|     0.退出程序               |" << endl;
	cout << "--------------------------------" << endl;
	cout << "请输入您的选项 >> ";
}

int main() {
	int option;
	// 循环判断指令
	while (1) {
		showDataBaseList();
		cin >> option;
		if (option == 0) {	// 退出程序
			return 0;
		}
		switch (option) {
		case 1: // 创建数据库
			createDataBase();
			break;
		case 2:	// 使用数据库
			useDataBase();
			break;
		case 3:	// 删除数据库
			deleteDataBase();
			break;
		}
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}