#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
    // Size: 0xcc0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Thumper_1 : public server::CCitadelBaseAbility
    {
    public:
        // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEntities;
        char m_vecHitEntities[0x18]; // 0xb00        
        Vector m_vecAimPos; // 0xb18        
        Vector m_vecAimNormal; // 0xb24        
        float m_flPushForce; // 0xb30        
        [[maybe_unused]] std::uint8_t pad_0xb34[0x18c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Thumper_1 because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Thumper_1) == 0xcc0);
};
