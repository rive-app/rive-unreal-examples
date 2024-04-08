// Copyright Rive, Inc. All rights reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class RiveExamplesTarget : TargetRules
{
	public RiveExamplesTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.Latest;

		ExtraModuleNames.AddRange( new string[] { "RiveExamples" } );
	}
}
