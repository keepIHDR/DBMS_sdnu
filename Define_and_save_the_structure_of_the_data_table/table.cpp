#include "table.h"

struct stuData {
	char Sno[12]; 	// ѧ��
	string Sname;	// ����
	char Ssex;		// �Ա�
	char Sbirth[8];	// ��������
	string Sdept;	// ����ϵ
	string Sclass;	// ���ڰ༶
}Data[MAX_NUMS];

string tablePath = "D:\\Development\\DBSM\\DBMS_sdnu\\Define_and_save_the_structure_of_the_data_table\\data\\table\\";

string createTable() {
	string table_name;
	cout << "������Ҫ������student�������: ";
	cin >> table_name;
	ofstream ofs;
	string fileName = tablePath + table_name + ".txt";
	ifstream ifs(fileName.c_str());
	if (!ifs.good()) {	// ���ݱ��ļ�����
		int count;
		ofs.open(tablePath + table_name + ".txt", ios::out);
		ofs << "ѧ��\t\t����\t�Ա�\t��������\t����ϵ\t\t���ڰ༶\t" << endl;
		//cout << "202111000212\t�����\t��\t20021221\t�����ϵ\t�ƹ���2102" << endl;
		//cout << "�������±���ֶ���: ";
		//cin >> count;
		//for (int i = 0; i < count; i++) {
		//	string temp_name;
		//	cout << "������� " << i + 1 << " ���ֶ���: ";
		//	cin >> temp_name;
		//	ofs << temp_name + "\t";
		//}
		//ofs << endl;
		ofs.close();
		cout << "�����ɹ�! " << endl;
		cout << "�ñ����� 6 ���ֶ�: " << endl;
		cout << ">> �ֶ���\t�ֶ�����\t�ֶγ���" << endl;
		cout << "   ѧ��\t\tchar\t\t12" << endl;
		cout << "   ����\t\tchar\t\t8" << endl;
		cout << "   �Ա�\t\tchar\t\t1" << endl;
		cout << "   ��������\tchar\t\t8" << endl;
		cout << "   ����ϵ\tvarchar\t\t50" << endl;
		cout << "   ���ڰ༶\tchar\t\t10" << endl;
		return fileName + "\n";
	}
	else {
		cout << "����ʧ��! " << endl;
		cout << "ʧ��ԭ��: �����Ƶ����ݱ��Ѿ�����" << endl;
		return "";
	}
}

void deleteTable() {

}