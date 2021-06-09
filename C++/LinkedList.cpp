#include<iostream>
using namespace std;

class LL{
	private:
		struct Node{
			int data;
			Node *next;
		};
		Node *head = NULL;
		unsigned int list_size = 0;
	public:
		void addNode(int dat){
			Node *temp = new Node;
			Node *traverse = new Node;
			traverse = head;
			temp->data = dat;
			temp->next = NULL;
			if(head == NULL){
				head = temp;
				list_size +=1;
				cout<<"List size is "<<list_size<<"\n";
			}
			else{
				while(traverse->next!= NULL){
					traverse = traverse->next;
				}
				traverse->next = temp;
				list_size +=1;
				cout<<"List size is "<<list_size<<"\n";
			}
		}
		void printList(){
			Node *ptr = new Node;
			ptr = head;
			while(ptr!= NULL){
				cout<<"Linked list element is: "<<ptr->data<<"\n";
				ptr = ptr->next;
			}
		}
};

int main(){
	LL obj;
	obj.addNode(4);
	obj.addNode(7);
	obj.addNode(9);
	obj.addNode(77);
	obj.printList();
	return 0;
}
