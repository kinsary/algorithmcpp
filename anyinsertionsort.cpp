
/************************************************************************/
/* kinsary   2015 - 04 - 16  (功能：将第二个数列直接插入到第一个数列中)                                                               */
/************************************************************************/
#include <iostream>

using namespace std;

int* anyinsertionsort(int* , int, int* , int); 
void printArray(int* pData, int count);  // 打印数组

int main()
{
	// 为简单起见，令两个数组先有序，也可先分别排序
	int a[] = {1,2,3,4,7,8,9,10}; 
	int b[] = {146, 4, 15, 22};

	cout << "数组a:";
	printArray(a, 8);
	cout << "数组b:";
	printArray(b, 4);

	int* c = NULL;
	c = anyinsertionsort(a, 8, b, 4);

	cout << "数组b插入a之后：";
	printArray(c, 12);

	//free(c);


	return 0;
}


/************************************************************************/
/* 已知两数字序列 int a[] =  {1,2,3,4,7,8,9,10}; int b[] = {2,5,6,8,13};
/* 要求：写出f(n)， 把b中的数字按顺序插入到a中，为了简便，默认a,b中数字已经排序。                                                                      */
/************************************************************************/
int* anyinsertionsort(int* p1, int count1,  int* p2, int count2)  // p2 插入到 p1 中
{
	int* c = new int[count1 + count2];
	
	// 此处不可以直接 c=p1 , 尼玛 debug 半天，累死我了---
	for (int n = 0; n < count1; n++) // 先把第一个数列的数复制到目标数组中
	{
		c[n] = p1[n];
	}
	
	for (int i = 0; i < count2; i++) // 对于第2个数组的中的每一个数进行如下操作操作
	{
		int data = p2[i];
		
		if (data > c[count1-1]) // 如果大于最大值，直接插入到最后，数组长度加1，并继续下一个需要插入的数
		{
			c[count1] = data;
			count1++;
			continue;
		}

		for (int j = 0; j < count1; j++) // 如果小于某个数，则插入到该位置，后面的数后移一位
		{
			if (data < c[j])
			{
				for (int k = count1-1; k >= j-1; k--)
				{
					c[k+1] = c[k];
				}
				c[j] = data;
				count1++;
				break;
			}		
		}
		// 在此过程中，数组 c 渐渐地增大并保持有序
	}

	return c;
	
}

void printArray(int* pData, int count){  
    for (int i = 0; i< count; i++) {  
        cout << pData[i] << " ";  
    }  
    cout << endl;  
}  


