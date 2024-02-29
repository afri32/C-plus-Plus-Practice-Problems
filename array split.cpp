//#include<iostream>
//#include<cstdlib>
//using namespace std;
//void split(int**arr,int r,int c)
//{
//	int r1 = 0;
//	int r2 = 0;
//	bool flag = true;
//	arr = new int* [r];
//	for (int i = 0;i < r;i++)
//	{
//		arr[i] = new int[c];
//		for (int j = 0;j < c;j++)
//		{
//			arr[i][j] = rand() % 50 + 1;
//			cout << arr[i][j] << "   ";
//		}
//		cout << endl;
//		for (int j = 0;j < c;j++)
//		{
//			if (arr[i][j] % j == 0)
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//		{
//			cout << i << " ";
//		}
//		cout << endl;
//	}
//	
//}
//int main()
//{
//	int r; 
//	int c;
//	cout << "enter your row size:";
//	cin >> r;
//	cout << "enter your column size::";
//	cin >> c;
//	int ** arr = new int* [r];
//	split(arr, r, c);
//	system("pause");
//}