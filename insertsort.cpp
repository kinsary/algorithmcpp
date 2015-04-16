
/************************************************************************/
/*    kinsary   2015 - 04 - 16  直接插入排序                            */
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
	for (int i = 1; i < n; i++) // 视 r[0] 有序， 对后面每个元素进行如下操作
	{
		if (r[i] < r[i-1])  // 如果比前面的小，就逐个往前插入 或通过定位之后后移的方式实现
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