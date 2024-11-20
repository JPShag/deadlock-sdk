#pragma once
#include "source2sdk/server/CFuncBrush.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x800
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CUtlString m_targetCamera"
    // static metadata: MNetworkVarNames "int m_nResolutionEnum"
    // static metadata: MNetworkVarNames "bool m_bRenderShadows"
    // static metadata: MNetworkVarNames "bool m_bUseUniqueColorTarget"
    // static metadata: MNetworkVarNames "CUtlString m_brushModelName"
    // static metadata: MNetworkVarNames "EHANDLE m_hTargetCamera"
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "bool m_bDraw3DSkybox"
    #pragma pack(push, 1)
    class CFuncMonitor : public server::CFuncBrush
    {
    public:
        // metadata: MNetworkEnable
        CUtlString m_targetCamera; // 0x7e0        
        // metadata: MNetworkEnable
        int32_t m_nResolutionEnum; // 0x7e8        
        // metadata: MNetworkEnable
        bool m_bRenderShadows; // 0x7ec        
        // metadata: MNetworkEnable
        bool m_bUseUniqueColorTarget; // 0x7ed        
        [[maybe_unused]] std::uint8_t pad_0x7ee[0x2]; // 0x7ee
        // metadata: MNetworkEnable
        CUtlString m_brushModelName; // 0x7f0        
        // metadata: MNetworkEnable
        // m_hTargetCamera has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetCamera;
        char m_hTargetCamera[0x4]; // 0x7f8        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x7fc        
        // metadata: MNetworkEnable
        bool m_bDraw3DSkybox; // 0x7fd        
        bool m_bStartEnabled; // 0x7fe        
        [[maybe_unused]] std::uint8_t pad_0x7ff[0x1];
        
        // Datamap fields:
        // void InputToggle; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // CUtlSymbolLarge InputSetCamera; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncMonitor because it is not a standard-layout class
    static_assert(sizeof(CFuncMonitor) == 0x800);
};