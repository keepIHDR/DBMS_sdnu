#include "table.h"

struct stuData {
	char Sno[12]; 	// 学号
	string Sname;	// 姓名
	char Ssex;		// 性别
	char Sbirth[8];	// 出生日期
	string Sdept;	// 所在系
	string Sclass;	// 所在班级
}Data[MAX_NUMS];

string tablePath = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\data\\table\\";

string createTable() {
	string table_name;
	cout << "请输入要创建的student表的名称: ";
	cin >> table_name;
	ofstream ofs;
	string fileName = tablePath + table_name + ".txt";
	ifstream ifs(fileName.c_str());
	if (!ifs.good()) {	// 数据表文件存在
		int count;
		ofs.open(tablePath + table_name + ".txt", ios::out);
		ofs << "学号\t\t姓名\t性别\t出生日期\t所在系\t\t所在班级\t" << endl;
		//cout << "202111000212\t张泽浩\t男\t20021221\t计算机系\t计工本2102" << endl;
		//cout << "请输入新表的字段数: ";
		//cin >> count;
		//for (int i = 0; i < count; i++) {
		//	string temp_name;
		//	cout << "请输入第 " << i + 1 << " 个字段名: ";
		//	cin >> temp_name;
		//	ofs << temp_name + "\t";
		//}
		//ofs << endl;
		ofs.close();
		cout << "创建成功! " << endl;
		cout << "该表共包含 6 个字段: " << endl;
		cout << ">> 字段名\t字段类型\t字段长度" << endl;
		cout << "   学号\t\tchar\t\t12" << endl;
		cout << "   姓名\t\tchar\t\t8" << endl;
		cout << "   性别\t\tchar\t\t1" << endl;
		cout << "   出生日期\tchar\t\t8" << endl;
		cout << "   所在系\tvarchar\t\t50" << endl;
		cout << "   所在班级\tchar\t\t10" << endl;
		return fileName + "\n";
	}
	else {
		cout << "创建失败! " << endl;
		cout << "失败原因: 该名称的数据表已经存在" << endl;
		return "";
	}
}

void deleteTable() {

}