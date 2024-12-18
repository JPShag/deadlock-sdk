#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x508
    // Has VTable
    #pragma pack(push, 1)
    class CAI_ChangeHintGroup : public server::CBaseEntity
    {
    public:
        int32_t m_iSearchType; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4ec[0x4]; // 0x4ec
        CUtlSymbolLarge m_strSearchName; // 0x4f0        
        CUtlSymbolLarge m_strNewHintGroup; // 0x4f8        
        float m_flRadius; // 0x500        
        [[maybe_unused]] std::uint8_t pad_0x504[0x4];
        
        // Datamap fields:
        // void InputActivate; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_ChangeHintGroup because it is not a standard-layout class
    static_assert(sizeof(CAI_ChangeHintGroup) == 0x508);
};
