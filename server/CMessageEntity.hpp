#pragma once
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x500
    // Has VTable
    #pragma pack(push, 1)
    class CMessageEntity : public server::CPointEntity
    {
    public:
        int32_t m_radius; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4ec[0x4]; // 0x4ec
        CUtlSymbolLarge m_messageText; // 0x4f0        
        bool m_drawText; // 0x4f8        
        bool m_bDeveloperOnly; // 0x4f9        
        bool m_bEnabled; // 0x4fa        
        [[maybe_unused]] std::uint8_t pad_0x4fb[0x5];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // CUtlSymbolLarge InputSetMessage; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMessageEntity because it is not a standard-layout class
    static_assert(sizeof(CMessageEntity) == 0x500);
};
