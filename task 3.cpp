//#include<iostream>
//using namespace std;
//struct machine
//{
//	string name;
//	int cost;
//	int quantity;
//};
//int main()
//{
//	bool flag = false;
//	int profit = 0;
//
//	machine numbers[5] = { { "cola",75,20 },{"Root beer",75,20},{ "Grape soda",80,20 },{"Cream soda",80,20} };
//	int choice = 0;
//	while (flag != true)
//	{
//		cout << "************MENU*******************" << endl;
//		for (int i = 1;i < 5;i++)
//		{
//			cout << numbers[i].name << "      " << numbers[i].cost << "         " << numbers[i].quantity << endl;
//		}
//		cout << "enter the number of drinks :" << endl;
//		cout << "For ending of the game press 0:" << endl;
//		cin >> choice;
//		if (choice == 0)
//		{
//			flag = true;
//			break;
//			exit(0);
//		}
//		else if (choice >= 1 && choice <= 5)
//		{
//			int j = choice - 1;
//			if (numbers[j].quantity > 0)
//			{
//				profit = profit + numbers[j].cost;
//				numbers[j].quantity--;
//				cout << "your drink is:" << numbers[j].name << endl;
//			}
//			else
//			{
//				cout << "your drink is out of stock:" << numbers[j].name << endl;
//			}
//		}
//		else
//		{
//			cout << "invalid choice:" << endl;
//		}
//		cout << "total profit is:" << profit << endl;
//		cout << "each drink sold with amount is:" << endl;
//		for (int i = 0;i < 5;i++)
//		{
//			cout << numbers[i].name << "=" << 20 - numbers[i].quantity << endl;
//		}
//	}
//	system("pause");
//}