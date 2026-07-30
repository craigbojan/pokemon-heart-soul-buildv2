# One-click cloud build

This project includes a GitHub Actions workflow that compiles the modified ROM in GitHub's cloud environment. You do not need WSL or devkitARM on your computer.

## First-time setup

1. Create a new **private** repository on GitHub. Do not initialise it with a README.
2. Extract this ZIP on a computer.
3. Upload the **contents inside `pokemonHnS-main`** to the repository, including the hidden `.github` folder.
   - GitHub's web uploader may omit hidden folders on some systems. The most reliable method is GitHub Desktop: **File → Add local repository**, select the extracted `pokemonHnS-main` folder, then publish it as a private repository.
4. Open the repository on GitHub and select **Actions**.
5. Select **Build Heart & Soul ROM**.
6. Select **Run workflow**, then confirm **Run workflow**.

## Download the ROM

When the run finishes successfully:

1. Open the completed workflow run.
2. Scroll to **Artifacts**.
3. Download **Pokemon-Heart-and-Soul-Encounter-Menu**.
4. Extract the downloaded ZIP.
5. Import `pokemonHnS.gba` into Delta.

The artifact is retained for 14 days.

## Test the encounter menu

Open the in-game Start menu and choose:

`CHEATS → Encounter Modifier`

- Up/Down: previous or next Pokémon
- Left/Right: jump by ten
- A: turn the modifier on or off
- B: return

## If the build fails

Open the failed build step, copy the red error text, and send it back in the chat. The compiler output will identify the exact source line that needs correcting.

## Privacy note

Keep the repository private. The workflow builds entirely from source and does not require you to upload your existing `.gba` ROM.
