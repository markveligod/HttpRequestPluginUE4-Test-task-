// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HttpTestPlugin : ModuleRules
{
	public HttpTestPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PrecompileForTargets = PrecompileTargetsType.Any;
		
		PublicDependencyModuleNames.AddRange(new string[] { "Core",
			"CoreUObject",
			"Engine",
			"HTTP",
			"Json",
			"UMG",
			"Slate",
			"SlateCore",});

		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
	}
}
