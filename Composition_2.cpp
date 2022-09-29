#include <iostream>
using namespace std;

class worker{
		string name;
	public:
		int worker_id;
		long salary;
	
	worker(){
		name = "Ali";
		worker_id = 321;
	}
		
	string get_name(){
		return name;	
	}
	
	void display1(){
		cout<<name<<endl;
	}
};


class tool{
		string tool_name;
		worker w;
	public:
		
	void get_toolname(){
		cout<<"enter tool name: "<<endl;
		cin>>tool_name;
	}
	
	tool(){
		tool_name = "wrench";
	}	
	
	void display(){
		cout<<"This "<<tool_name<<" belongs to "<<w.get_name()<<" having worker id: "<<w.worker_id;
	}
	
}; 

int main(){
	tool t1;
	t1.display();
}
