#include<iostream>

using namespace std;

class user{
	
	private:
		void demo(){
			cout<<"pen"<<endl;
			cout<<"soap"<<endl;
			cout<<"shampoo"<<endl;
		}
	
	public:
		void ravan(){
			cout<<"Sofa"<<endl;
			cout<<"T.V"<<endl;
			cout<<"watch"<<endl;
		}
		
};

main(){
	
	user obj;
	obj.ravan();
	obj.demo();
}
