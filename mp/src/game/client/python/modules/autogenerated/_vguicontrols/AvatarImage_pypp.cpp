// This file has been generated by Py++.

#include "cbase.h"
#include "__convenience.pypp.hpp"
#include "__call_policies.pypp.hpp"
#include "cbase.h"
#include "vgui_controls/Panel.h"
#include "vgui_controls/AnimationController.h"
#include "vgui_controls/EditablePanel.h"
#include "vgui_controls/AnalogBar.h"
#include "vgui_controls/Image.h"
#include "vgui_controls/TextImage.h"
#include "vgui_controls/ScrollBar.h"
#include "vgui_controls/ScrollBarSlider.h"
#include "vgui_controls/Menu.h"
#include "vgui_controls/MenuButton.h"
#include "vgui_controls/Frame.h"
#include "vgui_controls/TextEntry.h"
#include "vgui_controls/RichText.h"
#include "vgui_controls/Tooltip.h"
#include "vgui/IBorder.h"
#include "vgui_bitmapimage.h"
#include "vgui_avatarimage.h"
#include "srcpy_vgui.h"
#include "srcpy.h"
#include "tier0/memdbgon.h"
#include "AvatarImage_pypp.hpp"

namespace bp = boost::python;

static boost::python::tuple GetContentSize_4018c511fb723e75e66d04698ae389d4( ::CAvatarImage & inst ){
    int wide2;
    int tall2;
    inst.GetContentSize(wide2, tall2);
    return bp::make_tuple( wide2, tall2 );
}

static boost::python::tuple GetSize_69f7f625b2d0bcaac60f977200868e1c( ::CAvatarImage & inst ){
    int wide2;
    int tall2;
    inst.GetSize(wide2, tall2);
    return bp::make_tuple( wide2, tall2 );
}

void register_AvatarImage_class(){

    bp::class_< CAvatarImage, bp::bases< vgui::IImage >, boost::noncopyable >( "AvatarImage", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "ClearAvatarSteamID"
            , (void ( ::CAvatarImage::* )(  ) )( &::CAvatarImage::ClearAvatarSteamID ) )    
        .def( 
            "Evict"
            , (bool ( ::CAvatarImage::* )(  ) )( &::CAvatarImage::Evict ) )    
        .def( 
            "GetAvatarTall"
            , (int ( ::CAvatarImage::* )(  ) )( &::CAvatarImage::GetAvatarTall ) )    
        .def( 
            "GetAvatarWide"
            , (int ( ::CAvatarImage::* )(  ) )( &::CAvatarImage::GetAvatarWide ) )    
        .def( 
            "GetContentSize"
            , (boost::python::tuple (*)( ::CAvatarImage & ))( &GetContentSize_4018c511fb723e75e66d04698ae389d4 )
            , ( bp::arg("inst") ) )    
        .def( 
            "GetID"
            , (::vgui::HTexture ( ::CAvatarImage::* )(  ) )( &::CAvatarImage::GetID ) )    
        .def( 
            "GetNumFrames"
            , (int ( ::CAvatarImage::* )(  ) )( &::CAvatarImage::GetNumFrames ) )    
        .def( 
            "GetSize"
            , (boost::python::tuple (*)( ::CAvatarImage & ))( &GetSize_69f7f625b2d0bcaac60f977200868e1c )
            , ( bp::arg("inst") ) )    
        .def( 
            "GetTall"
            , (int ( ::CAvatarImage::* )(  ) )( &::CAvatarImage::GetTall ) )    
        .def( 
            "GetWide"
            , (int ( ::CAvatarImage::* )(  ) )( &::CAvatarImage::GetWide ) )    
        .def( 
            "IsValid"
            , (bool ( ::CAvatarImage::* )(  ) )( &::CAvatarImage::IsValid ) )    
        .def( 
            "Paint"
            , (void ( ::CAvatarImage::* )(  ) )( &::CAvatarImage::Paint ) )    
        .def( 
            "SetAvatarSize"
            , (void ( ::CAvatarImage::* )( int,int ) )( &::CAvatarImage::SetAvatarSize )
            , ( bp::arg("wide"), bp::arg("tall") ) )    
        .def( 
            "SetAvatarSteamID"
            , (bool ( ::CAvatarImage::* )( ::CSteamID,::EAvatarSize ) )( &::CAvatarImage::SetAvatarSteamID )
            , ( bp::arg("steamIDUser"), bp::arg("avatarSize")=::k_EAvatarSize32x32 ) )    
        .def( 
            "SetColor"
            , (void ( ::CAvatarImage::* )( ::Color ) )( &::CAvatarImage::SetColor )
            , ( bp::arg("col") ) )    
        .def( 
            "SetDefaultImage"
            , (void ( ::CAvatarImage::* )( ::vgui::IImage * ) )( &::CAvatarImage::SetDefaultImage )
            , ( bp::arg("pImage") ) )    
        .def( 
            "SetDrawFriend"
            , (void ( ::CAvatarImage::* )( bool ) )( &::CAvatarImage::SetDrawFriend )
            , ( bp::arg("drawFriend") ) )    
        .def( 
            "SetFrame"
            , (void ( ::CAvatarImage::* )( int ) )( &::CAvatarImage::SetFrame )
            , ( bp::arg("nFrame") ) )    
        .def( 
            "SetPos"
            , (void ( ::CAvatarImage::* )( int,int ) )( &::CAvatarImage::SetPos )
            , ( bp::arg("x"), bp::arg("y") ) )    
        .def( 
            "SetRotation"
            , (void ( ::CAvatarImage::* )( int ) )( &::CAvatarImage::SetRotation )
            , ( bp::arg("iRotation") ) )    
        .def( 
            "SetSize"
            , (void ( ::CAvatarImage::* )( int,int ) )( &::CAvatarImage::SetSize )
            , ( bp::arg("wide"), bp::arg("tall") ) )    
        .def( 
            "UpdateFriendStatus"
            , (void ( ::CAvatarImage::* )(  ) )( &::CAvatarImage::UpdateFriendStatus ) );

}
