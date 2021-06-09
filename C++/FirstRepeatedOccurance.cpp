#include<iostream>

class HashRep{
	int* arr;
	int size=0;
	public:
		HashRep(int size){
			this->arr = (int*)malloc(size*sizeof(int));
			//Set the hashtable to a clean slate
			for (int i=0; i<size;i++){
				this->arr[i]=-1;
			}
			std::cout<<"Please enter "<<size<<" numbers:\n";
			for(int j=0;j<size;j++){
				std::cin>>this->arr[j];
			}
			this->size = size;
		}
		set(int num){
			int addr = this->hashIndex(num);
			if(this->arr[addr]==-1)
				this->arr[addr] = num;
		}
		freemem(){
			free(this->arr);
		}
		pri(){
			for(int i=0;i<this->size;i++){
				std::cout<<this->arr[i]<<" ";
			}
		}
		private:
			int hashIndex(int num){
			int hashIn = 0;
			for(int i=0;i<this->size;i++){
				hashIn = (hashIn + int(num) *i)%50;
			}
			return hashIn;
		}
};

int main(){
	int n;
	std::cout<<"Please enter the size of the array: ";
	std::cin>>n;
	HashRep obj = n;
	obj.pri();
	obj.freemem();
}
