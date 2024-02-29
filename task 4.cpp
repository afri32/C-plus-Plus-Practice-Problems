//#include<iostream>
//#include<string>
//using namespace std;
//struct ball
//{
//	string name;
//	int home;
//	int hit;
//};
//
//       struct ball b1[4];
//void input()
//{
//	
//	for (int i = 1;i <= 3;i++)
//	{
//		cout << '\n';
//		cout << "______Enter Player " << i << " Data" << "___________" << endl;
//		cout << "enter player name(first name only):";
//		cin >> b1[i].name;
//		cout << "enter number of home runs:";
//		cin >> b1[i].home;
//		cout << "enter number of hits:";
//		cin >> b1[i].hit;
//	}
//}
//void output()
//{
//	
//	for (int i = 1;i <= 3;i++)
//	{
//		cout << '\n';
//		cout << "            Player "<<i<<" Data:"<<"   " << endl;
//		cout << "Name:" << b1[i].name << endl;
//		cout << "Home runs:" << b1[i].home << endl;
//		cout << "Hits:" << b1[i].hit << endl;
//	}
//}
//void search()
//{
//	string p1;
//	cout << "enter player name you want to search:";
//	cin >> p1;
//	for (int i = 1;i <= 3;i++)
//	{
//		if (b1[i].name == p1)
//		{
//			cout << "______updating Player " << b1[i].name << " Data" << "___________" << endl;
//			cout << "enter player name(first name only):";
//			cin >> b1[i].name;
//			cout << "enter number of home runs:";
//			cin >> b1[i].home;
//			cout << "enter number of hits:";
//			cin >> b1[i].hit;
//		}
//		
//	}
//}
//void update()
//{
//	
//	for (int i = 1;i <= 3;i++)
//	{
//		cout << '\n';
//		cout << "            Player "<<i<<" Data: "<<"            " << endl;
//		cout << "Name:" << b1[i].name << endl;
//		cout << "Home runs:" << b1[i].home << endl;
//		cout << "Hits:" << b1[i].hit << endl;
//	}
//}
//int main()
//{
//	
//	input();
//	output();
//	cout << "1.Search and update player contents" << endl;
//	cout << "2.save players contents to file" << endl;
//	cout << "What do you want to do < 1 or 2 >:";
//	int choice;
//	cin >> choice;
//	char c;
//	if (choice == 1)
//	{
//		search();
//	}
//	
//	else if (choice == 2)
//	{
//		update();
//	}
//	else
//	{
//		exit(0);
//	}
//	cout << "Want to store data in file< y or n >";
//	cin >> c;
//	if (c == 'y')
//	{
//		update();
//	}
//	else
//	{
//		exit(0);
//
//
//	}
//	system("pause");
//}