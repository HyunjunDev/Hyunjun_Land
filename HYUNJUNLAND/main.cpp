#include "HyunjunLand.h"
#include <format>
using namespace std;
int IndianCardPack[20] = { 1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10 };

MCI_OPEN_PARMS Openbgm;
//플레이 할 용도
MCI_PLAY_PARMS Playbgm;

UINT dwID;

void Playingbgm()
{
	Openbgm.lpstrElementName = TEXT("Background.mp3");
	Openbgm.lpstrDeviceType = L"mpegvideo";
	mciSendCommand(0, MCI_OPEN, MCI_OPEN_TYPE | MCI_OPEN_ELEMENT, (DWORD)(LPVOID)&Openbgm);
	dwID = Openbgm.wDeviceID;
	mciSendCommand(dwID, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&Playbgm);
}

MCI_OPEN_PARMS OpenInGamebgm;
//플레이 할 용도
MCI_PLAY_PARMS PlayInGamebgm;

UINT dwID2;

void PlayingInGamebgm()
{
	OpenInGamebgm.lpstrElementName = TEXT("InGameBgm.mp3");
	OpenInGamebgm.lpstrDeviceType = L"mpegvideo";
	mciSendCommand(0, MCI_OPEN, MCI_OPEN_TYPE | MCI_OPEN_ELEMENT, (DWORD)(LPVOID)&OpenInGamebgm);
	dwID2 = OpenInGamebgm.wDeviceID;
	mciSendCommand(dwID2, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&PlayInGamebgm);
}

MCI_OPEN_PARMS OpenEndingbgm;
//플레이 할 용도
MCI_PLAY_PARMS PlayEndingbgm;

UINT dwID3;

void PlayingEndingebgm()
{
	OpenEndingbgm.lpstrElementName = TEXT("Ending.mp3");
	OpenEndingbgm.lpstrDeviceType = L"mpegvideo";
	mciSendCommand(0, MCI_OPEN, MCI_OPEN_TYPE | MCI_OPEN_ELEMENT, (DWORD)(LPVOID)&OpenEndingbgm);
	dwID3 = OpenEndingbgm.wDeviceID;
	mciSendCommand(dwID3, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&PlayEndingbgm);
}


char Map[HEIGHT][WEIGHT];
bool GameOn = false;
int main()
{

	CursorView();

	PLAYER tPlayer;
	AI ai;
	tPlayer.money = 0;
	GAME game;
	srand((unsigned int)time(NULL));
	Screen();
	remove_scrollbar();
	SetMap(Map,&tPlayer);

	Playingbgm();
	while (true)
	{
		CursorView();
		if (tPlayer.money >= 1000000)
		{
			mciSendCommand(dwID2, MCI_CLOSE, 0, NULL);
			system("cls");
			cout << "현준랜드를 먹으셨습니다!!";
			break;
		}

		if (GameOn)
		{
			Reset(&GameOn);
			MapChange(Map, false);
			if (game.IndianPoker == true)
			{
				ai.chips = 20;
				tPlayer.chips = 20;
			}
			mciSendCommand(dwID, MCI_CLOSE, 0, NULL);
			PlayingInGamebgm();
			GameChoice(game, &tPlayer, IndianCardPack, &ai);
			mciSendCommand(dwID2, MCI_CLOSE, 0, NULL);
			Playingbgm();
			GameOn = false;
		}
		else
		{
			gotoxy(0, 0);
			Title();
			OutMap(Map, &tPlayer);
			cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
			cout <<"보유한 돈 : " << tPlayer.money << endl;
			char cInPut = _getch();
			MovePlayer(Map, &tPlayer, &GameOn,&game);
		}
	}
}