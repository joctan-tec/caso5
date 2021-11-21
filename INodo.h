#ifndef _INODO_
#define _INODO_ 1

class INodo {
    public:
        int getId() {
            return id;
        }

        void setId(int pId) {
            this->id = pId;
        }

        void setVisited(){
            this->visited = true;
        }

        void setNotVisited(){
            this->visited=false;
        }

        bool isVisited(){
            return this->visited;
        }

        void setMetedor(INodo* pMetedor){
            this->metedor=pMetedor;
        }

        INodo* getMetedor(){
            return this->metedor;
        }
        
    protected:
        int id;
        bool visited; 
        INodo* metedor=nullptr;
};

#endif