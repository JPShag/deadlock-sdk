#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
    // Size: 0x1740
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_SettingSun_VData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_BeamTargetParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamTargetParticle;
        char m_BeamTargetParticle[0xe0]; // 0x1560        
        // m_UnitTargetParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UnitTargetParticle;
        char m_UnitTargetParticle[0xe0]; // 0x1640        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SettingSunThinkerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_SettingSunThinkerModifier;
        char m_SettingSunThinkerModifier[0x10]; // 0x1720        
        float m_flSSCameraPreviewOffset; // 0x1730        
        float m_flSSCameraPreviewSpeed; // 0x1734        
        float m_flSSCameraPreviewDistance; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_SettingSun_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_SettingSun_VData) == 0x1740);
};