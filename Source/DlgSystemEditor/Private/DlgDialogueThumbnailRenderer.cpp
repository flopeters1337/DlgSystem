// Copyright Csaba Molnar, Daniel Butum. All Rights Reserved.
#include "DlgDialogueThumbnailRenderer.h"

#include "CanvasTypes.h"

//////////////////////////////////////////////////////////////////////////
// UPaperTileSetThumbnailRenderer

UDlgDialogueThumbnailRenderer::UDlgDialogueThumbnailRenderer(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UDlgDialogueThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height,
										 FRenderTarget*, FCanvas* Canvas)
{
	// TODO maybe
}
