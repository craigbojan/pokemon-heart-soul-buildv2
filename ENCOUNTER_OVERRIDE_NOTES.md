# Encounter Override – Engine v0.1

This build adds a save-backed encounter override engine for Kanto and Johto species only.

## Implemented

- Encounter override is applied centrally in `CreateWildMon`.
- It therefore covers normal grass/cave encounters, surfing, fishing, outbreaks and other encounter paths that use `CreateWildMon`.
- The override is applied after Heart & Soul's built-in wild Pokémon randomizer, so the selected species wins.
- Settings persist in the save file using two previously unused Heart & Soul variables.
- Only species `#001 Bulbasaur` through `#251 Celebi` are accepted.
- Invalid/uninitialised species values safely fall back to Bulbasaur and do not activate the override.

## API

Declared in `include/cheats.h`:

- `IsEncounterOverrideEnabled()`
- `GetEncounterOverrideSpecies()`
- `SetEncounterOverrideEnabled(bool8 enabled)`
- `SetEncounterOverrideSpecies(u16 species)`
- `ResetEncounterOverride()`

The menu/selector is not included in this engine-only milestone. It will call this API in the next version.

## Build verification

The host-side project tools built successfully. The full ROM build could not complete in this environment because the ARM GBA toolchain executable `arm-none-eabi-as` is not installed.
