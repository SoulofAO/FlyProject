// Copyright Epic Games, Inc. All Rights Reserved.

#include "My_Save_PluginBPLibrary.h"
#include "My_Save_Plugin.h"
#include "UObject/Object.h"

void UMy_Save_PluginBPLibrary::FL_SERIALIZE__Serialize(UPARAM(DisplayName = "Object") UObject* const object_reference, UPARAM(DisplayName = "Data") TArray<uint8>& serialization_data)
{
    FMemoryWriter MemoryWriter(serialization_data, true);
    FSaveGameArchive arc(MemoryWriter);
    object_reference->Serialize(arc);
   
}
void UMy_Save_PluginBPLibrary::FL_SERIALIZE__DeSerialize(UPARAM(DisplayName = "Object") UObject* const object_reference, UPARAM(ref, DisplayName = "Data") TArray<uint8>& serialization_data)
{
    FMemoryReader MemoryReader(serialization_data, true);
    FSaveGameArchive arc(MemoryReader);
    object_reference->Serialize(arc);
}
