#pragma once
#include "console.h"

int const HEIGHT = 25;
int const WEIGHT = 29;

typedef struct _pos {
	int x;
	int y;
}POS, * PPOS;

typedef struct _Player {

	_pos tPos;
	int money;
	int chips;
}PLAYER, * PPLAYER;

typedef struct _Ai {
	int chips;
}AI, * AAI;

typedef struct _Game {
	bool IndianPoker;
}GAME, * GGAME;

void PlayingCoineffect();
void PlayingCardeffect();
void Title();
void SetMap(char Map[HEIGHT][WEIGHT], PPLAYER player);
void MapChange(char Map[HEIGHT][WEIGHT], bool onOff);
void OutMap(char Map[HEIGHT][WEIGHT], PPLAYER pPlayer);
void AllMove(char nextPos, char Map[HEIGHT][WEIGHT], PPLAYER pPlayer, bool* GameOn, GGAME game);
void MoveUp(char Map[HEIGHT][WEIGHT], PPLAYER pPlayer, bool* GameOn, GGAME game);
void MoveDown(char Map[HEIGHT][WEIGHT], PPLAYER pPlayer, bool* GameOn, GGAME game);
void MoveLeft(char Map[HEIGHT][WEIGHT], PPLAYER pPlayer, bool* GameOn, GGAME game);
void MoveRight(char Map[HEIGHT][WEIGHT], PPLAYER pPlayer, bool* GameOn, GGAME game);
void MovePlayer(char Map[HEIGHT][WEIGHT], PPLAYER pPlayer, bool* GameOn, GGAME game);
void Reset(bool* GameOn);
void GameChoice(GAME game, PPLAYER pPlayer, int* IndianCardPack, AAI ai);
void IndianPokerTitle();
void RandomChattWin();
void RandomChatlose();
void RandomChatRaise();
void RandomChatCall();
void RandomChatFold();
void BettingMoney(PPLAYER pPlayer, int& bettingMoney);
void CountUP(int& count, int* indianCardPack);
bool GameEnd(PPLAYER pPlayer, AAI ai, int& bettingMoney);
void RoundEnd(bool& initAttack, bool& initAttackTurn, int& userBettingChip, int& aiBettingChip, int& beforeRaise, int& beforeChip, int& count, int* indianCardPack, bool& roundEnd);
int Match(int userCard, int aiCard);
void TurnEnd(bool& aiTurn);
void UserInterface(PPLAYER pPlayer, AAI ai, int bettingChip, int aiBettingChip, int bettingMoney);
void Enter();
void Call(bool roundEnd, int result, int& aiCard, int& userCard, int& bettingMoney, int& bettingChip, int& aiBettingChip, int& count, int* indianCardPack, PPLAYER player, AAI ai);
void UserTurn(bool& aiTurn, bool& initAttackTurn, bool& initAttack, bool& roundEnd, int& bettingMoney, int& bettingChip, int& aiBettingChip, int& beforeRaise, int& beforeChip, int aiCard, int userCard, int& count, int* indianCardPack, PPLAYER player, AAI ai);
void AIRandomChoice(bool& initAttack, bool& initAttackTurn, bool& roundEnd, int& bettingMoney, int randPer, int randBetting, int& beforeChip, int& beforeRaise, int result, int& aiCard, int& userCard, int& bettingChip, int& aiBettingChip, int& count, int* indianCardPack, int high, int low, PPLAYER player, AAI ai);
void AITurn(bool& aiTurn, bool& initAttackTurn, bool& initAttack, bool& roundEnd, int& bettingMoney, int& bettingChip, int& aiBettingChip, int& beforeRaise, int& beforeChip, int aiCard, int userCard, int& count, int* indianCardPack, PPLAYER player, AAI ai);
void InIndianPoker(PPLAYER pPlayer, int* IndianCardPack, AAI ai);
void Swap(int* arr, int i, int j);
void Shuffle(int* arr, int start, int end);
void CardPrint(int* IndianCardPack, int count, bool roundEnd);