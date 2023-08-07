class List {
private:
    typedef struct node {
        int  data ;
        node* next ;

    }* nodeptr;
    nodeptr head ;
    nodeptr curr ;
    nodeptr temp ;
public:
    List();
    void AddNode(int addData);
    void DeleteNode(int deleteData);
    void PrintList();

};


