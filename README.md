# Unified MPCNC Marlin configuration.

## The goal

This fork of Marlin is intended to create something similar to TH3D's Unified Firmware Package but aimed at MPCNC and similar designs.

We will simply track the latest release of Marlin and apply a simplified configuration through substantially fewer Configuration.h changes.

## Supported boards

Right now this is very early. I intend to support all of the officially supported boards as well as whatever I have on hand. But for now board support will be
very limited. You will also need to edit platformio.ini to ensure default_envs is set to the correct platform.

### BigTreeTech SKR V1.3

#### Nonstandard enabled features
1. ARC (G2/G3 support)
2. EMERGENCY_PARSER

## TODO
1. Better configuration of steps per unit
2. Add support for all officially supported boards
