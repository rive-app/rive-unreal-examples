
Clone the project.
```
git clone git@github.com:rive-app/rive-unreal-examples.git
cd rive-unreal-examples
git submodule init
git submodule update
```
a. How to start the project
- Download the release from GitHub https://github.com/rive-app/rive-unreal/releases/tag/0.1.0.
- Install UE 5.3 - provide a link.
- Install Visual Studio for Windows https://docs.unrealengine.com/4.26/en-US/ProductionPipelines/DevelopmentSetup/VisualStudioSetup/ or Xcode for Mac.
- If you are using Windows, you would need to set the RHI interface to use DX11
![image](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/7ddc2b13-db06-49fa-bf4f-29e22fea53ab)
  
- If you are making an Android Build, make sure using OpenGL instead of Vulcan.

b. Import .riv assets into Unreal Engine
- Create asset in Rive Editor
- Download asset
![Record_2024_03_04_23_22_43_574](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/c3216495-5937-4746-a5f8-9d5755bbeb3c)


- Import file - Drag and Drop into UE
![Record_2024_03_04_23_26_00_750](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/ee9c6029-9b89-44e9-a73b-3fc904a27f16)


c. Create UMG Widget asset with Rive
![Record_2024_03_04_23_31_16_772](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/2c3a2e39-2d6d-4d35-a51f-09ca2e7ccd68)


d. Create Rive Instance from Rive File
![Record_2024_03_04_23_34_36_231](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/d60106ec-6cbd-49fc-82dc-7ae86bddc4f8)



e. Assign Rive File as material to 3D geometry
![Record_2024_03_04_23_38_10_600](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/9b88a7ed-73db-47e8-857e-ccf7b467ce27)



f. Spawn Rive Widget Actor
![Record_2024_03_04_23_39_34_667](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/fe119b5f-2788-4e52-a217-67decdf98d8e)




g. Rive File Properties
![Record_2024_03_04_23_41_49_414](https://github.com/Geodesic-Games/rive-unreal-examples/assets/149646824/68ca8237-6f6d-4689-892f-78107e9bd732)



h. Runtime single artboard workflow (Images from your BPs)

i. Runtime Multiple artboard workflows (Images from your BPs)
- transform/translate/align
- Create runtime widget
- Resize the texture

j. Sending condition events from UE to rive
- Show how to create this event in Rive Editor (image)
- Show how to send it from UE to rive

k. Receiving reported events
- Show how to create a reported event in Rive Editor
- Show how to listen to reported events in UE (BP image or video)  

l. UE 3D widget User Input interaction 
