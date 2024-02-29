//#include<iostream>
//using namespace std;
//struct product
//{
//	int price;
//	string name;
//	int stock;
//};
//int main()
//{
//	int size;
//	cout << "enter size for your input:";
//	cin >> size;
//	cout << '\n';
//	product *p=new product[size];
//	for (int i = 0;i < size;i++)
//	{
//		cout << "ente name for your product:";
//		cin >> p[i].name;
//		cout << "enter price for your product:";
//		cin >> p[i].price;
//		cout << "enter stock quantity for this product:";
//		cin >> p[i].stock;;
//	}
//	cout << '\n';
//	cout << "showing list for yur product:" << endl;
//	int max = p[0].price;;
//	int min = p[0].price;;
//	int sum=0;
//	for (int i = 0;i < size;i++)
//	{
//		cout << "Name:" << p[i].name << endl;
//		cout<<"Price:"<<p[i].price<<endl;
//		cout << "Stock:" << p[i].stock << endl;
//		sum = sum + p[i].stock;
//	}
//	for (int i = 0;i < size;i++)
//	{
//		for (int j = 0;j < size;j++)
//		{
//			if (p[i].price > max)
//			{
//				max = p[i].price;
//				p[i].price = p[size - 1].price;
//				p[size - 1].price = p[i + 1].price;
//			}
//		}
//	}
//	cout << '\n';
//	cout << "maximum price  is:" << max << endl;
//
//	for (int i = 0;i < size;i++)
//	{
//		for (int j = 0;j < size;j++)
//		{
//			if (p[i].price < min)
//			{
//				max = p[i].price;
//				p[i].price = p[size - 1].price;
//				p[size - 1].price = p[i + 1].price;
//			}
//		}
//	}
//	cout << '\n';
//	cout << "minimum price  is:" << min << endl;
//	cout << '\n';
//	cout << "Our total stock is:" << sum << endl;
//	system("pause");
//}
