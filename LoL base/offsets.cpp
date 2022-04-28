#include "Offsets.h"


namespace Offsets {
    namespace Globals {
        uint32_t oLocalPlayer = 0x31090E8; // A1 ? ? ? ? 85 C0 74 07 05 ? ? ? ? EB 02 33 C0 56
        uint32_t oObjectManager = 0x24B80A8; // 8B 0D ? ? ? ? E8 ? ? ? ? FF 77
        uint32_t oGameTime = 0x31001D0; // F3 0F 11 05 ? ? ? ? 8B 49
        uint32_t oZoomClass = 0x30FF660; // A3 ? ? ? ? 83 FA 10 72 32
        uint32_t oChat = 0x310919C; // 8B 0D ? ? ? ? 8A D8 85
        uint32_t oGameInfo = 0x30E9628; // A1 ? ? ? ? 83 78 08 02 0F 94
        uint32_t oWorldToScreen = 0xA537C0; // 83 EC 10 56 E8 ? ? ? ? 8B 08 
        uint32_t oHudInstance = 0x24B80D8;
        uint32_t oGetFirstObject = 0x27FB50;
        uint32_t oGetNextObject = 0x280590;

    }
    namespace Functions {
        uint32_t oIssueClick = 0x609CD0; // no sig
        uint32_t oPrintChat = 0x599D90; // 
        uint32_t oGetAttackDelay = 0x27CFC0;
        uint32_t oGetAttackCastDelay = 0x27CEC0;
        uint32_t oOnProcessSpell = 0x50FDF0;
        uint32_t oOnCreateObject = 0x285840;
        uint32_t oOnDeleteObject = 0x27E060;
        uint32_t oOnNewPath = 0x285B20;
        uint32_t oGetBasicAttack = 0x12DB00;
        uint32_t oIsTargetable = 0x1B4990;
        uint32_t oIsAlive = 0x142430;
        uint32_t oIsMissile = 0x149D50;
        uint32_t oIsMinion = 0x149D30;
        uint32_t oIsTurret = 0x149EE0;
        uint32_t oIsHero = 0x149CD0;
        uint32_t oIsInhibitor = 0x149B50;
        uint32_t oIsNexus = 0x149C50;
        uint32_t oIsTroy = 0x149BD0;

    }
    namespace RiskyFunctions {
        uint32_t oRetAddr;
        uint32_t oDrawCircle;
        uint32_t oIssueOrder;
        uint32_t CastSpell = 0x5F2180;
    }
    namespace Objects {
        uint32_t oObjIndex = 0x20;
        uint32_t oObjTeam = 0x4C;
        uint32_t oObjName = 0x6C;
        uint32_t oObjNetworkID = 0xCC;
        uint32_t oObjPos = 0x1F4;
        uint32_t oObjVisibility = 0x28C;
        uint32_t oObjInScreen = 0x1A8;
        uint32_t oObjSourceIndex = 0x2AC;
        uint32_t oObjHealth = 0xDB4;
        uint32_t oObjMaxHealth = oObjHealth + 0x10;
        uint32_t oObjMana = 0x2B4;
        uint32_t oObjMaxMana = 0x2B4 + 0x10;
        uint32_t oObjArmor = 0x12AC;
        uint32_t oObjMagicRes = 0x12B4;
        uint32_t oObjBonusMagicRes = 0x12B8;
        uint32_t oObjBaseAtk = 0x1284;
        uint32_t oObjBonusAtk = 0x11FC;
        uint32_t oObjMoveSpeed = 0x12C4;
        uint32_t oObjAtkRange = 0x12CC;
        uint32_t oObjBuffMgr = 0x2180;
        uint32_t oObjSpellBook = 0x27C0;
        uint32_t oObjChampionName = 0x2D98;
        uint32_t oObjLevel = 0x338C;
        uint32_t oObjAIManager = 0x3030;
    }
    namespace Spellbook {
        uint32_t SpellSlotLevel = 0x1C;
        uint32_t SpellSlotTime = 0x24;
        uint32_t SpellSlotCharges = 0x54;
        uint32_t SpellSlotDamage = 0x94;
        uint32_t SpellSlotSpellInfo = 0x120;
        uint32_t SpellInfoSpellData = 0x44;
        uint32_t SpellDataSpellName = 0x6C;
        uint32_t SpellDataMissileName = 0x6C;
    }
}