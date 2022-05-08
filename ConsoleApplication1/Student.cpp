#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Student {        //定义Student类
public:
	string name;
	int java;
	int maths;
	int asp;
	double avg;
	//Student(){}        //默认构造函数
	void setData(string n = "", int j = 0, int m = 0, int a = 0) {        //带默认值的setData函数初始化name，java，maths，asp
		name = n;        // strcpy把含有'\0'结束符的字符串复制到另一个地址空间，返回值的类型为char* ，将键盘输入的字符给n的地址中
		java = j;
		maths = m;
		asp = a;
		avg = (j + m + a) / 3.0;
	}

	Student createStudent() {        //定义Student类函数createStudent()
		string name;        //函数中定义字符类型name
		int java, maths, asp;        //函数中定义整形数据java,maths,asp
		cout << "学生姓名:";
		cin >> name;
		cout << "学生java成绩:";
		cin >> java;
		cout << "学生maths成绩:";
		cin >> maths;
		cout << "学生asp成绩:";
		cin >> asp;
		Student stu = Student();    //调用Student()构造函数，构造stu对象
		stu.setData(name, java, maths, asp);        //调用setData函数，初始化stu
		return stu;
	}

	void show() {
		Student stu[3];        //定义包含3个数据的Student类对象stu数组
		int i;
		for (i = 0; i < 3; i++) {
			cout << "No." << i + 1 << endl;
			stu[i] = createStudent();        //将createStudent()函数初始化得到的结果赋值给stu[i]
		}
		printf("姓名\tJava\tMathe\tASP\tAvg\n");
		for (i = 0; i < 3 - 1; i++) {        //for循环进行编号，
			for (int j = i + 1; j < 3; j++) {
				if (stu[i].avg < stu[j].avg) {        //判断大小进行交换位置
					Student stuTmp;
					stuTmp = stu[i];
					stu[i] = stu[j];
					stu[j] = stuTmp;
				}
			}
		}

		ofstream outfile;        //建立输出流outfile
		outfile.open("student.txt");        //建立输出流outfile和文件student.txt之间的关联
		//cout << "File open: " << outfile.is_open() << endl;
		outfile << "name\tJava\tMathe\tASP\tAvg\n";
		for (i = 0; i < 3; i++) {
			Student s = stu[i];
			//char *buf = new char[1024];        //在内存中创建一个1024字节大小的空间*buf
			char *buf = new char[1024];        //在内存中创建一个1024字节大小的空间*buf
			sprintf_s(buf,1024, "%s\t%d\t%d\t%d\t%f\n", s.name.c_str(), s.java, s.maths, s.asp, s.avg);
			// sprintf是字符串格式化命令, 主要功能是把格式化的数据写入某个字符串中，即发送格式化输出到 string 所指向的字符串
			cout << buf;        //
			outfile << buf;        //使用输出流outfile将指针buf所指字符串流向文件
		}
		outfile.close();
	}
};

