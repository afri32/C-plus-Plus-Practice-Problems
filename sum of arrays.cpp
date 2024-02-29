//#include<iostream>
//using namespace std;
//void input(int** p, int row, int col)
//{
//
//	cout << "enter your First matrix";
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cin >> p[i][j];
//		}
//	}
//	cout << endl;
//
//
//}
//void display(int** p, int row, int col)
//{
//	cout << "your first  matrix is:" << endl;;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << p[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//
//
//}
//int** sum(int** p, int row, int col, int** q, int row2, int col2)
//{
//	int** sum1 = new int* [row];
//	for (int i = 0; i < row; i++)
//	{
//		sum1[i] = new int[col];
//	}
//	if (row == row2 && col == col2)
//	{
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				sum1[i][j] = p[i][j] + q[i][j];
//			}
//		}
//	}
//	else
//	{
//		cout << "matrixes are not equal:" << endl;
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << sum1[i][j] << " ";
//		}
//		cout << endl;
//
//	}
//	return sum1;
//}
//int main()
//{
//	int row, col;
//	cout << "enter your row size:";
//	cin >> row;
//	cout << "enter your column size:";
//	cin >> col;
//
//	int row1, col1;
//	cout << "enter your row size:";
//	cin >> row1;
//	cout << "enter your column size:";
//	cin >> col1;
//	int** p2 = new int* [row];
//	for (int i = 0; i < row; i++)
//	{
//		p2[i] = new int[col];
//	}
//
//
//	input(p2, row, col);
//	display(p2, row, col);
//	int** p1 = new int* [row];
//	for (int i = 0; i < row; i++)
//	{
//		p1[i] = new int[col];
//	}
//	input(p1, row1, col1);
//	display(p1, row1, col1);
//
//	int** sum2 = sum(p1, row, col, p2, row1, col1);
//
//
//	system("pause");
//}
