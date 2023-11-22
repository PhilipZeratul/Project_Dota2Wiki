// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_Dota2Wiki : ModuleRules
{
	public Project_Dota2Wiki(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
