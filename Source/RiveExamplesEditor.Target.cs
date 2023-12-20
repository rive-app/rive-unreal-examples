// Copyright Rive, Inc. All rights reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class RiveExamplesEditorTarget : TargetRules
{
	public RiveExamplesEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "RiveExamples" } );
	}
}
