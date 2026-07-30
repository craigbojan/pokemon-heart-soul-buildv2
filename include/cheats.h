#ifndef GUARD_CHEATS_H
#define GUARD_CHEATS_H

#include "global.h"

bool8 IsEncounterOverrideEnabled(void);
u16 GetEncounterOverrideSpecies(void);
void SetEncounterOverrideEnabled(bool8 enabled);
bool8 SetEncounterOverrideSpecies(u16 species);
void ResetEncounterOverride(void);

#endif // GUARD_CHEATS_H
