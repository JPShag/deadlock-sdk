#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x9d0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_StickyBombAttachedVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_BombAttachedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BombAttachedParticle;
        char m_BombAttachedParticle[0xe0]; // 0x608        
        // m_StunAttachedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StunAttachedParticle;
        char m_StunAttachedParticle[0xe0]; // 0x6e8        
        // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
        char m_ExplodeParticle[0xe0]; // 0x7c8        
        // m_BombAttachedVictimTeamParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BombAttachedVictimTeamParticle;
        char m_BombAttachedVictimTeamParticle[0xe0]; // 0x8a8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strExplodeSound; // 0x988        
        CSoundEventName m_strTickTockSound; // 0x998        
        CSoundEventName m_strTickTockFastSound; // 0x9a8        
        // metadata: MPropertyGroupName "Modifiers"
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x9b8        
        float m_DetonateWarningTime; // 0x9c8        
        [[maybe_unused]] std::uint8_t pad_0x9cc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_StickyBombAttachedVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_StickyBombAttachedVData) == 0x9d0);
};
