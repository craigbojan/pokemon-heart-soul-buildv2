# Encounter Modifier build

## In game
1. Open the Start menu and choose **CHEATS**.
2. Choose **Encounter Modifier**.
3. Use **Up/Down** to change Pokémon, **Left/Right** to jump by 10.
4. Press **A** to turn the modifier ON/OFF.
5. Press **B** to return.

The selection is restricted to Bulbasaur through Celebi and is stored in save variables.

## Build prerequisites
Install devkitPro/devkitARM and the normal pokeemerald build dependencies described in `INSTALL.md`.

From the project directory run:

```sh
make -j$(nproc)
```

The expected ROM output is the project's normal `.gba` build artifact. A UPS patch can then be made by comparing your unmodified Heart & Soul v1.2.1 ROM with the newly built ROM using a UPS patcher.
