# LocalCoOpTemplate

Developed with Unreal Engine 4

*Ver.1*
A basic starting point for games that want to support local multiplayer with split-screen. The project is built over the Third Person Template.

 *SpawnManager* is the C++ class that it's responsible for spawning the right number of players. The class exposes two possible spawning methods:
 
 - *SpawnPlayerDefault* spawns the same *APawn* for each player.
 - *SpawnPlayerCustom* spawns a different *APawn* for each player.

All fields can be edited through the blueprint class that derives from the *SpawnManager* class. 

![BlueprintSettings](https://imgur.com/nvh59Sa)

![enter image description here](https://imgur.com/UlbaJ41)

Pad assignment for first player can be enabled/disabled through the checkbox in Project Settings>Maps and Mode.
By default, first player is going to play with the keyboard.

![pad assignement setting](https://imgur.com/nvh59Sa)

You can make this project a template for your Unreal Engine installation following: https://docs.unrealengine.com/4.27/en-US/Basics/Projects/CreatingTemplates/
