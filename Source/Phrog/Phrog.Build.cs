// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Phrog : ModuleRules
{
	public Phrog(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
