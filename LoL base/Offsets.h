#include <cinttypes>

namespace Offsets {
    namespace Globals {
        extern uint32_t oLocalPlayer;
        extern uint32_t oObjectManager;
        extern uint32_t oGameTime;
        extern uint32_t oZoomClass;
        extern uint32_t oChat;
        extern uint32_t oGameInfo;
        extern uint32_t oNetClient;
        extern uint32_t oWorldToScreen;
        extern uint32_t oHudInstance;
        extern uint32_t oGetFirstObject;
        extern uint32_t oGetNextObject;
    }
    namespace Functions {
        extern uint32_t oIssueClick;
        extern uint32_t oPrintChat;
        extern uint32_t oGetAttackDelay;
        extern uint32_t oGetAttackCastDelay;
        extern uint32_t    oOnProcessSpell;
        extern uint32_t    oOnCreateObject;
        extern uint32_t    oOnDeleteObject;
        extern uint32_t    oOnNewPath;
        extern uint32_t oGetBasicAttack;
        extern uint32_t    oIsTargetable;
        extern uint32_t oIsAlive;
        extern uint32_t oIsMissile;
        extern uint32_t oIsMinion;
        extern uint32_t oIsTurret;
        extern uint32_t oIsHero;
        extern uint32_t oIsInhibitor;
        extern uint32_t oIsNexus;
        extern uint32_t oIsTroy;

    }
    namespace RiskyFunctions {
        extern uint32_t oRetAddr;
        extern uint32_t oDrawCircle;
        extern uint32_t oIssueOrder;
        extern uint32_t oCastSpell;
    }
    namespace Objects {
        extern uint32_t oObjIndex;
        extern uint32_t oObjTeam;
        extern uint32_t oObjName;
        extern uint32_t oObjNetworkID;
        extern uint32_t oObjPos;
        extern uint32_t oObjVisibility;
        extern uint32_t oObjSourceIndex;
        extern uint32_t oObjHealth;
        extern uint32_t oObjMaxHealth;
        extern uint32_t oObjMana;
        extern uint32_t oObjMaxMana;
        extern uint32_t oObjArmor;
        extern uint32_t oObjMagicRes;
        extern uint32_t oObjBonusMagicRes;
        extern uint32_t oObjBaseAtk;
        extern uint32_t oObjBonusAtk;
        extern uint32_t oObjMoveSpeed;
        extern uint32_t oObjAtkRange;
        extern uint32_t oObjBuffMgr;
        extern uint32_t oObjSpellBook;
        extern uint32_t oObjChampionName;
        extern uint32_t oObjLevel;
        extern uint32_t oObjAIManager;
    }
    namespace Spellbook {
        extern uint32_t oSpellSlotlevel;
        extern uint32_t SpellSlotTime;
        extern uint32_t SpellSlotCharges;
        extern uint32_t SpellSlotDamage;
        extern uint32_t SpellSlotSpellInfo;
        extern uint32_t SpellInfoSpellData;
        extern uint32_t SpellDataSpellName;
        extern uint32_t SpellDataMissileName;
    }
}