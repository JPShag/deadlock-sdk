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
    class CNPC_SimpleAnimatingAI;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe88
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_ShieldedSentry : public server::CCitadelBaseAbility
    {
    public:
        // m_vecDeployedSentries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CNPC_SimpleAnimatingAI>> m_vecDeployedSentries;
        char m_vecDeployedSentries[0x18]; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb18[0x370];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ShieldedSentry because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ShieldedSentry) == 0xe88);
};
