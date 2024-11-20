#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xc8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_NeutralShield : public server::CCitadelModifier
    {
    public:
        float m_flShieldActivateDelay; // 0xc0        
        entity2::GameTime_t m_timeEnemyDisappeared; // 0xc4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_NeutralShield because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_NeutralShield) == 0xc8);
};