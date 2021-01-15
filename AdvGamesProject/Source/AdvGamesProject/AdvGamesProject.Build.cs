// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AdvGamesProject : ModuleRules
{
	public AdvGamesProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
