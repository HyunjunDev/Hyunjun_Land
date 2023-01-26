#include "HyunjunLand.h"
#include <string.h>
using namespace std;

MCI_OPEN_PARMS OpenCoineffect;
////플레이 할 용도
MCI_PLAY_PARMS PlayCoineffect;

UINT coinID;

void PlayingCoineffect()
{
	mciSendCommand(coinID, MCI_SEEK, MCI_SEEK_TO_START, (DWORD)(LPVOID)&PlayCoineffect);
	OpenCoineffect.lpstrElementName = TEXT("Coin.mp3");
	OpenCoineffect.lpstrDeviceType = L"mpegvideo";
	mciSendCommand(0, MCI_OPEN, MCI_OPEN_TYPE | MCI_OPEN_ELEMENT, (DWORD)(LPVOID)&OpenCoineffect);
	coinID = OpenCoineffect.wDeviceID;
	mciSendCommand(coinID, MCI_PLAY, MCI_NOTIFY, (DWORD)(LPVOID)&PlayCoineffect);
}

MCI_OPEN_PARMS OpenCardDraweffect;
////플레이 할 용도
MCI_PLAY_PARMS PlayCardDraweffect;

UINT cardDrawID;

void PlayingCardeffect()
{
	mciSendCommand(cardDrawID, MCI_SEEK, MCI_SEEK_TO_START, (DWORD)(LPVOID)&PlayCardDraweffect);
	OpenCardDraweffect.lpstrElementName = TEXT("CardDraw.mp3");
	OpenCardDraweffect.lpstrDeviceType = L"mpegvideo";
	mciSendCommand(0, MCI_OPEN, MCI_OPEN_TYPE | MCI_OPEN_ELEMENT, (DWORD)(LPVOID)&OpenCardDraweffect);
	cardDrawID = OpenCardDraweffect.wDeviceID;
	mciSendCommand(cardDrawID, MCI_PLAY, MCI_NOTIFY, (DWORD)(LPVOID)&PlayCardDraweffect);
}




void Title()
{
	cout << endl;
	_setmode(_fileno(stdout), _O_U8TEXT);
	wcout << L"      ██╗  ██╗██╗   ██╗██╗   ██╗███╗   ██╗     ██╗██╗   ██╗███╗   ██╗██╗      █████╗ ███╗   ██╗██████╗" << endl;
	wcout << L"      ██║  ██║╚██╗ ██╔╝██║   ██║████╗  ██║     ██║██║   ██║████╗  ██║██║     ██╔══██╗████╗  ██║██╔══██╗" << endl;
	wcout << L"      ███████║ ╚████╔╝ ██║   ██║██╔██╗ ██║     ██║██║   ██║██╔██╗ ██║██║     ███████║██╔██╗ ██║██║  ██║" << endl;
	wcout << L"      ██╔══██║  ╚██╔╝  ██║   ██║██║╚██╗██║██   ██║██║   ██║██║╚██╗██║██║     ██╔══██║██║╚██╗██║██║  ██║" << endl;
	wcout << L"      ██║  ██║   ██║   ╚██████╔╝██║ ╚████║╚█████╔╝╚██████╔╝██║ ╚████║███████╗██║  ██║██║ ╚████║██████╔╝" << endl;
	wcout << L"      ╚═╝  ╚═╝   ╚═╝    ╚═════╝ ╚═╝  ╚═══╝ ╚════╝  ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝" << endl;
	_setmode(_fileno(stdout), _O_TEXT);
	cout << endl;
}

void SetMap(char Map[HEIGHT][WEIGHT], PPLAYER player) 
{
	player->tPos.x = 1;
	player->tPos.y = 1;
	strcpy_s(Map[0], "111111111111111111111111111");
	strcpy_s(Map[1], "100000000000000000100404001");
	strcpy_s(Map[2], "100000000000000000100303001");
	strcpy_s(Map[3], "100000000000000000100505001");
	strcpy_s(Map[4], "100000000000000000100000001");
	strcpy_s(Map[5], "100000000000000000100404001");
	strcpy_s(Map[6], "100000000000000000100303001");
	strcpy_s(Map[7], "100000000000000000100505001");
	strcpy_s(Map[8], "100000000000000000111111121");
	strcpy_s(Map[9], "100000000000000000000000001");
	strcpy_s(Map[10], "100000000000000000000000001");
	strcpy_s(Map[11], "100000000000000000000000001");
	strcpy_s(Map[12], "100000000000000000000000001");
	strcpy_s(Map[13], "100000000000000000000000001");
	strcpy_s(Map[14], "100000000000000000000000001");
	strcpy_s(Map[15], "100000007070000000000000001");
	strcpy_s(Map[16], "111111111810000000000000001");
	strcpy_s(Map[17], "100000000010000000000000001");
	strcpy_s(Map[18], "100000000010000000000000001");
	strcpy_s(Map[19], "100000000010000000000000001");
	strcpy_s(Map[20], "106060606010000000000000001");
	strcpy_s(Map[21], "100000000010000000000000001");
	strcpy_s(Map[22], "100000000010000000000000001");
	strcpy_s(Map[23], "100000000010000000000000001");
	strcpy_s(Map[24], "111111111111111111111111111");
}

void MapChange(char Map[HEIGHT][WEIGHT], bool onOff)
{
	if (onOff)
	{
		strcpy_s(Map[0], "111111111111111111111111111");
		strcpy_s(Map[1], "100000000000000000100404001");
		strcpy_s(Map[2], "100000000000000000100303001");
		strcpy_s(Map[3], "100000000000000000100505001");
		strcpy_s(Map[4], "100000000000000000100000001");
		strcpy_s(Map[5], "100000000000000000100404001");
		strcpy_s(Map[6], "100000000000000000100303001");
		strcpy_s(Map[7], "100000000000000000100505001");
		strcpy_s(Map[8], "100000000000000000111111121");
		strcpy_s(Map[9], "100000000000000000000000001");
		strcpy_s(Map[10], "100000000000000000000000001");
		strcpy_s(Map[11], "100000000000000000000000001");
		strcpy_s(Map[12], "100000000000000000000000001");
		strcpy_s(Map[13], "100000000000000000000000001");
		strcpy_s(Map[14], "100000000000000000000000001");
		strcpy_s(Map[15], "100000007070000000000000001");
		strcpy_s(Map[16], "111111111110000000000000001");
		strcpy_s(Map[17], "100000000010000000000000001");
		strcpy_s(Map[18], "100000000010000000000000001");
		strcpy_s(Map[19], "100000000010000000000000001");
		strcpy_s(Map[20], "106060606010000000000000001");
		strcpy_s(Map[21], "100000000010000000000000001");
		strcpy_s(Map[22], "100000000010000000000000001");
		strcpy_s(Map[23], "100000000010000000000000001");
		strcpy_s(Map[24], "111111111111111111111111111");
	}
	else
	{
	strcpy_s(Map[0], "111111111111111111111111111");
	strcpy_s(Map[1], "100000000000000000100404001");
	strcpy_s(Map[2], "100000000000000000100303001");
	strcpy_s(Map[3], "100000000000000000100505001");
	strcpy_s(Map[4], "100000000000000000100000001");
	strcpy_s(Map[5], "100000000000000000100404001");
	strcpy_s(Map[6], "100000000000000000100303001");
	strcpy_s(Map[7], "100000000000000000100505001");
	strcpy_s(Map[8], "100000000000000000111111121");
	strcpy_s(Map[9], "100000000000000000000000001");
	strcpy_s(Map[10], "100000000000000000000000001");
	strcpy_s(Map[11], "100000000000000000000000001");
	strcpy_s(Map[12], "100000000000000000000000001");
	strcpy_s(Map[13], "100000000000000000000000001");
	strcpy_s(Map[14], "100000000000000000000000001");
	strcpy_s(Map[15], "100000007070000000000000001");
	strcpy_s(Map[16], "111111111810000000000000001");
	strcpy_s(Map[17], "100000000010000000000000001");
	strcpy_s(Map[18], "100000000010000000000000001");
	strcpy_s(Map[19], "100000000010000000000000001");
	strcpy_s(Map[20], "106060606010000000000000001");
	strcpy_s(Map[21], "100000000010000000000000001");
	strcpy_s(Map[22], "100000000010000000000000001");
	strcpy_s(Map[23], "100000000010000000000000001");
	strcpy_s(Map[24], "111111111111111111111111111");
    }
}

void OutMap(char Map[HEIGHT][WEIGHT], PPLAYER pPlayer)
{
	for (int i = 0; i < HEIGHT; i++)
	{
		cout << "                           ";
		for (int j = 0; j < WEIGHT; j++)
		{
			char index = Map[i][j];
			if (pPlayer->tPos.x == j && pPlayer->tPos.y == i)
				cout << "♥";
			else if (index == '0')
				cout << "  ";
			else if (index == '1')
				cout << "■";
			else if (index == '2')
				cout << "♡";
			else if (index == '3')
				cout << "◆";
			else if (index == '4')
				cout << "▼";
			else if (index == '5')
				cout << "▲";
			else if (index == '6')
				cout << "★";
			else if (index == '7')
				cout << "※";
			else if (index == '8')
				cout << "◆";
		}
		cout << endl;
	}
}

void AllMove(char nextPos, char Map[HEIGHT][WEIGHT], PPLAYER pPlayer, bool* GameOn, GGAME game)
{
	if (nextPos == '2')
	{
		if (pPlayer->money <= 0)
		{
			cout << "안성시에 가서 도움 받으렴..정말 좋은 동네야!" << endl;
			Sleep(1000);
			gotoxy(0, 0);
			system("cls");
			return;
		}
		*GameOn = true;
		game->IndianPoker = true;
	}
	else if (nextPos == '6')
	{
		char userEnter = _getch();
		PlayingCoineffect();
		float random = rand() % 100 + 1;
		if (random > 99)
		{
			pPlayer->money += 500000;
			cout << "찡찡이 떡볶이의 콜팝 떡볶이를 획득하셨습니다." << endl;
			cout << "+500000원 획득" << endl;
		}
		else if (random > 95)
		{
			pPlayer->money += 360000;
			cout << "김현준의 닌텐도 스위치를 획득하셨습니다." << endl;
			cout << "+360000원 획득" << endl;
		}
		else if (random > 90)
		{
			pPlayer->money += 100000;
			cout << "안성 스타필드 아디다스점에서 알바하였습니다." << endl;
			cout << "+100000원 획득" << endl;
		}
		else if (random > 80)
		{
			pPlayer->money += 50000;
			cout << "양진초등학교의 외발 자전거를 훔쳤습니다." << endl;
			cout << "+50000원 획득" << endl;
		}
		else if (random > 70)
		{
			pPlayer->money += 25000;
			cout << "김현준의 유희왕 카드를 획득하셨습니다." << endl;
			cout << "+25000원 획득" << endl;
		}
		else if (random > 55 && pPlayer->money > 20000)
		{
			pPlayer->money -= 20000;
			cout << "양진중학교의 문을 부셨습니다" << endl;
			cout << "-20000원 감소" << endl;
		}
		else if (random > 40 && pPlayer->money > 10000)
		{
			pPlayer->money -= 10000;
			cout << "지나가는 양진초등학교 일진에게 돈을 빼앗겼습니다." << endl;
			cout << "-10000원 감소" << endl;
		}
		else if (random > 30)
		{
			pPlayer->money += 5000;
			cout << "안성 스타필드에서 걸어가다 돈을 주웠습니다." << endl;
			cout << "+5000원 획득" << endl;
		}
		else if (random > 20)
		{
			pPlayer->money += 2500;
			cout << "양진초등학교에서 우유를 훔쳤습니다." << endl;
			cout << "+2500원 획득" << endl;
		}
		else if (random > 10 && pPlayer->money > 1000)
		{
			pPlayer->money -= 1000;
			cout << "샹떼 피시방에서 1000원을 사용하셨습니다." << endl;
			cout << "-1000원 감소" << endl;
		}
		else if (random > 0)
		{
			pPlayer->money += 500;
			cout << "양진 문구의 불량식품을 획득하셨습니다." << endl;
			cout << "+500원 획득" << endl;
		}
		pPlayer->tPos.x = 9;
		pPlayer->tPos.y = 15;
		MapChange(Map, true);
		Enter();
		system("cls");
		return;
	}
	else if (nextPos == '7')
	{
		cout << "근본과 미래가 함께하는 도시, 안성시에 환영합니다~!" << endl;
		Sleep(1000);
		gotoxy(0, 0);
		system("cls");
		return;
	}
}

void MoveUp(char Map[HEIGHT][WEIGHT], PPLAYER pPlayer, bool *GameOn, GGAME game) {
	char nextPos = Map[pPlayer->tPos.y - 1][pPlayer->tPos.x];
	AllMove(nextPos, Map, pPlayer, GameOn, game);
	if (nextPos != '1'&& nextPos!='2' && nextPos != '6'&& nextPos != '7')
		--pPlayer->tPos.y;
}
void MoveDown(char Map[HEIGHT][WEIGHT], PPLAYER pPlayer, bool* GameOn, GGAME game) {
	char nextPos = Map[pPlayer->tPos.y + 1][pPlayer->tPos.x];
	AllMove(nextPos, Map, pPlayer, GameOn, game);
	if (nextPos != '1' && nextPos != '2' && nextPos != '6' && nextPos != '7')
		++pPlayer->tPos.y;
}
void MoveLeft(char Map[HEIGHT][WEIGHT], PPLAYER pPlayer, bool* GameOn, GGAME game) {
	char nextPos = Map[pPlayer->tPos.y][pPlayer->tPos.x-1];
	AllMove(nextPos, Map, pPlayer, GameOn, game);
    if (nextPos != '1' && nextPos != '2' && nextPos != '6' && nextPos != '7')
		--pPlayer->tPos.x;
}
void MoveRight(char Map[HEIGHT][WEIGHT], PPLAYER pPlayer, bool* GameOn, GGAME game) {
	char nextPos = Map[pPlayer->tPos.y][pPlayer->tPos.x+1];
	AllMove(nextPos, Map, pPlayer, GameOn, game);
	if (nextPos != '1' && nextPos != '2' && nextPos != '6' && nextPos != '7')
		++pPlayer->tPos.x;
}

void MovePlayer(char Map[HEIGHT][WEIGHT], PPLAYER pPlayer,bool *GameOn, GGAME game) {

	if (GetAsyncKeyState(VK_UP) & 0x8000) {
		Sleep(100);
		MoveUp(Map, pPlayer, GameOn, game);
	}
	else if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
		Sleep(100);
		MoveDown(Map, pPlayer, GameOn, game);
	}
	else if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
		Sleep(100);
		MoveLeft(Map, pPlayer, GameOn, game);
	}
	else if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
		Sleep(100);
		MoveRight(Map, pPlayer, GameOn, game);
	}
}

void Reset(bool* GameOn)
{
	if (!GameOn)
		return;
	system("cls");
}

void GameChoice(GAME game, PPLAYER pPlayer, int* IndianCardPack, AAI ai)
{
	if (game.IndianPoker)
		InIndianPoker(pPlayer, IndianCardPack, ai);
}

void IndianPokerTitle()
{
	_setmode(_fileno(stdout), _O_U8TEXT);
	wcout << L"             ██╗    ██╗███████╗██╗      ██████╗ ██████╗ ███╗   ███╗███████╗    ████████╗ ██████╗" << endl;
	wcout << L"             ██║    ██║██╔════╝██║     ██╔════╝██╔═══██╗████╗ ████║██╔════╝    ╚══██╔══╝██╔═══██╗" << endl;
	wcout << L"             ██║ █╗ ██║█████╗  ██║     ██║     ██║   ██║██╔████╔██║█████╗         ██║   ██║   ██║" << endl;
	wcout << L"             ██║███╗██║██╔══╝  ██║     ██║     ██║   ██║██║╚██╔╝██║██╔══╝         ██║   ██║   ██║" << endl;
	wcout << L"             ╚███╔███╔╝███████╗███████╗╚██████╗╚██████╔╝██║ ╚═╝ ██║███████╗       ██║   ╚██████╔╝" << endl;
	wcout << L"              ╚══╝╚══╝ ╚══════╝╚══════╝ ╚═════╝ ╚═════╝ ╚═╝     ╚═╝╚══════╝       ╚═╝    ╚═════╝" << endl;
	wcout << L"           ██╗███╗   ██╗██████╗ ██╗ █████╗ ███╗   ██╗    ██████╗  ██████╗ ██╗  ██╗███████╗██████╗" << endl;
	wcout << L"           ██║████╗  ██║██╔══██╗██║██╔══██╗████╗  ██║    ██╔══██╗██╔═══██╗██║ ██╔╝██╔════╝██╔══██╗" << endl;
	wcout << L"           ██║██╔██╗ ██║██║  ██║██║███████║██╔██╗ ██║    ██████╔╝██║   ██║█████╔╝ █████╗  ██████╔╝" << endl;
	wcout << L"           ██║██║╚██╗██║██║  ██║██║██╔══██║██║╚██╗██║    ██╔═══╝ ██║   ██║██╔═██╗ ██╔══╝  ██╔══██╗" << endl;
	wcout << L"           ██║██║ ╚████║██████╔╝██║██║  ██║██║ ╚████║    ██║     ╚██████╔╝██║  ██╗███████╗██║  ██║" << endl;
	wcout << L"           ╚═╝╚═╝  ╚═══╝╚═════╝ ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝    ╚═╝      ╚═════╝ ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝" << endl;
	wcout << L"                                          ....:-==+++**++=-..............::::::::::::::=" << endl;
	wcout << L"                                         ..-=+***##%%%%%%%#+=:..............::.::::::::=" << endl;
	wcout << L"                                        .-+***####%%%%%%%%%%%#=:...................::::=" << endl;
	wcout << L"                                       -+***#####%%%%%%%%%%%%%%*=:.....................=" << endl;
	wcout << L"                                      -**##*##%%%%%%%%%%%%%%%%%%%*:....................=" << endl;
	wcout << L"                                    .-+*#####%####*****####%%%%%%#=:...................=" << endl;
	wcout << L"                                    -**#*###**++=========+++*#%%%%#=...................=" << endl;
	wcout << L"                                   .=****++=-================+*%%%%#=:.................=" << endl;
	wcout << L"                                  .=***+=-:::------===========+#%%%%%+.................=" << endl;
	wcout << L"                                  =+**+=. ..:-----=============+#%%%%#:................=" << endl;
	wcout << L"                                 :+***+:  ..:------============+#%%%%*:................=" << endl;
	wcout << L"                                 -+***=.  ..:---================*%%%%#:................=" << endl;
	wcout << L"                                 -++++-.  ..---=================+#%%%*.................=" << endl;
	wcout << L"                                 :+++=:  .-=============+*****++=*%%#*.  ..............=" << endl;
	wcout << L"                                 .==+=..:=*###**+====+**###**+**++#%#+.   ...-:..::---=*" << endl;
	wcout << L"                                 .===-  .-===++++====+++++=+++++==*%#+======+==****++==+" << endl;
	wcout << L"                                  :--: ...-===++======+++**++=====+#*+++==-:::===++++***" << endl;
	wcout << L"                                   ::..  .-=+++++======+**##**+===-+++++++**++**##**++=+" << endl;
	wcout << L"                                    .:...:-=++====--===============++***++==++#**=*#==-+" << endl;
	wcout << L"                                    .:   .:-===-----===============+++++=====+*++------+" << endl;
	wcout << L"                                    ...  :--------:-=++==========-=====+=--==++++-:---:+" << endl;
	wcout << L"                         ...          .  :-----=-.:--=++++======-===--=----=-=:+=-----=*" << endl;
	wcout << L"                  ..     .:-:..   . :  ...:---=-.::-====++==========--===:-::::-----===*" << endl;
	wcout << L"                  +++=-:-======++++-.    :--=====+++++++++++========-      .:=+=--====+*" << endl;
	wcout << L"                  ++++++++++++=--==:     .:-======++++++============*+=**+===++-======+*" << endl;
	wcout << L"                  -=++*+*****=-:......   .--========+++==+=========+%%+**+++++--==-----+" << endl;
	wcout << L"                  +++**+++++-            .:-===+=++*****++++=======#%%%%++++++======--:+" << endl;
	wcout << L"                  ==++=--------::.....:   .:-=+*++++++++++++======+%%%%%%#+++*-=+==-:--*" << endl;
	wcout << L"                  +++++++++=======-=###   .:==+===++++++==========+%%%%%%%#+**===-=-===+" << endl;
	wcout << L"                  +++++++++++++++**##%#-  .:======+++++=========++#@%%%%%%%%**=-=*+==+=#" << endl;
	wcout << L"                  ++++++++++++#+*##%%%%#. .:-================++++*%@%%%%%%%%%*=:+++=-=+*" << endl;
	wcout << L"                  ++++++++++**=+###%%%%%*...::..:-==========++++*%@@%%%%%%%%%%+:=-:::-=*" << endl;
	wcout << L"                  +++++++++#+=###%%%%%%%%+ .....:-========+++++*#@@@%%%%%%%%%%%#+:   ..=" << endl;
	wcout << L"                  +++++++##==###%%%%%%%%%*:.....-==+++++++++++*#@@@%%%@%%%%%%%%%%=   : =" << endl;
	wcout << L"                  ++++++##=*###%%%%%%%%%%+-:...:-=++++++++++***%@@%%%%%%%%%%%%%%%=   : =" << endl;
	_setmode(_fileno(stdout), _O_TEXT);
}

void RandomChattWin()
{
	float random = rand() % 100 + 1;

	if (random > 90)
	{
		cout << "현준: 요종도~" << endl;
		Enter();
		cout << "현준: 이게 나야나 현준이라고 ㅋㅋ" << endl;
		Enter();
		cout << "현준: 화났어? 이젠 살살해줄게 ㅎㅎ" << endl;
	}
	else if (random > 80)
	{
		cout << "현준: 이게~전데용~? ㅋㅋ" << endl;
		Enter();
		cout << "현준: 기모링~ 기모링~" << endl;
		Enter();
		cout << "현준: 오늘 기분 좋게 잘 수 있겠다 고마워 ㅎㅎ!" << endl;
	}
	else if (random > 70)
	{
		cout << "현준: 쉽다~쉬워~ㅎ" << endl;
		Enter();
		cout << "현준: 너무 재미가 없어서 그런데..조금만 분발해줘..ㅠㅠ" << endl;
		Enter();
		cout << "현준: 화이팅!!" << endl;
	}
	else if (random > 60)
	{
		cout << "현준: 혹시 핵이신가요? 개못핵 ㅋㅋ" << endl;
		Enter();
		cout << "현준: 나도 핵 쓰긴 하는데 개잘핵" << endl;
		Enter();
		cout << "현준: 혹시 몸이 막 brrrrrr 떨리시나연?ㅋㅋ" << endl;
	}
	else if (random > 50)
	{
		cout << "현준: 야무지게 먹어야징~" << endl;
		Enter();
		cout << "현준: 칩 맛있게 먹겠습니다!" << endl;
		Enter();
		cout << "현준: 음~야미~" << endl;
	}
	else if (random > 40)
	{
		cout << "현준: 음...재능이 없으신 것 같네요." << endl;
		Enter();
		cout << "현준: 재능이 없으신 분 같으니 제 재능기부 좀 해드릴까요?" << endl;
		Enter();
		cout << "현준: 응~싫어 ㅋ" << endl;
	}
	else if (random > 30)
	{
		cout << "현준: 힘내세연 ㅠ.ㅠ" << endl;
		Enter();
		cout << "현준: 게임을 못하는 건 죄가 아니에요.." << endl;
		Enter();
		cout << "현준: 근데 니얼굴은 죄임 ㅋ" << endl;
	}
	else if (random > 20)
	{
		cout << "현준: 키키" << endl;
		Enter();
		cout << "현준: 키키" << endl;
		Enter();
		cout << "현준: 키키" << endl;
		Enter();
		cout << "현준: 키키키키" << endl;
	}
	else if (random > 10)
	{
		cout << "현준: 체크메이또..사요나라.." << endl;
		Enter();
		cout << "현준: 이것이 내가 해줄 수 있는 마지막 작별인사다. 후.." << endl;
	}
	else if (random > 0)
	{
		cout << "현준: 나폴레옹이 그런 말을 했죠.." << endl;
		Enter();
		cout << "나폴레옹: 난 죽을 때까지 김현준을 이길 수 없었다." << endl;
		Enter();
		cout << "ㅋ" << endl;
	}
}

void RandomChatlose()
{
	float random = rand() % 100 + 1;

	if (random > 90)
	{
		cout << "현준: 억까판이네;" << endl;
		Enter();
		cout << "현준: 운 좋다?ㅋ" << endl;
		Enter();
		cout << "현준: 후..이제부터 제대로 해야겠다 " << endl;
	}
	else if (random > 80)
	{
		cout << "현준: 하나도 안 당황했어 ㅋ" << endl;
		Enter();
		cout << "현준: 예상했던 범위였고" << endl;
		Enter();
		cout << "현준: 다음턴 부터 조심해라 ㅋ" << endl;
	}
	else if (random > 70)
	{
		cout << "현준: 운빨망겜" << endl;
	}
	else if (random > 60)
	{
		cout << "현준: 에휴.." << endl;
		Enter();
		cout << "현준: 뭘 봐" << endl;
		Enter();
		cout << "현준: 니얼굴이나 보세요" << endl;
	}
	else if (random > 50)
	{
		cout << "현준: 아 컨디션 난조" << endl;
		Enter();
		cout << "현준: 진짜 컨디션만 좋아도 이긴건데" << endl;
	}
	else if (random > 40)
	{
		cout << "현준: 뭘 봐 임마 짜증나게" << endl;
		Enter();
		cout << "현준: 게임에 집중이나 해 오징어같이 생긴 놈아." << endl;
	}
	else if (random > 30)
	{
		cout << "현준: 아 이걸 왜 지는데" << endl;
		Enter();
		cout << "현준: 너 너꺼 봤지 주작하네" << endl;
	}
	else if (random > 20)
	{
		cout << "현준: 아 안해" << endl;
		Enter();
		cout << "현준: 억까 원툴이네 진짜" << endl;
		Enter();
		cout << "현준: 인정 못합니다 ㅅㄱㅇ" << endl;
	}
	else if (random > 10)
	{
		cout << "현준: 에휴..안 풀리네" << endl;
		Enter();
		cout << "현준: 난 그 해산물이 그렇게 싫더라" << endl;
		Enter();
		cout << "현준: 니얼[굴]" << endl;
	}
	else if (random > 0)
	{
		cout << "현준: 웃어라.." << endl;
		Enter();
		cout << "현준: 이게 너의 마지막 승리니까 ㅋ" << endl;
		Enter();
	}
}

void RandomChatRaise()
{
	float random = rand() % 100 + 1;

	if (random > 90)
	{
		cout << "현준: 야 빼라" << endl;
		Enter();
		cout << "현준: 경고했다.." << endl;
	}
	else if (random > 80)
	{
		cout << "현준: 마지막 경고다. 서렌 쳐라" << endl;
	}
	else if (random > 70)
	{
		cout << "현준: 드루와" << endl;
		Enter();
		cout << "현준: 쫄림말고 ㅋㅋ" << endl;
		Enter();
		cout << "현준: 에이 이렇게까지 말했는데 설마 빼?ㅋㅋ" << endl;
	}
	else if (random > 60)
	{
		cout << "현준: 들어오세요~" << endl;
		Enter();
		cout << "현준: 게임 빠르게 갑시다 ㅋ" << endl;
		Enter();
		cout << "현준: 질 것 같으면 말고 ㅋ" << endl;
	}
	else if (random > 50)
	{
		cout << "현준: 니얼굴" << endl;
	}
	else if (random > 40)
	{
		cout << "현준: 너 1 나옴 난 분명 말했다 ㅋ" << endl;
		Enter();
		cout << "현준: 믿는 게 좋을 거야 ㅋㅋ" << endl;
	}
	else if (random > 30)
	{
		cout << "현준: 힌트를 알려주자면 너 숫자 3보다 작다" << endl;
		Enter();
		cout << "현준: 아닐 수도 있고 ㅋ" << endl;
	}
	else if (random > 20)
	{
		cout << "현준: 나같으면 서렌 칠 듯" << endl;
	}
	else if (random > 10)
	{
		cout << "현준: 와 님 10임" << endl;
		Enter();
		cout << "현준: 올인 하셈" << endl;
	}
	else if (random > 0)
	{
		cout << "현준: 키키" << endl;
	}
}

void RandomChatCall()
{
	float random = rand() % 100 + 1;

	if (random > 90)
	{
		cout << "현준: 대결이다.." << endl;
		Enter();
		cout << "현준: 애송이.ㅋ" << endl;
		Enter();
		cout << "현준: 난 초코송이" << endl;
	}
	else if (random > 80)
	{
		cout << "현준: 탑으로 와라" << endl;
	}
	else if (random > 70)
	{
		cout << "현준: 진실의 방으로" << endl;
	}
	else if (random > 60)
	{
		cout << "현준: 슈우우우ㅜ웃" << endl;
	}
	else if (random > 50)
	{
		cout << "현준: 들어와라 오징어같이 생긴 놈아" << endl;
	}
	else if (random > 40)
	{
		cout << "현준: 드 갑니다잉" << endl;
	}
	else if (random > 30)
	{
		cout << "현준: GO" << endl;
	}
	else if (random > 20)
	{
		cout << "현준: CALL" << endl;
	}
	else if (random > 10)
	{
		cout << "현준: CALL라 먹고 싶다." << endl;
	}
	else if (random > 0)
	{
		cout << "현준: 전화 주세요." << endl;
	}
}

void RandomChatFold()
{
	float random = rand() % 100 + 1;

	if (random > 90)
	{
		cout << "현준: 일보 전진을 위한 2보 후퇴일 뿐.." << endl;
		Enter();
		cout << "현준: 그 이상 그 이하의 의미는 없다." << endl;
	}
	else if (random > 80)
	{
		cout << "현준: 작전상 패배" << endl;
	}
	else if (random > 70)
	{
		cout << "현준: FOLD" << endl;
	}
	else if (random > 60)
	{
		cout << "현준: FOLD" << endl;
		Enter();
		cout << "현준: 뭘 봐" << endl;
		Enter();
		cout << "현준: 니얼굴이나 봐라" << endl;
	}
	else if (random > 50)
	{
		cout << "현준: 이거 져도 이겨 ㅋ" << endl;
	}
	else if (random > 40)
	{
		cout << "현준: 한 번 져줄게~" << endl;
	}
	else if (random > 30)
	{
		cout << "현준: GG" << endl;
	}
	else if (random > 20)
	{
		cout << "현준: 운 좋다?ㅋ FOLD" << endl;
	}
	else if (random > 10)
	{
		cout << "현준: 한 번 봐드릴게요 ㅋ" << endl;
	}
	else if (random > 0)
	{
		cout << "현준: 웃어라.." << endl;
		Enter();
		cout << "현준: 이게 너의 마지막 승리니까 ㅋ" << endl;
		Enter();
	}
}



void BettingMoney(PPLAYER pPlayer, int &bettingMoney)
{
	cout << "인디언 포커에 얼마를 베팅하시겠습니까?" << endl;
	cout << "입력: ";
	cin >> bettingMoney;
	if (pPlayer->money < bettingMoney||bettingMoney<0)
	{
		while (pPlayer->money < bettingMoney || bettingMoney < 0)
		{
			cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
			cout << "입력: ";
			cin >> bettingMoney;
		}
	}
}

void CountUP(int& count, int* indianCardPack)
{
	if (count >= 18)
	{
		Shuffle(indianCardPack, 0, 20);
		count = 0;
	}
	else
	{
		count += 2;
	}
}

bool GameEnd(PPLAYER pPlayer, AAI ai, int& bettingMoney)
{
	if (ai->chips > 0&& pPlayer->chips > 0)
		return false;
	_setmode(_fileno(stdout), _O_U8TEXT);
wcout << L"               	                                                   .::::=---::-:--:....  .   -"<< endl;
wcout << L"                                                            ....:-==+++*#*##*+#****++-=-:... :"<< endl;
wcout << L"                                                          ..:--++**######%%%####%%%#####+=::.-"<< endl;
wcout << L"                                                        ..:-=+*#*###%%%%%%%%%%%%%%%%%%%%##**=+"<< endl;
wcout << L"                                                      ..-=++**#####%%%%%%%%%%%%%%%%%%%%%%%%%##"<< endl;
wcout << L"                                                     .::=***#####%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<< endl;
wcout << L"                            . .                    ..-=++**########*****+++***###%%%%%%%%%%%%%"<< endl;
wcout << L"                               .                  .:-++**###*+=-:::::::::::::----==+*#%%%%%%%%"<< endl;
wcout << L"                             ......              .:-+*****+-:.....:::::::::::::::::::-=+#%%%%%"<< endl;
wcout << L"                                                 .-++***=:........:::::::::::::::::::::--=*%%%"<< endl;
wcout << L"                                                .:-=**=:..........:::::::::::::::::::::----=+#"<< endl;
wcout << L"                                               .-+**+:............:::::::::::::::::::::------="<< endl;
wcout << L"                                               .-=+=......   ......::::::::::::::::::::------="<< endl;
wcout << L"                                              :=++-....... ........::::::::::::::::::--------="<< endl;
wcout << L"                                            .:=++-:.:::::::::::::::.::::::::-----------------="<< endl;
wcout << L"                                           .:+++=--=+++***+++==--:::::::-----=========-------="<< endl;
wcout << L"                ...                       .-+++===++**#*###****+=--:------==+++*********++===+"<< endl;
wcout << L"                :::.                     .--::-:::-===++*******+==-----====+++****************"<< endl;
wcout << L"                ---                    .::. .=-::-------==+++++++==========++++++*+*+******++*"<< endl;
wcout << L"                --.                   .:   .-=---::::::--===++++=--=============+++==++++**+**"<< endl;
wcout << L"                =-:::..... .        ::.    :=----:-------===+===-:::::-=============-====++++*"<< endl;
wcout << L"                --::::::::::::.     :-:   .==::-----==========--::.::-=========--------======+"<< endl;
wcout << L"                ===-----:::::--:    .:=:  :=:::-===++++++*+==-:::..::--+========-=-==========+"<< endl;
wcout << L"                +===+=======-----   ...-: :-:-=+****###***=:--.::::::-==-====++++++==========+"<< endl;
wcout << L"                =====-=-=========:  ..  :-:.::::::::::::::.:=--:::::--==----=+*****++++++++==+"<< endl;
wcout << L"                ..:.....:=====+++:   :. .::...............:++-:...::-==-:------==+*####**++++*"<< endl;
wcout << L"                ..........:-=====-   ....::............:::=--.....::-=+*=---------==++*####***"<< endl;
wcout << L"                ::::::.....:====+=.  .-:..:.......::::---=:.. ..:::::--=+---::::::----====+++*"<< endl;
wcout << L"                ------------===+++: .::-:.:::::::::---=+-.......:::::-==++=--:::::::::::::---="<< endl;
wcout << L"                ====---=======+++=-.=::.:--::::::--==+=::::::::---------=++==----::::::::::::="<< endl;
wcout << L"                ===---+++++==+++:.:==:::::--=====++++-:--=---========-----+*+=---------------="<< endl;
wcout << L"                ::::::=++====++=:-:-+-::::----=====++==+**++=====+++===--==+++++==--------===+"<< endl;
wcout << L"                :::::-----====+=:=++*=::::---====++==+*###%#***+**###*+====**=====++++++==---="<< endl;
wcout << L"                ---==+=========+-:+**+------==========++==+**##########*++***+=========------="<< endl;
wcout << L"                ++++=--========+*-:+**=----====++===-:::::::-===+++*******+++++==========----="<< endl;
wcout << L"                +==---------====++=:-**=--===+++==---==+++=========++++++++=++++=============+"<< endl;
wcout << L"                ---------=======+++*=-*+====++++=-=++**********++======++====+++=============+"<< endl;
wcout << L"                ==------=========++++***+===+++=-+***####*********++===++====+++=============+"<< endl;
wcout << L"                -=----::--=======+******+===++=-+**####**+++***###**++=++++==++==============+"<< endl;
wcout << L"                ----::::::-======+---+**+======+###%%%%@%####***####**+=+++++++==============+"<< endl;
wcout << L"                ------:::::-=====*--=--++=---===+++*%%@%%%%%%%%%%%%##**+==+++++==============+"<< endl;
wcout << L"                ----:---:::======+=-=--=+==--:::----=+*##%%%%%%%%%@%##**+=++++++=============+"<< endl;
wcout << L"                --=-:::--========++:-=+=++=-::::-=-----=-==+****###%%%%#*+++++++=============+"<< endl;
wcout << L"                ---:::::---=======*--**=*#+-::::-=======---=====++++**##**+++++==============+"<< endl;
wcout << L"                --:::::::---======*=-****#+-::::-=++**++++++++++++++++++++++++===============+"<< endl;
wcout << L"                :----=============++-***+**=-::--=+++*******+++++============================+"<< endl;
wcout << L"                ==================+*+**+++*=-:----==+++*++++++++++===========================+"<< endl;
wcout << L"                ============----===+**++++*+-::------==+++++++++=======++====================+"<< endl;
wcout << L"                =====--:::-:::---===++++++++-:::-----:--==============-======================+"<< endl;
wcout << L"                =-::--::--:::::-====++++++++-:::::::-::------=======--------=================+"<< endl;
wcout << L"                :--::::::----========+++++++=:::::::::---::----------=-----==================+"<< endl;
wcout << L"                ::----=-==============+++++++::::::::------------------======================+"<< endl;
wcout << L"                ========================++==*-::::::::---:------::-----==-===================+"<< endl;
wcout << L"                =======================+++==++-::::------:------:------======================+"<< endl;
wcout << L"                ========================+++==+=---------------:------========================+"<< endl;
wcout << L"                =========------========+++++=**+===---------------===========================+"<< endl;
wcout << L"                ::==----:::----=========++++=+#*+============================================+"<< endl;
_setmode(_fileno(stdout), _O_TEXT);

	if (ai->chips <= 0)
	{
		cout << endl;
		cout << "PLAYER 승리!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		pPlayer->money += bettingMoney * 2;
		Enter();
		system("cls");
		return true;
	}
	else if (pPlayer->chips <= 0)
	{
		cout << endl;
		cout << "현준 승리!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		pPlayer->money -= bettingMoney;
		Enter();
		system("cls");
		return true;
	}
}

void RoundEnd(bool &initAttack, bool &initAttackTurn, int &userBettingChip, int &aiBettingChip, int& beforeRaise, int& beforeChip, int& count, int* indianCardPack,bool &roundEnd)
{
	userBettingChip = aiBettingChip = 1;

	roundEnd = true;

	beforeChip = beforeRaise = 0;

	initAttack = true;

	if (initAttackTurn==true)
		initAttackTurn = false;
	else
		initAttackTurn = true;

	CountUP(count, indianCardPack);
}

int Match(int userCard, int aiCard)
{
	if (aiCard == userCard)
		return 0;
	else if (aiCard > userCard)
		return -1;
	else
		return 1;
}

void TurnEnd(bool &aiTurn)
{
	if (aiTurn==true)
		aiTurn = false;
	else
		aiTurn = true;
}

void UserInterface(PPLAYER pPlayer, AAI ai, int bettingChip, int aiBettingChip, int bettingMoney)
{
	cout << "--------------------------------------------------------------------------------------------------------------";
	cout << "보유한 칩: " << pPlayer->chips << endl;
	cout << "베팅한 칩: " << bettingChip << endl;
	cout << "AI가 보유한 칩: " << ai->chips << endl;
	cout << "AI가 베팅한 칩: " << aiBettingChip << endl;
	if (pPlayer->money - bettingMoney <= 0)
		cout << "패배시 보유한 돈: " << "파산" << endl;
	else
		cout << "패배시 보유한 돈: " << pPlayer->money - bettingMoney << endl;
	cout << "--------------------------------------------------------------------------------------------------------------";
}

void Enter()
{
	char userEnter = _getch();
	while (userEnter)
	{
		if ((int)userEnter == 13)
			break;
		userEnter = _getch();
	}
}

void Call(bool roundEnd,int result, int &aiCard, int &userCard, int& bettingMoney, int& bettingChip, int& aiBettingChip, int &count, int* indianCardPack, PPLAYER player, AAI ai)
{
	if (result == 0)
	{
		PlayingCardeffect();
		Sleep(800);
		system("cls");
		CardPrint(indianCardPack, count, true);
		UserInterface(player, ai, bettingChip, aiBettingChip, bettingMoney);
		cout << "딜러: 두 사람이 똑같은 카드였어서 다음 카드로 됩니다." << endl;
		Enter();

		while (aiCard == userCard)
		{
			CountUP(count, indianCardPack);
			userCard = indianCardPack[count];
			aiCard = indianCardPack[count + 1];
		}

		if (aiCard < userCard)
		{
			PlayingCardeffect();
			Sleep(800);
			system("cls");
			CardPrint(indianCardPack, count, true);
			UserInterface(player, ai, bettingChip, aiBettingChip, bettingMoney);
			Enter();
			cout << "딜러: PLAYER 승리" << endl;
			Enter();
			RandomChatlose();
			player->chips += aiBettingChip;
			ai->chips -= aiBettingChip;
		}
		else
		{
			PlayingCardeffect();
			Sleep(800);
			system("cls");
			CardPrint(indianCardPack, count, true);
			UserInterface(player, ai, bettingChip, aiBettingChip, bettingMoney);
			Enter();
			cout << "딜러: 현준 승리" << endl;
			Enter();
			RandomChattWin();
			player->chips -= bettingChip;
			ai->chips += bettingChip;
		}
	}
	else if (result == -1)
	{
		PlayingCardeffect();
		Sleep(800);
		system("cls");
		CardPrint(indianCardPack, count, true);
		UserInterface(player, ai, bettingChip, aiBettingChip, bettingMoney);
		Enter();
		cout << "딜러: 현준 승리" << endl;
		Enter();
		RandomChattWin();

		player->chips -= bettingChip;
		ai->chips += bettingChip;
	}
	else if (result == 1)
	{
		PlayingCardeffect();
		Sleep(800);
		system("cls");
		CardPrint(indianCardPack, count, true);
		UserInterface(player, ai, bettingChip, aiBettingChip, bettingMoney);
		Enter();
		cout << "딜러: PLAYER 승리" << endl;
		Enter();
		RandomChatlose();

		player->chips += aiBettingChip;
		ai->chips -= aiBettingChip;
	}
}

void UserTurn(bool &aiTurn, bool &initAttackTurn, bool &initAttack, bool& roundEnd, int &bettingMoney,int &bettingChip, int &aiBettingChip,int &beforeRaise, int &beforeChip, int aiCard, int userCard, int &count,int* indianCardPack, PPLAYER player, AAI ai)
{
	//행동 선택
	int choice;
	int minRaise = beforeRaise + 1;
	int aiCurChip = ai->chips - aiBettingChip;
	int playerCurChip = player->chips - bettingChip;

	if (playerCurChip == 0)
	{
		cout << "할 수 있는 행동이 없어 턴 종료하겠습니다." << endl;
		initAttack = false;
	}
	else
	{
		cout << "1. RAISE" << endl;
		cout << "2. CALL" << endl;
		cout << "3. FOLD" << endl;
		cout << "행동 선택: ";
		cin >> choice;

		while (true)
		{
			if (choice >= 1 && choice <= 3)
			{
				if (aiCurChip <= 0 && choice == 1)
					cout << "상대가 칩이 적어 RAISE는 불가능합니다." << endl;
				else if (playerCurChip <= beforeRaise && choice == 1)
					cout << "칩이 부족합니다." << endl;
				else if (initAttackTurn && initAttack && choice == 2 && aiCurChip>0)
					cout << "첫 선택은 CALL이 안됩니다." << endl;
				else
					break;
			}
			cout << "올바른 입력을 하세요." << endl;
			cout << "행동 선택: ";
			cin >> choice;
		}
		initAttack = false;
		//CALL 했을 때 매치
		int result = Match(userCard, aiCard);

		switch (choice)
		{
		case 1:
			int addBetting;
			cout << "추가할 칩을 입력하시오: ";
			cin >> addBetting;
			if (beforeRaise > addBetting || addBetting > playerCurChip || addBetting <= 0 || aiCurChip < addBetting)
			{
				while (true)
				{
					if (aiCurChip < minRaise)
					{
						cout << "최대 " << aiCurChip << " 개까지 베팅하실 수 있습니다." << endl;
						cin >> addBetting;
						if (0 < addBetting && addBetting <= aiCurChip)
							break;
					}
					else if (aiCurChip > playerCurChip)
					{
						cout << "최소 " << minRaise << " 개부터 베팅하셔야 합니다." << endl;
						cout << "최대 " << playerCurChip << " 개까지 베팅하실 수 있습니다." << endl;
						cin >> addBetting;
						if (minRaise <= addBetting && addBetting <= playerCurChip)
							break;
					}
					else
					{
						cout << "최소 " << minRaise << " 개부터 베팅하셔야 합니다." << endl;
						cout << "최대 " << aiCurChip << " 개까지 베팅하실 수 있습니다." << endl;
						cin >> addBetting;
						if (minRaise <= addBetting && addBetting <= aiCurChip)
							break;
					}
				}
			}
			beforeChip = addBetting;
			beforeRaise = addBetting - beforeRaise;
			bettingChip += addBetting;
			break;
		case 2:
			bettingChip += beforeChip;
			//카드 출력 해야함
			RandomChatCall();
			Enter();
			Call(roundEnd, result, aiCard, userCard, bettingMoney, bettingChip, aiBettingChip, count, indianCardPack, player, ai);
			Enter();
			RoundEnd(initAttack, initAttackTurn, bettingChip, aiBettingChip, beforeChip, beforeRaise, count, indianCardPack, roundEnd);
			break;
		case 3:
			PlayingCardeffect();
			Sleep(800);
			system("cls");
			CardPrint(indianCardPack, count, true);
			UserInterface(player, ai, bettingChip, aiBettingChip, bettingMoney);
			Enter();
			cout << "딜러: 현준 승리" << endl;
			if (userCard == 10)
			{
				cout << "딜러: 카드가 10인 상태에서 FOLD를 하여 칩 10개를 추가로 잃게 됩니다." << endl;
				ai->chips += 10;
				player->chips -= 10;
			}
			Enter();
			RandomChattWin();
			player->chips -= bettingChip;
			ai->chips += bettingChip;
			Enter();
			RoundEnd(initAttack, initAttackTurn, bettingChip, aiBettingChip, beforeChip, beforeRaise, count, indianCardPack, roundEnd);
			break;
		}
	}
}

void AIRandomChoice(bool& initAttack, bool& initAttackTurn, bool& roundEnd, int &bettingMoney,int randPer, int randBetting, int &beforeChip, int &beforeRaise, int result, int& aiCard, int& userCard, int& bettingChip, int& aiBettingChip, int& count, int* indianCardPack, int high, int low, PPLAYER player,AAI ai)
{
	int minRaise = beforeRaise + 1;
	int aiCurChip = ai->chips - aiBettingChip;
	int playerCurChip = player->chips - bettingChip;

	if (playerCurChip <= 0)
	{
		if (randPer > low)
		{
			RandomChatCall();
			Enter();
			aiBettingChip += beforeChip;
			Call(roundEnd, result, aiCard, userCard, bettingMoney, bettingChip, aiBettingChip, count, indianCardPack, player, ai);
			RoundEnd(initAttack, initAttackTurn, bettingChip, aiBettingChip, beforeChip, beforeRaise, count, indianCardPack, roundEnd);
		}
		else
		{
			PlayingCardeffect();
			Sleep(800);
			system("cls");
			CardPrint(indianCardPack, count, true);
			UserInterface(player, ai, bettingChip, aiBettingChip, bettingMoney);
			RandomChatFold();
			Enter();
			cout << "딜러: PLAYER 승리" << endl;
			Enter();
			if (aiCard == 10)
			{
				cout << "딜러: 카드가 10인 상태에서 FOLD를 하여 칩 10개를 추가로 잃게 됩니다." << endl;
				Enter();
				cout << "현준: ?" << endl;
				ai->chips -= 10;
				player->chips += 10;
			}
			//카드 출력도 해야함
			player->chips += aiBettingChip;
			ai->chips -= aiBettingChip;
			RoundEnd(initAttack, initAttackTurn, bettingChip, aiBettingChip, beforeChip, beforeRaise, count, indianCardPack, roundEnd);
		}
	}
	else
	{
		if (randPer > high)
		{
			if (aiCurChip >= minRaise && randBetting < aiCurChip)
			{
				if (playerCurChip < randBetting)
					randBetting = playerCurChip;
				RandomChatRaise();
				Enter();
				cout << "RAISE: " << randBetting;
				beforeChip = randBetting;
				beforeRaise = randBetting - beforeRaise;
				aiBettingChip += randBetting;
			}
			else
			{
				RandomChatCall();
				Enter();
				aiBettingChip += beforeChip;
				Call(roundEnd, result, aiCard, userCard, bettingMoney, bettingChip, aiBettingChip, count, indianCardPack, player, ai);
				RoundEnd(initAttack, initAttackTurn, bettingChip, aiBettingChip, beforeChip, beforeRaise, count, indianCardPack, roundEnd);
			}
		}
		else if (randPer > low)
		{
			RandomChatCall();
			Enter();
			aiBettingChip += beforeChip;
			Call(roundEnd, result, aiCard, userCard, bettingMoney, bettingChip, aiBettingChip, count, indianCardPack, player, ai);
			RoundEnd(initAttack, initAttackTurn, bettingChip, aiBettingChip, beforeChip, beforeRaise, count, indianCardPack, roundEnd);
		}
		else
		{
			RandomChatFold();
			Enter();
			PlayingCardeffect();
			Sleep(800);
			system("cls");
			CardPrint(indianCardPack, count, true);
			UserInterface(player, ai, bettingChip, aiBettingChip, bettingMoney);
			cout << "딜러: PLAYER 승리" << endl;
			Enter();
			//임시 출력
			if (aiCard == 10)
			{
				cout << "딜러: 카드가 10인 상태에서 FOLD를 하여 칩 10개를 추가로 잃게 됩니다." << endl;
				Enter();
				cout << "현준: ?" << endl;
				ai->chips -= 10;
				player->chips += 10;
			}
			//카드 출력도 해야함
			player->chips += aiBettingChip;
			ai->chips -= aiBettingChip;
			RoundEnd(initAttack, initAttackTurn, bettingChip, aiBettingChip, beforeChip, beforeRaise, count, indianCardPack, roundEnd);
		}
	}
}

void AITurn(bool& aiTurn, bool& initAttackTurn, bool& initAttack, bool& roundEnd, int &bettingMoney,int &bettingChip, int &aiBettingChip, int& beforeRaise, int& beforeChip, int aiCard, int userCard, int& count, int* indianCardPack, PPLAYER player, AAI ai)
{
	
	float winCard = 0;
	float loseCard = 0;
	float allCard = 0;

	int minRaise = beforeRaise + 1;
	int aiCurChip = ai->chips - aiBettingChip;
	int playerCurChip = player->chips - bettingChip;

	for(int i = count+1; i < 20; i++)
	{
		allCard++;
		if (indianCardPack[count] <= indianCardPack[i])
			winCard++;
		else if (indianCardPack[count] > indianCardPack[i])
			loseCard++;
	}

	int randBetting = beforeRaise + rand() % 3 + 1;

	int result = Match(userCard, aiCard);
	
	float winPer = winCard / allCard;

	int randPer = rand() % 100;


	if (initAttack)
	{
		initAttack = false;

		if (aiCurChip == 0)
		{
			cout << "딜러: 현준님이 할 수 있는 행동이 없어 턴 종료하겠습니다." << endl;
			Enter();
		}
		else if (playerCurChip == 0)
		{
			RandomChatCall();
			Enter();
			aiBettingChip += beforeChip;
			Call(roundEnd, result, aiCard, userCard, bettingMoney, bettingChip, aiBettingChip, count, indianCardPack, player, ai);
			RoundEnd(initAttack, initAttackTurn, bettingChip, aiBettingChip, beforeChip, beforeRaise, count, indianCardPack, roundEnd);
		}
		else if ((winPer > 0.2f||loseCard<3))
		{
			if (aiCurChip < randBetting)
				randBetting = 1;

			if (playerCurChip < randBetting)
				randBetting = playerCurChip;
			RandomChatRaise();
			Enter();
			cout << "RAISE: " << randBetting;
			beforeChip = randBetting;
			beforeRaise = randBetting - beforeRaise;
			aiBettingChip += randBetting;
		}
		else
		{
			RandomChatFold();
			Enter();
			PlayingCardeffect();
			Sleep(800);
			system("cls");
			CardPrint(indianCardPack, count, true);
			UserInterface(player, ai, bettingChip, aiBettingChip, bettingMoney);
			Enter();
			cout << "딜러: PLAYER 승리" << endl;
			if (aiCard == 10)
			{
				cout << "딜러: 카드가 10인 상태에서 FOLD를 하여 칩 10개를 추가로 잃게 됩니다." << endl;
				Enter();
				cout << "현준: ?" << endl;
				ai->chips -= 10;
				player->chips += 10;
			}
			//카드 출력도 해야함
			player->chips += aiBettingChip;
			ai->chips -= aiBettingChip;
			RoundEnd(initAttack, initAttackTurn, bettingChip, aiBettingChip, beforeChip, beforeRaise, count, indianCardPack, roundEnd);
		}
	}
	else
	{
		if (winPer > 0.9f)
			AIRandomChoice(initAttack, initAttackTurn, roundEnd, bettingMoney, randPer, randBetting, beforeChip, beforeRaise, result, aiCard, userCard, bettingChip, aiBettingChip, count, indianCardPack, 20, 0, player, ai);
		else if (winPer > 0.8f)
			AIRandomChoice(initAttack, initAttackTurn, roundEnd, bettingMoney, randPer, randBetting, beforeChip, beforeRaise, result, aiCard, userCard, bettingChip, aiBettingChip, count, indianCardPack, 40, 10, player, ai);
		else if (winPer > 0.7f)
			AIRandomChoice(initAttack, initAttackTurn, roundEnd, bettingMoney, randPer, randBetting, beforeChip, beforeRaise, result, aiCard, userCard, bettingChip, aiBettingChip, count, indianCardPack, 40, 15, player, ai);
		else if (winPer > 0.6f)
			AIRandomChoice(initAttack, initAttackTurn, roundEnd, bettingMoney, randPer, randBetting, beforeChip, beforeRaise, result, aiCard, userCard, bettingChip, aiBettingChip, count, indianCardPack, 50, 20, player, ai);
		else if (winPer > 0.5f)
			AIRandomChoice(initAttack, initAttackTurn, roundEnd, bettingMoney, randPer, randBetting, beforeChip, beforeRaise, result, aiCard, userCard, bettingChip, aiBettingChip, count, indianCardPack, 55, 25, player, ai);
		else if (winPer > 0.4f)
			AIRandomChoice(initAttack, initAttackTurn, roundEnd, bettingMoney, randPer, randBetting, beforeChip, beforeRaise, result, aiCard, userCard, bettingChip, aiBettingChip, count, indianCardPack, 60, 30, player, ai);
		else if (winPer > 0.3f)
			AIRandomChoice(initAttack, initAttackTurn, roundEnd, bettingMoney, randPer, randBetting, beforeChip, beforeRaise, result, aiCard, userCard, bettingChip, aiBettingChip, count, indianCardPack, 70, 40, player, ai);
		else if (winPer > 0.3f)
			AIRandomChoice(initAttack, initAttackTurn, roundEnd, bettingMoney, randPer, randBetting, beforeChip, beforeRaise, result, aiCard, userCard, bettingChip, aiBettingChip, count, indianCardPack, 80, 50, player, ai);
		else if (winPer > 0.1f)
			AIRandomChoice(initAttack, initAttackTurn, roundEnd, bettingMoney, randPer, randBetting, beforeChip, beforeRaise, result, aiCard, userCard, bettingChip, aiBettingChip, count, indianCardPack, 80, 80, player, ai);
		else
			AIRandomChoice(initAttack, initAttackTurn, roundEnd, bettingMoney, randPer, randBetting, beforeChip, beforeRaise, result, aiCard, userCard, bettingChip, aiBettingChip, count, indianCardPack, 50, 50, player, ai);
	}

	Enter();
}

void InIndianPoker(PPLAYER pPlayer,int * IndianCardPack, AAI ai)
{

	//기본세팅
	int aiBettingChip = 1;
	int bettingChip = 1;

	int bettingMoney;
	int count = 0;

	int beforeRaise = 0;
	int beforeChip = 0;

	bool initAttack = true;
	bool initAttackTurn = true;
	bool aiTurn = false;
	bool roundEnd = false;

	int aiCard = IndianCardPack[count];
	int userCard = IndianCardPack[count + 1];

	pPlayer->chips = 20;
	ai->chips = 20;

	//인디언 포커 타이틀 출력
	IndianPokerTitle();
	//돈 베팅
	BettingMoney(pPlayer,bettingMoney);
	system("cls");
	//카드 섞기
	Shuffle(IndianCardPack, 0, 20);


	while (true)
	{
		roundEnd = false;

		//게임 종료 확인
		if (GameEnd(pPlayer,ai,bettingMoney))
			break;
		
		//카드 출력
		CardPrint(IndianCardPack, count, roundEnd);

		userCard = IndianCardPack[count];
		aiCard = IndianCardPack[count + 1];

		UserInterface(pPlayer,ai,bettingChip,aiBettingChip,bettingMoney);


		if (!initAttack)
		{
			if (!aiTurn)
			{
				UserTurn(aiTurn, initAttackTurn, initAttack, roundEnd, bettingMoney,bettingChip, aiBettingChip, beforeRaise, beforeChip, aiCard, userCard, count, IndianCardPack, pPlayer, ai);
			}
			else
			{
				AITurn(aiTurn, initAttackTurn, initAttack, roundEnd, bettingMoney ,bettingChip, aiBettingChip, beforeRaise, beforeChip, aiCard, userCard, count, IndianCardPack, pPlayer, ai);
			}
		}
		else
		{
			if (initAttackTurn)
			{
				UserTurn(aiTurn, initAttackTurn, initAttack, roundEnd, bettingMoney, bettingChip, aiBettingChip, beforeRaise, beforeChip, aiCard, userCard, count, IndianCardPack, pPlayer, ai);
				aiTurn = false;
			}
			else
			{
				AITurn(aiTurn, initAttackTurn, initAttack, roundEnd, bettingMoney, bettingChip, aiBettingChip, beforeRaise, beforeChip, aiCard, userCard, count, IndianCardPack, pPlayer, ai);
				aiTurn = true;
			}
		}
		
		TurnEnd(aiTurn);			

		system("cls");
	}
}

void Swap(int* arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void Shuffle(int* arr,int start,int end)
{
	for (int i = start; i < end; i++)
	{
		int r = rand() % (i + 1);
		Swap(arr, r, i);
	}
}

void CardPrint(int* IndianCardPack,int count, bool roundEnd)
{

	cout <<"HYUNJUN"<< endl;
	cout << "                                             ";
	cout << "┌───────────────┐" << endl;
	cout << "                                             ";
	if(IndianCardPack[count+1]!=10)
		cout << "│ " << IndianCardPack[count+1] << "             │" << endl;
	else
		cout << "│ " << IndianCardPack[count+1] << "            │" << endl;
	cout << "                                             ";
	cout << "│               │" << endl;
	cout << "                                             ";
	cout << "│               │" << endl;
	cout << "                                             ";
	cout << "│               │" << endl;
	cout << "                                             ";
	cout << "│       ♠      │" << endl;
	cout << "                                             ";
	cout << "│               │" << endl;
	cout << "                                             ";
	cout << "│               │" << endl;
	cout << "                                             ";
	cout << "│               │" << endl;
	cout << "                                             ";
	if (IndianCardPack[count+1]!= 10)
		cout << "│              " << IndianCardPack[count+1] << "│" << endl;
	else
		cout << "│             " << IndianCardPack[count+1] << "│" << endl;
	cout << "                                             ";
	cout << "└───────────────┘" << endl;
	cout << endl;
	cout <<"PLAYER" << endl;
	if (!roundEnd)
	{
		cout << "                                             ";
		cout << "┌───────────────┐" << endl;
		cout << "                                             ";
		cout << "│▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒│" << endl;
		cout << "                                             ";
		cout << "│▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒│" << endl;
		cout << "                                             ";
		cout << "│▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒│" << endl;
		cout << "                                             ";
		cout << "│▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒│" << endl;
		cout << "                                             ";
		cout << "│▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒│" << endl;
		cout << "                                             ";
		cout << "│▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒│" << endl;
		cout << "                                             ";
		cout << "│▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒│" << endl;
		cout << "                                             ";
		cout << "│▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒│" << endl;
		cout << "                                             ";
		cout << "│▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒│" << endl;
		cout << "                                             ";
		cout << "└───────────────┘" << endl;
	}
	else
	{
		cout << "                                             ";
		cout << "┌───────────────┐" << endl;
		cout << "                                             ";
		if (IndianCardPack[count] != 10)
			cout << "│ " << IndianCardPack[count] << "             │" << endl;
		else
			cout << "│ " << IndianCardPack[count] << "            │" << endl;
		cout << "                                             ";
		cout << "│               │" << endl;
		cout << "                                             ";
		cout << "│               │" << endl;
		cout << "                                             ";
		cout << "│               │" << endl;
		cout << "                                             ";
		cout << "│       ♠      │" << endl;
		cout << "                                             ";
		cout << "│               │" << endl;
		cout << "                                             ";
		cout << "│               │" << endl;
		cout << "                                             ";
		cout << "│               │" << endl;
		cout << "                                             ";
		if (IndianCardPack[count] != 10)
			cout << "│              " << IndianCardPack[count] << "│" << endl;
		else
			cout << "│             " << IndianCardPack[count] << "│" << endl;
		cout << "                                             ";
		cout << "└───────────────┘" << endl;
		cout << endl;
	}
}