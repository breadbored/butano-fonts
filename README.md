# Fonts for Butano

This repository contains font assets for Game Boy Advance development using the Butano engine.

## Integration with Butano Projects

To use these fonts in your Butano project, follow these steps:

### 1. Clone or Add as Submodule

Clone this repository or add it as a git submodule to your project:

```bash
# Option A: Clone to a subdirectory
git clone <repository-url> arthur

# Option B: Add as submodule
git submodule add <repository-url> arthur
```

### 2. Update Your Makefile

Add the following lines to your Butano project's `Makefile`:

```makefile
# Butano Fonts
FONTDIR = butano-fonts
include $(realpath $(FONTDIR))/font_arthur.mak
```

### 3. Example Integration

Here's how it looks in a complete Butano Makefile:

```makefile
TARGET      := your-game
BUILD       := build
LIBBUTANO   := engine/butano
SOURCES     := src
INCLUDES    := include
GRAPHICS    := graphics
# ... other standard Butano variables ...

# Fonts integration
FONTDIR = arthur

# Include main butano makefile
include $(LIBBUTANOABS)/butano.mak
```

The `fonts_arthur.mk` file will automatically add the necessary `INCLUDES` and `GRAPHICS` paths to your build process
when `FONTDIR` is properly set.
