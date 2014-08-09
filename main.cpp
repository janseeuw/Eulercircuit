template<EdgeType ET>
class Eulercircuit: public virtual Graph<ET>{
public:
	typedef map<int, int>  Vertex;
	Eulercircuit<ET>(int n=0):Graph<ET>(n){};
	void generate(){
		int kn=0;
		while(tour(kn)==kn && !q.empty()){
			kn=q.top();
			q.pop();
			cout<<kn<< " ";
		}
	}
private:
	stack<int> q;
	int tour(int v){
		while(true){
			Vertex k = this->operator[](v);
			std::map<int,int>::iterator it = k.begin();
			int w = it->first;
			if(it==k.end()) break;
			q.push(v);
			this->removeEdge(v,w);
			v=w;
		}
		return v;
	}
};

int main(int argc, char *argv[]){
	Eulercircuit<UNDIRECTED> ec(5);
	
	ec.addEdge(1, 0);
    ec.addEdge(0, 2);
    ec.addEdge(2, 1);
    ec.addEdge(0, 3);
    ec.addEdge(3, 4);
    ec.addEdge(4, 0);
	
	ec.generate();
	
    return 0;
}