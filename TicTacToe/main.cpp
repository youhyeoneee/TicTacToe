#include <iostream>

using namespace std;

char square[10] = { 'o',' ',' ',' ',' ',' ',' ',' ',' ',' ' };

int checkwin();
void board();

int main()
{
	int player = 1, i = 3;
	int x, y;
	
	char mark;
	while (i == 3)
	{
		board();
		player = (player % 2) ? 1 : 2;

		cout << "<x, y> 좌표<종료-1, -1>: ";
		cin >> x >> y;

		mark = (player == 1) ? 'X' : 'O'; 

		if (x == 0 && y == 0)
		{
			if (square[1] == 'X' || square[1] == 'O') //이미 체크 되어있을 때
			{
				cout << "Invalid move ";

				player--;
				cin.ignore();
				cin.get();
			}
			else //아니면 표시
				square[1] = mark;
		}
			
		else if (x == 0 && y == 1)
		{
			if (square[2] == 'X' || square[2] == 'O')
			{
				cout << "Invalid move ";

				player--;
				cin.ignore();
				cin.get();
			}
			else
				square[2] = mark;
		}
		else if (x == 0 && y == 2)
		{
			if (square[3] == 'X' || square[3] == 'O')
			{
				cout << "Invalid move ";

				player--;
				cin.ignore();
				cin.get();
			}
			else
				square[3] = mark;
		}
		else if (x == 1 && y == 0)
		{
			if (square[4] == 'X' || square[4] == 'O')
			{
				cout << "Invalid move ";

				player--;
				cin.ignore();
				cin.get();
			}
			else
				square[4] = mark;
		}
		else if (x == 1 && y == 1)
		{
			if (square[5] == 'X' || square[5] == 'O')
			{
				cout << "Invalid move ";

				player--;
				cin.ignore();
				cin.get();
			}
			else
				square[5] = mark;
		}
		else if (x == 1 && y == 2)
		{
			if (square[6] == 'X' || square[6] == 'O')
			{
				cout << "Invalid move ";

				player--;
				cin.ignore();
				cin.get();
			}
			else
				square[6] = mark;
		}
		else if (x == 2 && y == 0)
		{
			if (square[7] == 'X' || square[7] == 'O')
			{
				cout << "Invalid move ";

				player--;
				cin.ignore();
				cin.get();
			}
			else
				square[7] = mark;
		}
		else if (x == 2 && y == 1)
		{
			if (square[8] == 'X' || square[8] == 'O')
			{
				cout << "Invalid move ";

				player--;
				cin.ignore();
				cin.get();
			}
			else
				square[8] = mark;
		}
		else if (x == 2 && y == 2)
		{
			if (square[9] == 'X' || square[9] == 'O')
			{
				cout << "Invalid move ";

				player--;
				cin.ignore();
				cin.get();
			}
			else
				square[9] = mark;
		}
		else if (x == -1 && y == -1)
		{
			i = -1;
			cout << "<-1:중단 0:무승부 1:X의승리 2:O의승리>" << endl;
			cout << "결과는 -1입니다.";
			break;
		}
		else 
		{
			cout << "Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
		i = checkwin();

		player++;
	}
	
	if (i == 1)
	{
		board();
		cout << "<x, y> 좌표<종료-1, -1>: -1 -1"<< endl;
		cout << "<-1:중단 0:무승부 1:X의승리 2:O의승리>" << endl;
		cout << "결과는 1입니다." ; 
	}
		
	if (i == 2)
	{
		board();
		cout << "<x, y> 좌표<종료-1, -1>: -1 -1" << endl;
		cout << "<-1:중단 0:무승부 1:X의승리 2:O의승리>" << endl;
		cout << "결과는 2입니다.";
	}
	if (i == 0)
	{
		board();
		cout << "<x, y> 좌표<종료-1, -1>: -1 -1" << endl;
		cout << "<-1:중단 0:무승부 1:X의승리 2:O의승리>" << endl;
		cout << "결과는 0입니다.";
	}

	cin.ignore();
	cin.get();
	return 0;
}
//누가 이겼는지 체크
// i==1:X의 승리
// i==2:O의 승리
// i==0:무승부
// i==3:계속 진행
int checkwin()
{
	if (square[1] == 'X' && square[2] == 'X' && square[3] == 'X')
		return 1;
	else if (square[4] == 'X' && square[5] == 'X' && square[6] == 'X')
		return 1;
	else if (square[7] == 'X' && square[8] == 'X' && square[9] == 'X')
		return 1;
	else if (square[1] == 'X' && square[4] == 'X' && square[7] == 'X')
		return 1;
	else if (square[2] == 'X' && square[5] == 'X' && square[8] == 'X')
		return 1;
	else if (square[3] == 'X' && square[6] == 'X' && square[9] == 'X')
		return 1;
	else if (square[1] == 'X' && square[5] == 'X' && square[9] == 'X')
		return 1;
	else if (square[3] == 'X' && square[5] == 'X' && square[7] == 'X')
		return 1;

	if (square[1] == 'O' && square[2] == 'O' && square[3] == 'O')
		return 2;
	else if (square[4] == 'O' && square[5] == 'O' && square[6] == 'O')
		return 2;
	else if (square[7] == 'O' && square[8] == 'O' && square[9] == 'O')
		return 2;
	else if (square[1] == 'O' && square[4] == 'O' && square[7] == 'O')
		return 2;
	else if (square[2] == 'O' && square[5] == 'O' && square[8] == 'O')
		return 2;
	else if (square[3] == 'O' && square[6] == 'O' && square[9] == 'O')
		return 2;
	else if (square[1] == 'O' && square[5] == 'O' && square[9] == 'O')
		return 2;
	else if (square[3] == 'O' && square[5] == 'O' && square[7] == 'O')
		return 2;
	else if (square[1] != ' ' && square[2] != ' ' && square[3] != ' '
		&& square[4] != ' ' && square[5] != ' ' && square[6] != ' '
		&& square[7] != ' ' && square[8] != ' ' && square[9] != ' ')

		return 0;
	else
		return 3;
}
//게임판
void board()
{

	cout << endl;
	cout << "---|---|--- " << endl;
	cout << " " << square[1] << " | " << square[2] << " | " << square[3] << endl;
	cout << "---|---|--- " << endl;
	cout << " " << square[4] << " | " << square[5] << " | " << square[6] << endl;
	cout << "---|---|--- " << endl;
	cout << " " << square[7] << " | " << square[8] << " | " << square[9] << endl;
	cout << "---|---|--- " << endl;
	cout << endl;

}