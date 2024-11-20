#pragma once
#include "source2sdk/client/CCitadel_Ability_BaseHeldItem.hpp"
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
    // Size: 0xd10
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_GoldenIdol : public client::CCitadel_Ability_BaseHeldItem
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xca0[0x70];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Ability_GoldenIdol) == 0xd10);
};