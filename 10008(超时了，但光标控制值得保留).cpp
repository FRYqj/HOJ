#include <cstdio>
#include <cmath>

#include <windows.h>


void gotoxy(int x, int y) //�ú�bai�������ù��du����������
{
COORD p = {x,y};
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(h, p);
}
void getxy(int* x,int* y) //�ú�����daoȡ��ǰ����̨���λ��
{
CONSOLE_SCREEN_BUFFER_INFO c;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
GetConsoleScreenBufferInfo(h, &c);
*x =c.dwCursorPosition.X;
*y =c.dwCursorPosition.Y;
}




void outputDegree ( int n ) {
	if ( n == -1) return ;
	if ( n == 1 ) printf ("X");
	
	else {
		int spaceNum = pow ( 3 , n - 2 ) ;
		int x , y ;

		outputDegree ( n - 1 ) ;
		//������ϲ���ո��ٹ����������ڶ���degree��n-1�� 
		getxy(&x,&y);
		gotoxy( x ,y + 1 - spaceNum);
		for (int i = 0 ; i != pow ( 3 , n - 2 ) ; i++){
			if (i) gotoxy( x ,y +1 - spaceNum + i ); 
			for (int j = 0 ; j != pow ( 3 , n - 2 ) ; j++ ){
				printf(" ") ;
			}
		}
		getxy(&x,&y);
		gotoxy( x ,y + 1 - spaceNum);
		outputDegree ( n - 1 ) ;
		
		
		getxy(&x,&y);
		x = x - 3*spaceNum ;
		y = y + 1 ;
		gotoxy ( x , y );
		//��겻����,ֱ�ӿ�ʼ����ո��ٹ���������������degree��n-1�� 
		for (int i = 0 ; i != pow ( 3 , n - 2 ) ; i++){
			if (i) gotoxy( x ,y  + i ); 
			for (int j = 0 ; j != pow ( 3 , n - 2 ) ; j++ ){
				printf(" ") ;
			}
		}
		getxy(&x,&y);
		gotoxy( x ,y + 1 - spaceNum);
		outputDegree ( n - 1 ) ;
		getxy(&x,&y);
		gotoxy ( x - 2*spaceNum , y + 1);
		//ֱ��������ĸ� 
		outputDegree ( n - 1 ) ;
		//�����ϲ���ո��ٹ��������������degree��n-1��
		getxy(&x,&y);
		gotoxy( x ,y + 1 - spaceNum);
		for (int i = 0 ; i != pow ( 3 , n - 2 ) ; i++){
			if (i) gotoxy( x ,y + 1 + i - spaceNum); 
			for (int j = 0 ; j != pow ( 3 , n - 2 ) ; j++ ){
				printf(" ") ;
			}
		}
		getxy(&x,&y);
		gotoxy( x ,y + 1 - spaceNum);
		outputDegree ( n - 1 ) ;
	}
}


int main () {
	int n ;

	do {
		scanf ("%d", &n );
		outputDegree ( n ) ;
		printf ("\n-") ;
	}while ( n != -1 );
	return 0 ;
}
