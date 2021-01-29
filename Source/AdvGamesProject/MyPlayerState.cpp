// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerState.h"

void AMyPlayerState::AddKey(Type keycardstoAdd)
{
	if (!KeyCardType.Contains(keycardstoAdd))
	{
		KeyCardType.Add(keycardstoAdd);
	}
}

void AMyPlayerState::KeyCard(ADoors* KeyReq)
{
	if (KeyCardType.Contains( KeyReq->typeofcard))
	{
		KeyReq->open = true;
	}
}
