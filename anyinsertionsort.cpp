
/************************************************************************/
/* kinsary   2015 - 04 - 16  (���ܣ����ڶ�������ֱ�Ӳ��뵽��һ��������)                                                               */
/************************************************************************/
#include <iostream>

using namespace std;

int* anyinsertionsort(int* , int, int* , int); 
void printArray(int* pData, int count);  // ��ӡ����

int main()
{
	// Ϊ�����������������������Ҳ���ȷֱ�����
	int a[] = {1,2,3,4,7,8,9,10}; 
	int b[] = {146, 4, 15, 22};

	cout << "����a:";
	printArray(a, 8);
	cout << "����b:";
	printArray(b, 4);

	int* c = NULL;
	c = anyinsertionsort(a, 8, b, 4);

	cout << "����b����a֮��";
	printArray(c, 12);

	//free(c);


	return 0;
}


/************************************************************************/
/* ��֪���������� int a[] =  {1,2,3,4,7,8,9,10}; int b[] = {2,5,6,8,13};
/* Ҫ��д��f(n)�� ��b�е����ְ�˳����뵽a�У�Ϊ�˼�㣬Ĭ��a,b�������Ѿ�����                                                                      */
/************************************************************************/
int* anyinsertionsort(int* p1, int count1,  int* p2, int count2)  // p2 ���뵽 p1 ��
{
	int* c = new int[count1 + count2];
	
	// �˴�������ֱ�� c=p1 , ���� debug ���죬��������---
	for (int n = 0; n < count1; n++) // �Ȱѵ�һ�����е������Ƶ�Ŀ��������
	{
		c[n] = p1[n];
	}
	
	for (int i = 0; i < count2; i++) // ���ڵ�2��������е�ÿһ�����������²�������
	{
		int data = p2[i];
		
		if (data > c[count1-1]) // ����������ֵ��ֱ�Ӳ��뵽������鳤�ȼ�1����������һ����Ҫ�������
		{
			c[count1] = data;
			count1++;
			continue;
		}

		for (int j = 0; j < count1; j++) // ���С��ĳ����������뵽��λ�ã������������һλ
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
		// �ڴ˹����У����� c ���������󲢱�������
	}

	return c;
	
}

void printArray(int* pData, int count){  
    for (int i = 0; i< count; i++) {  
        cout << pData[i] << " ";  
    }  
    cout << endl;  
}  


