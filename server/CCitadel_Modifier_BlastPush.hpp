#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_BlastPush : public server::CCitadelModifier
    {
    public:
        Vector m_vPush; // 0xc0        
        float m_flPushVelocity; // 0xcc        
        float m_flMaxPushVelocity; // 0xd0        
        float m_flMaxPushVelocitySqr; // 0xd4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BlastPush because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BlastPush) == 0xd8);
};
