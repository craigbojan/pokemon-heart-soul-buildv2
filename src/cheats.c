#include "global.h"
#include "cheats.h"
#include "event_data.h"
#include "constants/species.h"
#include "constants/vars.h"

bool8 IsEncounterOverrideEnabled(void)
{
    u16 species = VarGet(VAR_CHEAT_ENCOUNTER_SPECIES);

    return VarGet(VAR_CHEAT_ENCOUNTER_ENABLED) != 0
        && species >= SPECIES_BULBASAUR
        && species <= SPECIES_CELEBI;
}

u16 GetEncounterOverrideSpecies(void)
{
    u16 species = VarGet(VAR_CHEAT_ENCOUNTER_SPECIES);

    if (species < SPECIES_BULBASAUR || species > SPECIES_CELEBI)
        return SPECIES_BULBASAUR;

    return species;
}

void SetEncounterOverrideEnabled(bool8 enabled)
{
    VarSet(VAR_CHEAT_ENCOUNTER_ENABLED, enabled ? 1 : 0);
}

bool8 SetEncounterOverrideSpecies(u16 species)
{
    if (species < SPECIES_BULBASAUR || species > SPECIES_CELEBI)
        return FALSE;

    VarSet(VAR_CHEAT_ENCOUNTER_SPECIES, species);
    return TRUE;
}

void ResetEncounterOverride(void)
{
    SetEncounterOverrideEnabled(FALSE);
    SetEncounterOverrideSpecies(SPECIES_BULBASAUR);
}
