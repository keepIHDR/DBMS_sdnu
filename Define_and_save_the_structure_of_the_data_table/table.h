#pragma once

class table {
public:
	string table_name;	// ����
	char Sno[12]; 	// ѧ��
	string Sname;	// ����
	char Ssex;		// �Ա�
	char Sbirth[8];	// ��������	
	string Sdept;	// ����ϵ
	table();
	table(string name);
	~table();
private:

};