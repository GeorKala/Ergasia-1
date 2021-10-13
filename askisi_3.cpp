#include <iostream>
using namespace std;

template<int N, int M>
void compute_row_sum (short a[N][M], short row_sum[N])
{
	int i;
	int j;
	for (i=0; i<N; i++)
	{
		for (j=0; j<M; j++)
		{
			row_sum[i] += a[i][j];
		}
		cout<<row_sum[i]<<endl;
	}
	cout<<endl;
}



int main()
{
	short x[3][3] = {{1,2,3}, {5,6,7}, {9,10,11}};
	short y[3] = {0,0,0};
	compute_row_sum<3,3>(x,y);
	short a[4][5] = {{1,2,3,4,5}, {5,6,7,8,9}, {9,10,11,12,13}, {9,10,11,12,13}};
	short b[4] = {0,0,0,0};
	compute_row_sum<4,5>(a,b);
	return 0;
	
	
}