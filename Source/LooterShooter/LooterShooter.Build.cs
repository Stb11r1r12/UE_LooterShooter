// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LooterShooter : ModuleRules
{
	public LooterShooter(ReadOnlyTargetRules Target) : base(Target)
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
			"LooterShooter",
			"LooterShooter/Variant_Platforming",
			"LooterShooter/Variant_Platforming/Animation",
			"LooterShooter/Variant_Combat",
			"LooterShooter/Variant_Combat/AI",
			"LooterShooter/Variant_Combat/Animation",
			"LooterShooter/Variant_Combat/Gameplay",
			"LooterShooter/Variant_Combat/Interfaces",
			"LooterShooter/Variant_Combat/UI",
			"LooterShooter/Variant_SideScrolling",
			"LooterShooter/Variant_SideScrolling/AI",
			"LooterShooter/Variant_SideScrolling/Gameplay",
			"LooterShooter/Variant_SideScrolling/Interfaces",
			"LooterShooter/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
