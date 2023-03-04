#pragma once

class table {
public:
	string table_name;	// 表名
	char Sno[12]; 	// 学号
	string Sname;	// 姓名
	char Ssex;		// 性别
	char Sbirth[8];	// 出生日期	
	string Sdept;	// 所在系
	table();
	table(string name);
	~table();
private:

};