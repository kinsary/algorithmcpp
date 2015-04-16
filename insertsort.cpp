
/************************************************************************/
/*    kinsary   2015 - 04 - 16  ֱ�Ӳ�������                            */
/************************************************************************/
#include<iostream>

using namespace std;

void insertSort( int [], int n );
void printArray(int* pData, int count);

int main()
{
	int r[] = {98,76,109,34,67,190,80,12,14,89,1};  
//	int r[] = {4,2,3,6,9,4,7};  

    int n = sizeof(r)/sizeof(r[0]);  

	cout << "before sort array :  "; 
	printArray(r, n);

    insertSort(r, n);  

    cout << "after sort array  :  ";
	printArray(r, n); 
	
	return 0;
}

void insertSort( int r[], int n )
{
	for (int i = 1; i < n; i++) // �� r[0] ���� �Ժ���ÿ��Ԫ�ؽ������²���
	{
		if (r[i] < r[i-1])  // �����ǰ���С���������ǰ���� ��ͨ����λ֮����Ƶķ�ʽʵ��
		{
			int nowdata = r[i];
/*
// method 1
			for (int j = i; j > 0; j--)
			{
				if (r[j] < r[j-1] )
				{
					int aa = r[j];
					r[j] = r[j-1];
					r[j-1] = aa;
				}
			}
*/		
// method 2
			int j = 0;
			for (j = i - 1; j >= 0 && r[j] > nowdata; j--)
			{
				r[j+1] = r[j];
			}
			r[j+1] = nowdata;

		}
	}
}

void printArray(int* pData, int count){  
    for (int i = 0; i< count; i++) {  
        cout << pData[i] << " ";  
    }  
    cout << endl;  
}  