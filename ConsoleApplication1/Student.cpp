#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Student {        //����Student��
public:
	string name;
	int java;
	int maths;
	int asp;
	double avg;
	//Student(){}        //Ĭ�Ϲ��캯��
	void setData(string n = "", int j = 0, int m = 0, int a = 0) {        //��Ĭ��ֵ��setData������ʼ��name��java��maths��asp
		name = n;        // strcpy�Ѻ���'\0'���������ַ������Ƶ���һ����ַ�ռ䣬����ֵ������Ϊchar* ��������������ַ���n�ĵ�ַ��
		java = j;
		maths = m;
		asp = a;
		avg = (j + m + a) / 3.0;
	}

	Student createStudent() {        //����Student�ຯ��createStudent()
		string name;        //�����ж����ַ�����name
		int java, maths, asp;        //�����ж�����������java,maths,asp
		cout << "ѧ������:";
		cin >> name;
		cout << "ѧ��java�ɼ�:";
		cin >> java;
		cout << "ѧ��maths�ɼ�:";
		cin >> maths;
		cout << "ѧ��asp�ɼ�:";
		cin >> asp;
		Student stu = Student();    //����Student()���캯��������stu����
		stu.setData(name, java, maths, asp);        //����setData��������ʼ��stu
		return stu;
	}

	void show() {
		Student stu[3];        //�������3�����ݵ�Student�����stu����
		int i;
		for (i = 0; i < 3; i++) {
			cout << "No." << i + 1 << endl;
			stu[i] = createStudent();        //��createStudent()������ʼ���õ��Ľ����ֵ��stu[i]
		}
		printf("����\tJava\tMathe\tASP\tAvg\n");
		for (i = 0; i < 3 - 1; i++) {        //forѭ�����б�ţ�
			for (int j = i + 1; j < 3; j++) {
				if (stu[i].avg < stu[j].avg) {        //�жϴ�С���н���λ��
					Student stuTmp;
					stuTmp = stu[i];
					stu[i] = stu[j];
					stu[j] = stuTmp;
				}
			}
		}

		ofstream outfile;        //���������outfile
		outfile.open("student.txt");        //���������outfile���ļ�student.txt֮��Ĺ���
		//cout << "File open: " << outfile.is_open() << endl;
		outfile << "name\tJava\tMathe\tASP\tAvg\n";
		for (i = 0; i < 3; i++) {
			Student s = stu[i];
			//char *buf = new char[1024];        //���ڴ��д���һ��1024�ֽڴ�С�Ŀռ�*buf
			char *buf = new char[1024];        //���ڴ��д���һ��1024�ֽڴ�С�Ŀռ�*buf
			sprintf_s(buf,1024, "%s\t%d\t%d\t%d\t%f\n", s.name.c_str(), s.java, s.maths, s.asp, s.avg);
			// sprintf���ַ�����ʽ������, ��Ҫ�����ǰѸ�ʽ��������д��ĳ���ַ����У������͸�ʽ������� string ��ָ����ַ���
			cout << buf;        //
			outfile << buf;        //ʹ�������outfile��ָ��buf��ָ�ַ��������ļ�
		}
		outfile.close();
	}
};

