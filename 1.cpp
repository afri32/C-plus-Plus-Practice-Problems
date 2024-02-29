////#include<iostream>
////using namespace std;
////struct student
////{
////	char name[20];
////	int roll;
////	int marks;
////};
////void print(char name[20], int roll, int marks)
////{
////	cin >> name;
////	cout << "Name:" << name << endl;
////	cout << "Roll no:" << roll << endl;
////	cout << "marks:" << marks << endl;
////}
////int main()
////{
////	struct student stu = { "ifra",1,78 };
////	cin >> stu.name;
////	cout << stu.name << endl;
////	cout << stu.roll << endl;
////	cout << stu.marks << endl;
////	system("pause");
////}
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//	int r = 0;
//	int** p = new int* [3];
//	for (int i = 0;i < 3;i++)
//	{
//		p[i] = new int[3];
//		for (int j = 0;j < 3;j++)
//		{
//			p[i][j] = rand() % 10 + 1;
//			cout << p[i][j] << " ";
//		}
//		cout << endl;
//	}
//	
//	for (int i = 0;i < 3;i++)
//	{
//		
//		for (int j = 0;j < 3;j++)
//		{
//			
//			cout << p[j][i] << " ";
//		}
//		cout << endl;
//	}
//	system("pause");
//}