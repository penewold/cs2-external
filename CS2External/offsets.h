#pragma once
#include <cstddef>
#include <cstdint>

// Generated from cs2-dumper build 14141 (2026-04-04)
// https://github.com/a2x/cs2-dumper

namespace offsets {

    // Module: client.dll
    namespace client {
        constexpr std::ptrdiff_t dwCSGOInput = 0x233FC00;
        constexpr std::ptrdiff_t dwEntityList = 0x24D0DC0;
        constexpr std::ptrdiff_t dwGameEntitySystem = 0x24D0DC0;
        constexpr std::ptrdiff_t dwGameRules = 0x232AF48;
        constexpr std::ptrdiff_t dwGlobalVars = 0x204B5D8;
        constexpr std::ptrdiff_t dwGlowManager = 0x2327D40;
        constexpr std::ptrdiff_t dwLocalPlayerController = 0x230A4F0;
        constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x2056700;
        constexpr std::ptrdiff_t dwPlantedC4 = 0x2338A68;
        constexpr std::ptrdiff_t dwPrediction = 0x2056610;
        constexpr std::ptrdiff_t dwSensitivity = 0x2328858;
        constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
        constexpr std::ptrdiff_t dwViewAngles = 0x2340288;
        constexpr std::ptrdiff_t dwViewMatrix = 0x2330AE0;
        constexpr std::ptrdiff_t dwViewRender = 0x232FCD0;
    }

    // Module: engine2.dll
    namespace engine {
        constexpr std::ptrdiff_t dwBuildNumber = 0x60BC74;
        constexpr std::ptrdiff_t dwNetworkGameClient = 0x9090C0;
        constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x230;
        constexpr std::ptrdiff_t dwWindowWidth = 0x90D4EC;
        constexpr std::ptrdiff_t dwWindowHeight = 0x90D4E8;
    }

    // C_BaseEntity
    namespace entity {
        constexpr std::ptrdiff_t m_CBodyComponent = 0x30;
        constexpr std::ptrdiff_t m_pGameSceneNode = 0x330;
        constexpr std::ptrdiff_t m_iMaxHealth = 0x348;
        constexpr std::ptrdiff_t m_iHealth = 0x34C;
        constexpr std::ptrdiff_t m_lifeState = 0x354;
        constexpr std::ptrdiff_t m_iTeamNum = 0x3EB;      // uint8
        constexpr std::ptrdiff_t m_fFlags = 0x3F8;
        constexpr std::ptrdiff_t m_vecAbsVelocity = 0x3FC;
        constexpr std::ptrdiff_t m_vecVelocity = 0x430;
        constexpr std::ptrdiff_t m_hOwnerEntity = 0x520;
    }

    // CGameSceneNode
    namespace sceneNode {
        constexpr std::ptrdiff_t m_nodeToWorld = 0x10;
        constexpr std::ptrdiff_t m_vecOrigin = 0x80;
        constexpr std::ptrdiff_t m_vecAbsOrigin = 0xC8;
        constexpr std::ptrdiff_t m_angAbsRotation = 0xD4;
        constexpr std::ptrdiff_t m_bDormant = 0x103;
    }

    // CSkeletonInstance / CModelState
    namespace skeleton {
        constexpr std::ptrdiff_t m_modelState = 0x150;
        constexpr std::ptrdiff_t m_boneArraySubOffset = 0x80;  // within CModelState
        // Combined: sceneNode + m_modelState + m_boneArraySubOffset
    }

    // C_BaseModelEntity
    namespace model {
        constexpr std::ptrdiff_t m_vecViewOffset = 0xE70;
        constexpr std::ptrdiff_t m_Glow = 0xDD8;
        constexpr std::ptrdiff_t m_Collision = 0xD28;
    }

    // C_BasePlayerPawn
    namespace playerPawn {
        constexpr std::ptrdiff_t m_pWeaponServices = 0x11E0;
        constexpr std::ptrdiff_t m_pItemServices = 0x11E8;
        constexpr std::ptrdiff_t m_pCameraServices = 0x1218;
        constexpr std::ptrdiff_t m_pMovementServices = 0x1220;
        constexpr std::ptrdiff_t v_angle = 0x1298;
        constexpr std::ptrdiff_t m_hController = 0x13A8;
    }

    // C_CSPlayerPawnBase
    namespace csPawnBase {
        constexpr std::ptrdiff_t m_flFlashBangTime = 0x13EC;
        constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x13FC;
        constexpr std::ptrdiff_t m_flFlashDuration = 0x1400;
        constexpr std::ptrdiff_t m_hOriginalController = 0x1450;
    }

    // C_CSPlayerPawn
    namespace csPawn {
        constexpr std::ptrdiff_t m_pAimPunchServices = 0x1490; // CCSPlayer_AimPunchServices*
        constexpr std::ptrdiff_t m_predictableBaseAngle = 0x50;
        constexpr std::ptrdiff_t m_bIsScoped = 0x1C50;
        constexpr std::ptrdiff_t m_bIsDefusing = 0x1C52;
        constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x1C53;
        constexpr std::ptrdiff_t m_entitySpottedState = 0x11E0;
        constexpr std::ptrdiff_t m_iShotsFired = 0x1C64;
        constexpr std::ptrdiff_t m_flVelocityModifier = 0x1C6C;
        constexpr std::ptrdiff_t m_ArmorValue = 0x1C7C;
        constexpr std::ptrdiff_t m_angEyeAngles = 0x3370;
        constexpr std::ptrdiff_t m_iIDEntIndex = 0x344C;
    }

    // CCSPlayerController
    namespace controller {
        constexpr std::ptrdiff_t m_iPing = 0x828;
        constexpr std::ptrdiff_t m_iCompTeammateColor = 0x848;
        constexpr std::ptrdiff_t m_szClan = 0x858;
        constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x860;
        constexpr std::ptrdiff_t m_hPlayerPawn = 0x90C;
        constexpr std::ptrdiff_t m_hObserverPawn = 0x910;
        constexpr std::ptrdiff_t m_bPawnIsAlive = 0x914;
        constexpr std::ptrdiff_t m_iPawnHealth = 0x918;
        constexpr std::ptrdiff_t m_iPawnArmor = 0x91C;
        constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x920;
        constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x921;
        constexpr std::ptrdiff_t m_iMVPs = 0x950;
        // Inherited from CBasePlayerController
        constexpr std::ptrdiff_t m_hPawn = 0x6BC;
        constexpr std::ptrdiff_t m_iszPlayerName = 0x6F4;    // char[128]
        constexpr std::ptrdiff_t m_steamID = 0x780;
        constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x788;
    }


    // Buttons (Module: client.dll)
    namespace buttons {
        constexpr std::ptrdiff_t attack = 0x204F990;
        constexpr std::ptrdiff_t attack2 = 0x204FA20;
        constexpr std::ptrdiff_t back = 0x204FC60;
        constexpr std::ptrdiff_t duck = 0x204FF30;
        constexpr std::ptrdiff_t forward = 0x204FBD0;
        constexpr std::ptrdiff_t jump = 0x204FEA0;
        constexpr std::ptrdiff_t left = 0x204FCF0;
        constexpr std::ptrdiff_t lookatweapon = 0x233FB20;
        constexpr std::ptrdiff_t reload = 0x204F900;
        constexpr std::ptrdiff_t right = 0x204FD80;
        constexpr std::ptrdiff_t showscores = 0x233FA00;
        constexpr std::ptrdiff_t sprint = 0x204F870;
        constexpr std::ptrdiff_t turnleft = 0x204FAB0;
        constexpr std::ptrdiff_t turnright = 0x204FB40;
        constexpr std::ptrdiff_t use = 0x204FE10;
        constexpr std::ptrdiff_t zoom = 0x233FA90;
    }
}
