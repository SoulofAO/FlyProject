// Copyright Epic Games, Inc. All Rights Reserved.

#include "GetMeshVertexBPLibrary.h"
#include "GetMeshVertex.h"

UGetMeshVertexBPLibrary::UGetMeshVertexBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FVector UGetMeshVertexBPLibrary::GetVertexLocaltion(int Count, UStaticMeshComponent* StaticMeshComponent)
{

    if (StaticMeshComponent->GetStaticMesh()->RenderData->LODResources.Num() > 0)
    {
        FPositionVertexBuffer* VertexBuffer = &StaticMeshComponent->GetStaticMesh()->RenderData->LODResources[0].VertexBuffers.PositionVertexBuffer;
        if (VertexBuffer)
        {
            return VertexBuffer->VertexPosition(Count);
        }
    }
    return { 0,0,0 };
}

int32 UGetMeshVertexBPLibrary::GetVertexCount(UStaticMeshComponent* StaticMeshComponent)
{
    if (StaticMeshComponent->GetStaticMesh()->RenderData->LODResources.Num() > 0)
    {
        FPositionVertexBuffer* VertexBuffer = &StaticMeshComponent->GetStaticMesh()->RenderData->LODResources[0].VertexBuffers.PositionVertexBuffer;
        if (VertexBuffer)
        {
            return VertexBuffer->GetNumVertices();
        }
    }

    return 0;
}
