#ifndef _LISTP_H_
#define _LISTP_H_
typedef int listItemType;
struct listNode;
typedef listNode *ptrType;
class listClass
{
private:
    int Size_;
    ptrType Head_;
    ptrType PtrTo_(int Position) const;

public:
    listClass();
    listClass(const listClass &L);
    ~listClass();
    bool ListIsEmpty() const;
    int ListLength() const;
    void ListInsert(int NewPosition, listItemType &NewItem, bool &Success);
    void ListDelete(int Position, bool &Success);
    void ListRetrieve(int Position, listItemType &DataItem, bool &Success) const;
    void push(listItemType &DataItem);
    void pop();
    void top(listItemType &);
    void orderInsert(listItemType NewItem);
};

#endif