#ifndef _NODE_HPP_
#define _NODE_HPP_

class Node
{
private:
	int data;
	Node *link;

public:
	Node() : data(0)
	{}
	Node(int);
	Node(int, Node*);
	Node *getLink(){ return link; }
	void setLink(Node *n) { link = n; }

	int getData(){ return data; }
	void setData(int n){ data = n; }

	virtual ~Node();
	

};


#endif //_NODE_HPP_