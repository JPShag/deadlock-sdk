#pragma once
#include "source2sdk/client/C_FuncBrush.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xd20
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
    class C_FuncMonitor : public client::C_FuncBrush
    {
    public:
        // metadata: MNetworkEnable
        CUtlString m_targetCamera; // 0x860        
        // metadata: MNetworkEnable
        int32_t m_nResolutionEnum; // 0x868        
        // metadata: MNetworkEnable
        bool m_bRenderShadows; // 0x86c        
        // metadata: MNetworkEnable
        bool m_bUseUniqueColorTarget; // 0x86d        
        [[maybe_unused]] std::uint8_t pad_0x86e[0x2]; // 0x86e
        // metadata: MNetworkEnable
        CUtlString m_brushModelName; // 0x870        
        // metadata: MNetworkEnable
        // m_hTargetCamera has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTargetCamera;
        char m_hTargetCamera[0x4]; // 0x878        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x87c        
        // metadata: MNetworkEnable
        bool m_bDraw3DSkybox; // 0x87d        
        [[maybe_unused]] std::uint8_t pad_0x87e[0x4a2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_FuncMonitor because it is not a standard-layout class
    static_assert(sizeof(C_FuncMonitor) == 0xd20);
};