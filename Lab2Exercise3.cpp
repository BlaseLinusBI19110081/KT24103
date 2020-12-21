#include <iostream>
#include <iomanip>

using namespace std;

class Node{

    public:
    
    int data;
    string p_name;
    double price;
	Node *next;
    
        Node(){};
        void setData(int data, string p_name, double price){
            this->data = data;
            this->p_name = p_name;
            this->price = price;
        }
        void setNext(Node *next){
            this->next = next;
        }
        int get_Data(){ 
			return data;
        }
        string get_Pname(){ 
			return p_name;
        }
        double get_price(){ 
			return price;
        }
        
        Node* get_Next(){
            return next;
        }
};

class LinkedList{
    Node *head;

    public:
    LinkedList(){
        head = NULL;
    }

    void insertNode(int n, string y, double z){
        Node *newNode = new Node;
        newNode->setData(n, y, z);
        newNode->setNext(NULL);
        if(head==NULL){
            head = newNode;
        }else{
            Node *current = head;
            while(current -> next != NULL){
                current = current -> get_Next();
            }
            current->setNext(newNode);
        }
    }
    
    double calc_sum(){
    	Node *newNode = head;
    	double sum = 0;
        while(newNode){
        	sum += newNode->get_price();
            newNode = newNode -> get_Next();
        } 
	}
	
	void header(){
		cout << "====================================\n";
		cout << "BC Items                      Price\n";
		cout << "====================================\n";
	}
	
	void closure(){
		cout << "====================================\n";
		cout << left << setfill(' ') << setw(30) << "Total (GST Incl.) " << calc_sum() << endl; 
		cout << "====================================\n";
	}

    void print(){
        Node *newNode = head;
        while(newNode){
			cout << left 
				 << newNode->get_Data() 
				 << " "<< setfill(' ') << setw(27) 
			     << newNode->get_Pname()  
				 << newNode->get_price() << endl;
            
            newNode = newNode -> get_Next();
        }  
    }
    

};

int main(){

    LinkedList a;
    a.header();
	a.insertNode(10, "Pagoda Gnut 110g", 3.49);
    a.insertNode(11, "Hup Seng Cream Cracker", 4.19);
    a.insertNode(12, "Yit Poh 2n1 Kopi-o", 7.28);
    a.insertNode(13, "Zoelife SN & Seed", 5.24);
    a.insertNode(14, "Gatsby S/FO Wet&Hard", 16.99);
    a.insertNode(15, "GB W/G U/Hold 150g", 6.49);
    a.print();
	a.closure();

    return 0;
}
