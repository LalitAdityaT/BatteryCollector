# Battery Collector

A third-person battery-collection game built with Unreal Engine 4.27. Keep the player's power from running out by collecting recharge pickups scattered around the level.

## Gameplay

- Move around the level and collect battery recharge pickups.
- Player power drains over time; each recharge pickup restores power.
- If power reaches zero, the character ragdolls and the level restarts after a short delay.

## Controls

| Action | Keyboard / mouse | Gamepad |
| --- | --- | --- |
| Move | W, A, S, D or arrow keys | Left stick |
| Look | Mouse | Right stick |
| Jump | Space | Face button (bottom) |

## Requirements

- Unreal Engine 4.27
- Visual Studio with the C++ game development workload, if building the C++ modules from source

## Getting Started

1. Clone or download this repository.
2. Open `BatteryCollector.uproject` with Unreal Engine 4.27.
3. If prompted, allow Unreal Editor to build the project modules.
4. Open `ThirdPersonCPP/Maps/ThirdPersonExampleMap` from the Content Browser if it is not already open.
5. Press **Play** to start.

## Project Contents

- `Content/Blueprints/` — battery character, game mode, pickup, and power HUD Blueprints.
- `Content/ThirdPersonCPP/` — third-person template character and example level.
- `Content/StarterContent/` — Unreal Engine Starter Content assets used by the project.
- `Source/BatteryCollector/` — C++ character and game-mode classes.
- `Config/` — project, input, and engine settings.

## License

The project code is provided under the [MIT License](LICENSE). Unreal Engine and Starter Content assets remain subject to Epic Games' applicable license terms.
