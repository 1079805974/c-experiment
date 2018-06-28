template<class T> class List{
public:
  List();  //构造函数
  void Add(const T&);  //在Link表头添加新结点
  void Remove(const T&);  //在Link中删除含有特定值的元素
  T* Find(const T&);  //查找含有特定值的结点
  void PrintList();  // 打印输出整个链表
  ~List();
protected:
  struct Node{
    Node* pNext;
    T* pT;
  };
  Node *pFirst;        //链首结点指针
};