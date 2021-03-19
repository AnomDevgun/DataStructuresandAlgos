#include<iostream>
#include<vector>
#include<cstdlib>

class Hash{
	int* hashitems;
	public:
		Hash(int size){
			this->hashitems = (int *)malloc(size*sizeof(int));
		}
		 set(std::string item,int num){
			int addr = this->hashIndex(item);
			this->hashitems[addr] = num;
		}
		
		print(std::string item){
			std::cout<<hashitems[this->hashIndex(item)]<<"\n";
		}
		
		freememory(){
			free(this->hashitems);
		}
		
	private:
		int hashIndex(std::string itemName){
			int hashIn = 0;
			for(int i=0;i<itemName.length();i++){
				hashIn = (hashIn + int(itemName[i]) *i)%50;
			}
			return hashIn;
		}
};


int main(){
	Hash obj=50;
	obj.set("anoma",20);
	obj.print("anoma");
	obj.set("kartik",21);
	obj.print("kartik");
	obj.freememory();
}
