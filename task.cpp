#include<iostream>
using namespace std;
class calculator{
		int z=10;
	public:
		calculator()
		{
			cout<<"default constructor is called"<<endl;			
		}
		calculator(int a,int b)
		{
			cout<<"parameterised constructor is called"<<endl;			
		}
		int addition(int a,int b)
		{
		return a+b;	
		}
		int subtaction(int a,int b){
		return a-b;
		}
		int multiplication(int a,int b);
		float division(int a,int b)
		{
		return a/b;
		}
		int remainder(int a,int b)
		{
		return a%b;
		}
		float area_traingle(int a,int b)
		{
			return a*b*(0.5);
		}
		int area_rectangle(int l,int b)
		{
			return l*b;
		}
};
int calculator::multiplication(int a,int b)
{
	return a*b;
}
int main()
{
	int a,b;
	cin>>a>>b;
	calculator obj;
	cout<<obj.multiplication(a,b)<<endl;
	cout<<obj.area_traingle(a,b);
}
