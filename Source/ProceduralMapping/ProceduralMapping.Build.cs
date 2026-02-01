// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProceduralMapping : ModuleRules
{
	public ProceduralMapping(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ProceduralMapping",
			"ProceduralMapping/Variant_Platforming",
			"ProceduralMapping/Variant_Platforming/Animation",
			"ProceduralMapping/Variant_Combat",
			"ProceduralMapping/Variant_Combat/AI",
			"ProceduralMapping/Variant_Combat/Animation",
			"ProceduralMapping/Variant_Combat/Gameplay",
			"ProceduralMapping/Variant_Combat/Interfaces",
			"ProceduralMapping/Variant_Combat/UI",
			"ProceduralMapping/Variant_SideScrolling",
			"ProceduralMapping/Variant_SideScrolling/AI",
			"ProceduralMapping/Variant_SideScrolling/Gameplay",
			"ProceduralMapping/Variant_SideScrolling/Interfaces",
			"ProceduralMapping/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
