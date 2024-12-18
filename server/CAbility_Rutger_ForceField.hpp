#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xca8
    // Has VTable
    #pragma pack(push, 1)
    class CAbility_Rutger_ForceField : public server::CCitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_hChargingParticle; // 0xb00        
        client::ParticleIndex_t m_hExplodeParticle; // 0xb04        
        Vector m_vSpawnPos; // 0xb08        
        entity2::GameTime_t m_fTimeToDestroyForceField; // 0xb14        
        bool m_bFirstThink; // 0xb18        
        [[maybe_unused]] std::uint8_t pad_0xb19[0x18f];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Rutger_ForceField because it is not a standard-layout class
    static_assert(sizeof(CAbility_Rutger_ForceField) == 0xca8);
};
