#include<iostream>
#include<vector>
#include<cstdlib>

class Hash{
	int* hashitems;
	int size;
	public:
		Hash(int size){
			this->hashitems = (int *)malloc(size*sizeof(int));
			this->size = size;
			for(int i=0;i<this->size;i++){
				this->hashitems[i]=-1;
			}
		}
		 set(std::string item,int num){
			int addr = this->hashIndex(item);
			//Deal with collisions.
			if(this->hashitems[addr]==-1)
			this->hashitems[addr] = num;
			for(int i=0;i<this->size;i++){
				std::cout<<this->hashitems[i]<<" ";
			}
			std::cout<<"\n";
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
	//Testing collision
	obj.set("anoma",40);
	obj.print("anoma");
	obj.freememory();
}
