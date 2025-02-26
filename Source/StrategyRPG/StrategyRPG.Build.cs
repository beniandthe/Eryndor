// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StrategyRPG : ModuleRules
{
	public StrategyRPG(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "TextureCompressor", "EnhancedInput", "HeadMountedDisplay", "RenderCore", "RHI" });
    }
}
