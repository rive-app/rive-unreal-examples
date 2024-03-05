
Clone the project.
```
git clone git@github.com:rive-app/rive-unreal-examples.git
cd rive-unreal-examples
git submodule init
git submodule update
```
https://github.com/rive-app/rive-unreal/assets/6189196/a49b8e46-df98-4432-b942-a77716075aa2

# a. How to start the project
- Download the release from GitHub https://github.com/rive-app/rive-unreal/releases/tag/0.1.0.
- Install UE 5.3 - [Epic Games Launcher.](https://store.epicgames.com/en-US/download)
- Install Visual Studio for Windows [Visual Studio Guide](https://docs.unrealengine.com/5.3/en-US/setting-up-visual-studio-development-environment-for-cplusplus-projects-in-unreal-engine/) or Xcode for Mac.
- If you are using Windows, you would need to set the RHI interface to use DX11
>![image](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/7ddc2b13-db06-49fa-bf4f-29e22fea53ab)
  
- If you are making an Android Build, make sure using OpenGL instead of Vulcan.

# b. How to use Rive in Unreal Engine
- ## Import .riv assets into Unreal Engine
1. Create asset in Rive Editor
2. Download asset
>![Record_2024_03_04_23_22_43_574](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/c3216495-5937-4746-a5f8-9d5755bbeb3c)


3. Import file - Drag and Drop into UE
>![Record_2024_03_04_23_26_00_750](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/ee9c6029-9b89-44e9-a73b-3fc904a27f16)


- ## Create UMG Widget asset with Rive Widget
![Record_2024_03_04_23_31_16_772](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/2c3a2e39-2d6d-4d35-a51f-09ca2e7ccd68)


- ## Create Rive Instance from Rive File

![Record_2024_03_04_23_34_36_231](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/d60106ec-6cbd-49fc-82dc-7ae86bddc4f8)



- ## Assign Rive File as material to 3D geometry
![Record_2024_03_04_23_38_10_600](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/9b88a7ed-73db-47e8-857e-ccf7b467ce27)



- ## Spawn Rive Widget Actor
![Record_2024_03_04_23_39_34_667](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/fe119b5f-2788-4e52-a217-67decdf98d8e)




- ## Adjust Rive File Properties 
You can manipulate Rive File settings with the following properties.

> - `Artboard Name`
> - `State Machine Name`
> - `Rive Fit Type` 
> - `Size`




![Record_2024_03_04_23_41_49_414](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/68ca8237-6f6d-4689-892f-78107e9bd732)


# c. How to use Rive blueprints 
>See example blueprints under /Content/Rive/RiveExampleContent/Blueprints/

- ## Runtime single artboard workflow 
Initialize 1 artboard in runtime. See example, BP_SingleArtboard for complete blueprint logic.
>![image](https://github.com/rive-app/rive-unreal/assets/149646824/8e16df47-3dc4-41c7-af05-8815a67d081c)


- ## Runtime Multiple artboard workflows
1. Initialize 3 artboards in runtime. See example, BP_MultiArtboards for complete blueprint logic.
>![image](https://github.com/rive-app/rive-unreal/assets/149646824/6ee53671-9d05-430c-a692-9ef70be7447c)
>![image](https://github.com/rive-app/rive-unreal/assets/149646824/e828ecfc-2d4a-43da-8c5f-8ee8b7f71271)
>![image](https://github.com/rive-app/rive-unreal/assets/149646824/0dae50a6-8df8-450b-a13a-1c7bb78c3d0e)

2. transform/translate/align
>![image](https://github.com/rive-app/rive-unreal/assets/149646824/ecba0f2b-cf7d-4059-bb45-6e89628c9a34)

3. Create runtime widget
>![image](https://github.com/rive-app/rive-unreal/assets/149646824/922e1837-60a7-40ee-b1c6-12beb4c925cb)

4. Resize the texture
>![image](https://github.com/rive-app/rive-unreal/assets/149646824/45f6340a-163b-4081-9140-0991cecd6ffc)

- ## Sending condition events from UE to Rive
> See example, BP_3DConditionsEvent for complete blueprint logic.
1. Create event and bind events to transition in Rive Editor
>![Record_2024_03_05_11_02_57_892](https://github.com/rive-app/rive-unreal/assets/149646824/efc195ac-753b-4ded-919f-15f3c9996617)

2. Create binding event in UE so it can change conditions in Rive
>![image](https://github.com/rive-app/rive-unreal/assets/149646824/925e5254-4d86-43a3-8969-be7a8d3ad78a)


- ## Receiving reported events
> See example, BP_3dReportedEvents for complete blueprint logic.
1. Create event and event properties in Rive Editor
>![Record_2024_03_05_11_39_41_826](https://github.com/rive-app/rive-unreal/assets/149646824/b9b2dc87-53e4-401d-a01e-a7d015560479)

2. Listen to reported events in UE 
>![image](https://github.com/rive-app/rive-unreal/assets/149646824/05f2310b-bb0d-433c-b748-76d9369e7f41)

>![image](https://github.com/rive-app/rive-unreal/assets/149646824/feb07fa8-9dc1-40b2-9578-56db24ff9c40)


- ## UE 3D widget User Input interaction 
> See example, BP_3dUserInput for complete blueprint logic.
1. Create Inputs in Rive Editor
>![image](https://github.com/rive-app/rive-unreal/assets/149646824/c9544f23-45c2-483b-9db4-9e50291720ba)
2. Create Blueprint Set Bool Value/Set Number Value/ Fire Trigger
>
![image](https://github.com/rive-app/rive-unreal/assets/149646824/46c7d670-211f-4f4d-a4b1-0e4e3b7c0342)

>![image](https://github.com/rive-app/rive-unreal/assets/149646824/1408f917-4f25-4fd0-a4dc-e0aec9ae32cf)

>![image](https://github.com/rive-app/rive-unreal/assets/149646824/82845c93-0583-4f5c-b248-ad561976bd42)


