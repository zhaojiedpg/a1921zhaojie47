#include "listg.h"

int main(int argc, char **argv)
{
	List *list = (List *)malloc(sizeof(List));
	printf("%d\n",Empty(list));
	printf("the first:\n");

	initList(list);
	Insert(list, 1, 10);
	Insert(list, 1,20);
	Insert(list, 2, 5);
	Insert(list, 3,70);

	dispList(list);

	printf("the second:\n");
	deleNode(list,1);
	deleNode(list,2);
	
	
	dispList(list);
	
        printf("%d\n",Empty(list));

	printf("链表的第2个元素为: %d\n",GetData(list, 2));

	ClearList(list);
	dispList(list);

	vList(list);

	return 0;

}
