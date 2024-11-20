#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/C_LightGlowOverlay.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x978
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByUserGroup "Origin"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_angRotation"
    // static metadata: MNetworkIncludeByName "m_clrRender"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "uint32 m_nHorizontalSize"
    // static metadata: MNetworkVarNames "uint32 m_nVerticalSize"
    // static metadata: MNetworkVarNames "uint32 m_nMinDist"
    // static metadata: MNetworkVarNames "uint32 m_nMaxDist"
    // static metadata: MNetworkVarNames "uint32 m_nOuterMaxDist"
    // static metadata: MNetworkVarNames "float32 m_flGlowProxySize"
    // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
    #pragma pack(push, 1)
    class C_LightGlow : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        uint32_t m_nHorizontalSize; // 0x860        
        // metadata: MNetworkEnable
        uint32_t m_nVerticalSize; // 0x864        
        // metadata: MNetworkEnable
        uint32_t m_nMinDist; // 0x868        
        // metadata: MNetworkEnable
        uint32_t m_nMaxDist; // 0x86c        
        // metadata: MNetworkEnable
        uint32_t m_nOuterMaxDist; // 0x870        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "6"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "64.000000"
        // metadata: MNetworkEncodeFlags "2"
        float m_flGlowProxySize; // 0x874        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "100.000000"
        // metadata: MNetworkChangeCallback "OnHDRColorScaleChanged"
        float m_flHDRColorScale; // 0x878        
        [[maybe_unused]] std::uint8_t pad_0x87c[0x4]; // 0x87c
        client::C_LightGlowOverlay m_GlowOverlay; // 0x880        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LightGlow because it is not a standard-layout class
    static_assert(sizeof(C_LightGlow) == 0x978);
};