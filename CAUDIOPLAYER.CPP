#include "pch.h"
#include "CAudioPlayer.h"

void CAudioPlayer::PlaySoundFromFile(LPCTSTR lpszFilePath)
{
	if (!AfxIsValidString(lpszFilePath) || !_taccess(lpszFilePath, 0))
	{
		// Ph�t �m thanh t? file .wav
		PlaySound(lpszFilePath, NULL, SND_FILENAME | SND_ASYNC);
	}
}

void CAudioPlayer::game()
{

}
