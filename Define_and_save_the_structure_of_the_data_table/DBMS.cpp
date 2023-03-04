#include "DBMS.h"
#include "table.h"

string dataPath = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\data\\";
string folderPath = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\data\\";
string path = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\";

void showTableList() {
	cout << "--------------------------------" << endl;
	cout << "|        DBMS_sdnu             |" << endl;
	cout << "--------------------------------" << endl;
	cout << "|     1.创建表                 |" << endl;
	cout << "|     2.删除表                 |" << endl;
	cout << "|     0.退出程序               |" << endl;
	cout << "--------------------------------" << endl;
	cout << "请输入您的选项 >> ";
}
// 创建数据库
void createDataBase() {
	string DBMS_name;
	cout << "请输入要创建的数据库的名称: ";
	cin >> DBMS_name;
	ofstream ofs;
	string fileName = dataPath + DBMS_name + ".txt";
	ifstream ifs(fileName.c_str());
	if (ifs.good()) {
		ofs.open(dataPath + DBMS_name + ".txt", ios::in);
		ofs.close();
		cout << "创建成功! " << endl;
	}
	else {
		cout << "创建失败! " << endl;
		cout << "失败原因: 该名称的数据库已经存在" << endl;
	}
}

// 使用数据库
void useDataBase() {
	string DBMS_name;
	cout << "请输入要使用的数据库的名称: ";
	cin >> DBMS_name;
	int option;
	ofstream ofs;
	string fileName = dataPath + DBMS_name + ".txt";
	ifstream ifs(fileName.c_str());
	if (!ifs.good()) {
		ofs.open(dataPath + DBMS_name + ".txt", ios::app);
		cout << "打开数据库成功! " << endl;
		system("pause");
		system("cls");
		while (1) {
			showTableList();
			cin >> option;
			if (!option) {	// 退出程序
				return;
			}
			switch (option) {
			case 1:	// 创建表
				createTable();
				break;
			case 2:	// 删除表
				deleteTable();
				break;
			}
		}
		ofs.close();
	}
	else {
		cout << "打开数据库失败! " << endl;
	}
}

// 删除数据库
void deleteDataBase() {
	string DBMS_name;
	cout << "请输入要删除的数据库的名称: ";
	cin >> DBMS_name;
	string tempPath = dataPath + DBMS_name + ".txt";
	if (!(remove(tempPath.c_str()))) {
		cout << "数据库删除成功!" << endl;
	}
	else{
		cout << "数据库删除失败!" << endl;
	}
}