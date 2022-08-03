// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AssetDemo : ModuleRules
{
	public AssetDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
