#include "form.h"
#define lenth 3
int main(void)
{
	pForm L = NULL, temp = NULL, head = NULL;
	size_t n = 0;
	while (n < lenth && (temp = (pForm)malloc(sizeof(Form))))
	{
		L = temp;
		if (!n)
			head = L;
		printf("%p ", L);
		L = L->Next;
		if (n == lenth - 1)
			L = NULL;
		n++;
	};
	printf("\n");
	L = head;
	printf("%p ", L);
	L = L->Next;
	printf("%p ", L);
	//L = L->Next;printf("%p ",L);
	/*while(L)
	{
		printf("%p ",L);
		L = L->Next;
	}*/
	//printf("\n");
	return 0;
}