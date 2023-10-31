#pragma once

#include "4dm.h"

// AudioManager

#define FUNC_AUDIOMANAGER_LOADSOUND (base + idaOffsetFix(0x67D0))
#define FUNC_AUDIOMANAGER_PLAYSOUND4D (base + idaOffsetFix(0x6A80))
#define FUNC_AUDIOMANAGER_SETLISTENERINFO4D (base + idaOffsetFix(0x6DD0))
#define FUNC_AUDIOMANAGER_LOADBGMFROMJSON (base + idaOffsetFix(0x7290))
#define FUNC_AUDIOMANAGER_UPDATEBGM (base + idaOffsetFix(0x7760))
#define FUNC_AUDIOMANAGER_GETSOUND (base + idaOffsetFix(0x78A0))
#define FUNC_AUDIOMANAGER_GETVOICEGROUPINFO (base + idaOffsetFix(0x7930))

// Hitbox

#define FUNC_HITBOX_ADDVELWITHMAXHORIZSPEED (base + idaOffsetFix(0x83440))
#define FUNC_HITBOX_UPDATE (base + idaOffsetFix(0x83760))
#define FUNC_HITBOX_ISINTERSECTINGRAY (base + idaOffsetFix(0x83FD0))
#define FUNC_HITBOX_TAKESTEP (base + idaOffsetFix(0x842C0))

// KleinBottle

#define FUNC_KLEINBOTTLE_BUFFDATA (base + idaOffsetFix(0x4A9F0))
#define FUNC_KLEINBOTTLE_ATTRSIZE (base + idaOffsetFix(0x92F50))
#define FUNC_KLEINBOTTLE_KLEINBOTTLE (base + idaOffsetFix(0x9CF80))
#define FUNC_KLEINBOTTLE_BUFFSIZE (base + idaOffsetFix(0x9DC60))
#define FUNC_KLEINBOTTLE_DESTR_KLEINBOTTLE (base + idaOffsetFix(0x9EED0))

// Connection::InMessage

#define FUNC_CONNECTION_INMESSAGE_INMESSAGEDELETER (base + idaOffsetFix(0x4FC40))
#define FUNC_CONNECTION_INMESSAGE_DESTR_INMESSAGE (base + idaOffsetFix(0x1F680))

// Connection::OutMessage

#define FUNC_CONNECTION_OUTMESSAGE_CREATEMESSAGE (base + idaOffsetFix(0x4FB90))
#define FUNC_CONNECTION_OUTMESSAGE_OUTMESSAGE (base + idaOffsetFix(0x4FB00))
#define FUNC_CONNECTION_OUTMESSAGE_RELEASEHEAPMESSAGEDATA (base + idaOffsetFix(0x4FC00))

// FontRenderer

#define FUNC_FONTRENDERER_FONTRENDERER (base + idaOffsetFix(0x7B650))
#define FUNC_FONTRENDERER_FONTRENDERER_A (base + idaOffsetFix(0x7B7F0))
#define FUNC_FONTRENDERER_SETTEXT (base + idaOffsetFix(0x7B8A0))
#define FUNC_FONTRENDERER_RENDER (base + idaOffsetFix(0x7B930))
#define FUNC_FONTRENDERER_UPDATEMODEL (base + idaOffsetFix(0x7BA50))
#define FUNC_FONTRENDERER_MOVE (base + idaOffsetFix(0x7BB20))

// TexRenderer

#define FUNC_TEXRENDERER_DESTR_TEXRENDERER (base + idaOffsetFix(0xDEDA0))
#define FUNC_TEXRENDERER_OPERATOREQ (base + idaOffsetFix(0xDEDF0))
#define FUNC_TEXRENDERER_INIT (base + idaOffsetFix(0xDEEA0))
#define FUNC_TEXRENDERER_SETCLIP (base + idaOffsetFix(0xDF370))
#define FUNC_TEXRENDERER_SETCOLOR (base + idaOffsetFix(0xDF4A0))
#define FUNC_TEXRENDERER_SETPOS (base + idaOffsetFix(0xDF580))

// Dodecaplex

#define FUNC_DODECAPLEX_BUFFCOUNT (base + idaOffsetFix(0x70FD0))
#define FUNC_DODECAPLEX_BUFFDATA (base + idaOffsetFix(0x70FE0))
#define FUNC_DODECAPLEX_BUFFSIZE (base + idaOffsetFix(0x71000))
#define FUNC_DODECAPLEX_ATTRSIZE (base + idaOffsetFix(0x71050))
#define FUNC_DODECAPLEX_GENERATEMESH (base + idaOffsetFix(0x71070))
#define FUNC_DODECAPLEX_GENERATECELLCOLORS (base + idaOffsetFix(0x73440))
#define FUNC_DODECAPLEX_ADDFACES (base + idaOffsetFix(0x73640))
#define FUNC_DODECAPLEX_ADDCELLS (base + idaOffsetFix(0x740A0))
#define FUNC_DODECAPLEX_DESTR_DODECAPLEX (base + idaOffsetFix(0xCC9F0))

// Skybox

#define FUNC_SKYBOX_BUFFDATA (base + idaOffsetFix(0xCF4A0))
#define FUNC_SKYBOX_BUFFSIZE (base + idaOffsetFix(0xCF4C0))
#define FUNC_SKYBOX_ATTRSIZE (base + idaOffsetFix(0xCF4D0))
#define FUNC_SKYBOX_VERTCOUNT (base + idaOffsetFix(0xCF4E0))

// PentachoronHollow

#define FUNC_PENTACHORONHOLLOW_BUFFDATA (base + idaOffsetFix(0x3C380))
#define FUNC_PENTACHORONHOLLOW_PENTACHORONHOLLOW (base + idaOffsetFix(0xCB550))
#define FUNC_PENTACHORONHOLLOW_BUFFSIZE (base + idaOffsetFix(0xCB940))
#define FUNC_PENTACHORONHOLLOW_VERTCOUNT (base + idaOffsetFix(0xCB970))
#define FUNC_PENTACHORONHOLLOW_ADDTETSIDE (base + idaOffsetFix(0xCB9C0))

// Hypersphere::VertInfo

#define FUNC_HYPERSPHERE_VERTINFO_VERTINFO (base + idaOffsetFix(0x8E1E0))
#define FUNC_HYPERSPHERE_VERTINFO_DESTR_VERTINFO (base + idaOffsetFix(0x8E200))
#define FUNC_HYPERSPHERE_VERTINFO_ADD (base + idaOffsetFix(0x92E10))
#define FUNC_HYPERSPHERE_VERTINFO_ADD_A (base + idaOffsetFix(0x92E80))

// Hypersphere

#define FUNC_HYPERSPHERE_ATTRCOUNT (base + idaOffsetFix(0x3C370))
#define FUNC_HYPERSPHERE_ATTRTYPE (base + idaOffsetFix(0x44F20))
#define FUNC_HYPERSPHERE_BUFFCOUNT (base + idaOffsetFix(0x4A9E0))
#define FUNC_HYPERSPHERE_HYPERSPHERE (base + idaOffsetFix(0x8C410))
#define FUNC_HYPERSPHERE_HYPERSPHERE_A (base + idaOffsetFix(0x8E2D0))
#define FUNC_HYPERSPHERE_GENERATESPHEREPOLYGONS (base + idaOffsetFix(0x920E0))
#define FUNC_HYPERSPHERE_ADDWEDGESIDE (base + idaOffsetFix(0x92B40))
#define FUNC_HYPERSPHERE_ADDCUBESIDE (base + idaOffsetFix(0x92C60))

// MeshRenderer

#define FUNC_MESHRENDERER_MESHRENDERER (base + idaOffsetFix(0xABA90))
#define FUNC_MESHRENDERER_SETMESH (base + idaOffsetFix(0xABAB0))
#define FUNC_MESHRENDERER_UPDATEMESH (base + idaOffsetFix(0xABAE0))
#define FUNC_MESHRENDERER_DESTR_MESHRENDERER (base + idaOffsetFix(0xABBE0))
#define FUNC_MESHRENDERER_RENDER (base + idaOffsetFix(0xABC00))
#define FUNC_MESHRENDERER_INIT (base + idaOffsetFix(0xABC70))
#define FUNC_MESHRENDERER_CLEANUP (base + idaOffsetFix(0xABD80))
#define FUNC_MESHRENDERER_INITATTRS (base + idaOffsetFix(0xABDF0))

// PlayerSkin::SkinMesh

#define FUNC_PLAYERSKIN_SKINMESH_VERTCOUNT (base + idaOffsetFix(0x3C420))
#define FUNC_PLAYERSKIN_SKINMESH_DESTR_SKINMESH (base + idaOffsetFix(0x5DBE0))
#define FUNC_PLAYERSKIN_SKINMESH_GENERATE (base + idaOffsetFix(0x5DC90))
#define FUNC_PLAYERSKIN_SKINMESH_BUFFSIZE (base + idaOffsetFix(0x5ECE0))
#define FUNC_PLAYERSKIN_SKINMESH_ATTRCOUNT (base + idaOffsetFix(0x5ECF0))
#define FUNC_PLAYERSKIN_SKINMESH_ATTRTYPE (base + idaOffsetFix(0x5ED00))
#define FUNC_PLAYERSKIN_SKINMESH_ATTRSIZE (base + idaOffsetFix(0x5ED20))
#define FUNC_PLAYERSKIN_SKINMESH_ATTRSTRIDE (base + idaOffsetFix(0x5ED40))
#define FUNC_PLAYERSKIN_SKINMESH_ADDPIXELTOFACE (base + idaOffsetFix(0x5ED50))

// PlayerSkin

#define FUNC_PLAYERSKIN_LOAD (base + idaOffsetFix(0x5D900))
#define FUNC_PLAYERSKIN_GENERATEMESH (base + idaOffsetFix(0x5D9E0))
#define FUNC_PLAYERSKIN_DESTR_PLAYERSKIN (base + idaOffsetFix(0xC0EA0))

// Tex2D

#define FUNC_TEX2D_DESTR_TEX2D (base + idaOffsetFix(0xDF7F0))
#define FUNC_TEX2D_LOADRAWIMAGEDATA (base + idaOffsetFix(0xDF820))
#define FUNC_TEX2D_INITFROMTEXID (base + idaOffsetFix(0xDF940))
#define FUNC_TEX2D_LOADARRAYTEXTURE (base + idaOffsetFix(0xDFA30))

// StateCredits

#define FUNC_STATECREDITS_INIT (base + idaOffsetFix(0x6D140))
#define FUNC_STATECREDITS_UPDATE (base + idaOffsetFix(0x6DCA0))
#define FUNC_STATECREDITS_RENDER (base + idaOffsetFix(0x6DD40))
#define FUNC_STATECREDITS_WINDOWRESIZE (base + idaOffsetFix(0x6F200))
#define FUNC_STATECREDITS_KEYINPUT (base + idaOffsetFix(0x6F210))
#define FUNC_STATECREDITS_UPDATEPROJECTION (base + idaOffsetFix(0x6F270))

// StateCreateWorld

#define FUNC_STATECREATEWORLD_STATECREATEWORLD (base + idaOffsetFix(0x6A1A0))
#define FUNC_STATECREATEWORLD_INIT (base + idaOffsetFix(0x6A6F0))
#define FUNC_STATECREATEWORLD_CLOSE (base + idaOffsetFix(0x6B1A0))
#define FUNC_STATECREATEWORLD_UPDATE (base + idaOffsetFix(0x6B1B0))
#define FUNC_STATECREATEWORLD_RENDER (base + idaOffsetFix(0x6B230))
#define FUNC_STATECREATEWORLD_RESUME (base + idaOffsetFix(0x6B410))
#define FUNC_STATECREATEWORLD_MOUSEINPUT (base + idaOffsetFix(0x6B480))
#define FUNC_STATECREATEWORLD_SCROLLINPUT (base + idaOffsetFix(0x6B4A0))
#define FUNC_STATECREATEWORLD_KEYINPUT (base + idaOffsetFix(0x6B4E0))
#define FUNC_STATECREATEWORLD_WINDOWRESIZE (base + idaOffsetFix(0x6B560))
#define FUNC_STATECREATEWORLD_CHARINPUT (base + idaOffsetFix(0x6B590))
#define FUNC_STATECREATEWORLD_CREATENEWWORLD (base + idaOffsetFix(0x6BB40))
#define FUNC_STATECREATEWORLD_VIEWPORTCALLBACK (base + idaOffsetFix(0x6BCD0))
#define FUNC_STATECREATEWORLD_CAVECHECKBOXCALLBACK (base + idaOffsetFix(0x6BD60))
#define FUNC_STATECREATEWORLD_HANDLECREATEBUTTON (base + idaOffsetFix(0x6C010))

// StateTitleScreen

#define FUNC_STATETITLESCREEN_QUITGAMEBUTTONCALLBACK (base + idaOffsetFix(0x6BAF0))
#define FUNC_STATETITLESCREEN_SETTINGSBUTTONCALLBACK (base + idaOffsetFix(0xB1360))
#define FUNC_STATETITLESCREEN_STATETITLESCREEN (base + idaOffsetFix(0xDFC70))
#define FUNC_STATETITLESCREEN_UPDATEPROJECTION (base + idaOffsetFix(0xE0030))
#define FUNC_STATETITLESCREEN_SINGLEPLAYERBUTTONCALLBACK (base + idaOffsetFix(0xE0590))
#define FUNC_STATETITLESCREEN_MULTIPLAYERPLAYERBUTTONCALLBACK (base + idaOffsetFix(0xE0620))
#define FUNC_STATETITLESCREEN_CREDITSBUTTONCALLBACK (base + idaOffsetFix(0xE06B0))
#define FUNC_STATETITLESCREEN_TUTORIALBUTTONCALLBACK (base + idaOffsetFix(0xE0740))
#define FUNC_STATETITLESCREEN_INIT (base + idaOffsetFix(0xE07D0))
#define FUNC_STATETITLESCREEN_CLOSE (base + idaOffsetFix(0xE1460))
#define FUNC_STATETITLESCREEN_UPDATE (base + idaOffsetFix(0xE1510))
#define FUNC_STATETITLESCREEN_RENDER (base + idaOffsetFix(0xE1650))
#define FUNC_STATETITLESCREEN_PAUSE (base + idaOffsetFix(0xE1E50))
#define FUNC_STATETITLESCREEN_RESUME (base + idaOffsetFix(0xE1E60))
#define FUNC_STATETITLESCREEN_KEYINPUT (base + idaOffsetFix(0xE1ED0))
#define FUNC_STATETITLESCREEN_WINDOWRESIZE (base + idaOffsetFix(0xE1F60))
#define FUNC_STATETITLESCREEN_MOUSEINPUT (base + idaOffsetFix(0xE1F70))
#define FUNC_STATETITLESCREEN_MOUSEBUTTONINPUT (base + idaOffsetFix(0xE1F90))
#define FUNC_STATETITLESCREEN_RENDERBACKGROUND (base + idaOffsetFix(0xE1FC0))

// StateGame

#define FUNC_STATEGAME_STATEGAME (base + idaOffsetFix(0x7CE40))
#define FUNC_STATEGAME_RESETMOUSE (base + idaOffsetFix(0x7D660))
#define FUNC_STATEGAME_UPDATEPROJECTION2D (base + idaOffsetFix(0x7D710))
#define FUNC_STATEGAME_VIEWPORTCALLBACK (base + idaOffsetFix(0x7DBC0))
#define FUNC_STATEGAME_UPDATECHATMESSAGES (base + idaOffsetFix(0x7DC50))
#define FUNC_STATEGAME_INIT (base + idaOffsetFix(0x7DDD0))
#define FUNC_STATEGAME_CLOSE (base + idaOffsetFix(0x7EC40))
#define FUNC_STATEGAME_PAUSE (base + idaOffsetFix(0x7ECE0))
#define FUNC_STATEGAME_RESUME (base + idaOffsetFix(0x7ED30))
#define FUNC_STATEGAME_UPDATE (base + idaOffsetFix(0x7EDF0))
#define FUNC_STATEGAME_RENDER (base + idaOffsetFix(0x7EF70))
#define FUNC_STATEGAME_MOUSEINPUT (base + idaOffsetFix(0x80D90))
#define FUNC_STATEGAME_SCROLLINPUT (base + idaOffsetFix(0x80DE0))
#define FUNC_STATEGAME_MOUSEBUTTONINPUT (base + idaOffsetFix(0x80EE0))
#define FUNC_STATEGAME_KEYINPUT (base + idaOffsetFix(0x80F40))
#define FUNC_STATEGAME_WINDOWRESIZE (base + idaOffsetFix(0x815C0))
#define FUNC_STATEGAME_CHARINPUT (base + idaOffsetFix(0x81640))
#define FUNC_STATEGAME_UPDATEPROJECTION (base + idaOffsetFix(0x81680))
#define FUNC_STATEGAME_SETWORLD (base + idaOffsetFix(0x82A90))
#define FUNC_STATEGAME_ADDCHATMESSAGE (base + idaOffsetFix(0x82B40))

// StateWorldGen

#define FUNC_STATEWORLDGEN_UPDATEPROJECTION (base + idaOffsetFix(0x100230))
#define FUNC_STATEWORLDGEN_INIT (base + idaOffsetFix(0x100420))
#define FUNC_STATEWORLDGEN_UPDATE (base + idaOffsetFix(0x100960))
#define FUNC_STATEWORLDGEN_RENDER (base + idaOffsetFix(0x100AC0))
#define FUNC_STATEWORLDGEN_WINDOWRESIZE (base + idaOffsetFix(0x1017D0))

// StateMultiplayer

#define FUNC_STATEMULTIPLAYER_DESTR_STATEMULTIPLAYER (base + idaOffsetFix(0xAC0D0))
#define FUNC_STATEMULTIPLAYER_STATEMULTIPLAYER (base + idaOffsetFix(0xAC260))
#define FUNC_STATEMULTIPLAYER_UPDATEPROJECTION (base + idaOffsetFix(0xAC8F0))
#define FUNC_STATEMULTIPLAYER_CANCELBUTTONCALLBACK (base + idaOffsetFix(0xACE20))
#define FUNC_STATEMULTIPLAYER_CHANGESKINBUTTONCALLBACK (base + idaOffsetFix(0xACF20))
#define FUNC_STATEMULTIPLAYER_JOINBUTTONCALLBACK (base + idaOffsetFix(0xACFB0))
#define FUNC_STATEMULTIPLAYER_VIEWPORTCALLBACK (base + idaOffsetFix(0xACFC0))
#define FUNC_STATEMULTIPLAYER_UUIDCOPYBUTTONCALLBACK (base + idaOffsetFix(0xAD050))
#define FUNC_STATEMULTIPLAYER_INIT (base + idaOffsetFix(0xAD0A0))
#define FUNC_STATEMULTIPLAYER_CLOSE (base + idaOffsetFix(0xAE590))
#define FUNC_STATEMULTIPLAYER_UPDATE (base + idaOffsetFix(0xAEC30))
#define FUNC_STATEMULTIPLAYER_RENDER (base + idaOffsetFix(0xAFCD0))
#define FUNC_STATEMULTIPLAYER_MOUSEINPUT (base + idaOffsetFix(0xB0020))
#define FUNC_STATEMULTIPLAYER_SCROLLINPUT (base + idaOffsetFix(0xB0040))
#define FUNC_STATEMULTIPLAYER_MOUSEBUTTONINPUT (base + idaOffsetFix(0xB0060))
#define FUNC_STATEMULTIPLAYER_KEYINPUT (base + idaOffsetFix(0xB0080))
#define FUNC_STATEMULTIPLAYER_WINDOWRESIZE (base + idaOffsetFix(0xB0100))
#define FUNC_STATEMULTIPLAYER_CHARINPUT (base + idaOffsetFix(0xB0150))
#define FUNC_STATEMULTIPLAYER_REJOIN (base + idaOffsetFix(0xB0250))
#define FUNC_STATEMULTIPLAYER_CONNECT (base + idaOffsetFix(0xB0470))
#define FUNC_STATEMULTIPLAYER_CONNECTIONERROROKBUTTONCALLBACK (base + idaOffsetFix(0xB0640))

// StateSingleplayer

#define FUNC_STATESINGLEPLAYER_MOUSEBUTTONINPUT (base + idaOffsetFix(0x6B4C0))
#define FUNC_STATESINGLEPLAYER_UPDATEPROJECTION (base + idaOffsetFix(0x6B5C0))
#define FUNC_STATESINGLEPLAYER_STATESINGLEPLAYER (base + idaOffsetFix(0xCCDD0))
#define FUNC_STATESINGLEPLAYER_UPDATEWORLDLISTCONTAINER (base + idaOffsetFix(0xCD0A0))
#define FUNC_STATESINGLEPLAYER_CREATECALLBACK (base + idaOffsetFix(0xCD1C0))
#define FUNC_STATESINGLEPLAYER_VIEWPORTCALLBACK (base + idaOffsetFix(0xCD250))
#define FUNC_STATESINGLEPLAYER_WORLDBUTTONCALLBACK (base + idaOffsetFix(0xCD2E0))
#define FUNC_STATESINGLEPLAYER_INIT (base + idaOffsetFix(0xCD2F0))
#define FUNC_STATESINGLEPLAYER_CLOSE (base + idaOffsetFix(0xCE5C0))
#define FUNC_STATESINGLEPLAYER_UPDATE (base + idaOffsetFix(0xCE5F0))
#define FUNC_STATESINGLEPLAYER_RESUME (base + idaOffsetFix(0xCE7C0))
#define FUNC_STATESINGLEPLAYER_WINDOWRESIZE (base + idaOffsetFix(0xCE840))
#define FUNC_STATESINGLEPLAYER_QUEUEWORLDLOAD (base + idaOffsetFix(0xCE8A0))

// StateDeathScreen

#define FUNC_STATEDEATHSCREEN_UPDATEPROJECTION (base + idaOffsetFix(0x6FAB0))
#define FUNC_STATEDEATHSCREEN_RETRYBUTTONCALLBACK (base + idaOffsetFix(0x6FE70))
#define FUNC_STATEDEATHSCREEN_INIT (base + idaOffsetFix(0x6FFC0))
#define FUNC_STATEDEATHSCREEN_CLOSE (base + idaOffsetFix(0x70830))
#define FUNC_STATEDEATHSCREEN_UPDATE (base + idaOffsetFix(0x70840))
#define FUNC_STATEDEATHSCREEN_RENDER (base + idaOffsetFix(0x70900))
#define FUNC_STATEDEATHSCREEN_MOUSEINPUT (base + idaOffsetFix(0x70EC0))
#define FUNC_STATEDEATHSCREEN_SCROLLINPUT (base + idaOffsetFix(0x70EE0))
#define FUNC_STATEDEATHSCREEN_MOUSEBUTTONINPUT (base + idaOffsetFix(0x70F00))
#define FUNC_STATEDEATHSCREEN_KEYINPUT (base + idaOffsetFix(0x70F20))
#define FUNC_STATEDEATHSCREEN_WINDOWRESIZE (base + idaOffsetFix(0x70FA0))

// StateErrorScreen

#define FUNC_STATEERRORSCREEN_OKBUTTONCALLBACK (base + idaOffsetFix(0x6FED0))
#define FUNC_STATEERRORSCREEN_INIT (base + idaOffsetFix(0x7C3D0))
#define FUNC_STATEERRORSCREEN_CLOSE (base + idaOffsetFix(0x7C920))
#define FUNC_STATEERRORSCREEN_UPDATE (base + idaOffsetFix(0x7C930))
#define FUNC_STATEERRORSCREEN_RENDER (base + idaOffsetFix(0x7C9C0))
#define FUNC_STATEERRORSCREEN_MOUSEBUTTONINPUT (base + idaOffsetFix(0x7CBE0))
#define FUNC_STATEERRORSCREEN_WINDOWRESIZE (base + idaOffsetFix(0x7CC80))

// StateIntro

#define FUNC_STATEINTRO_UPDATEPROJECTION (base + idaOffsetFix(0x94350))
#define FUNC_STATEINTRO_LOADFILES (base + idaOffsetFix(0x94690))
#define FUNC_STATEINTRO_INIT (base + idaOffsetFix(0x948F0))
#define FUNC_STATEINTRO_UPDATE (base + idaOffsetFix(0x94ED0))
#define FUNC_STATEINTRO_RENDER (base + idaOffsetFix(0x95200))
#define FUNC_STATEINTRO_WINDOWRESIZE (base + idaOffsetFix(0x95DF0))

// StateTutorial

#define FUNC_STATETUTORIAL_DESTR_STATETUTORIAL (base + idaOffsetFix(0xED010))
#define FUNC_STATETUTORIAL_STATETUTORIAL (base + idaOffsetFix(0xED2D0))
#define FUNC_STATETUTORIAL_UPDATEPROJECTION (base + idaOffsetFix(0xED630))
#define FUNC_STATETUTORIAL_BACKBUTTONCALLBACK (base + idaOffsetFix(0xEDD10))
#define FUNC_STATETUTORIAL_NEXTBUTTONCALLBACK (base + idaOffsetFix(0xEDD80))
#define FUNC_STATETUTORIAL_GENERATEMESH (base + idaOffsetFix(0xEDDF0))
#define FUNC_STATETUTORIAL_GETSMOOTHLIGHTING (base + idaOffsetFix(0xEEEE0))
#define FUNC_STATETUTORIAL_UPDATEPLAYERCOMPONENTVECTORS (base + idaOffsetFix(0xEF3F0))
#define FUNC_STATETUTORIAL_UPDATEPLAYERPOS (base + idaOffsetFix(0xEF4E0))
#define FUNC_STATETUTORIAL_UPDATECURRENTBLOCK (base + idaOffsetFix(0xEFF60))
#define FUNC_STATETUTORIAL_HANDLECOLLISION (base + idaOffsetFix(0xF00B0))
#define FUNC_STATETUTORIAL_SETFORGSPRITE (base + idaOffsetFix(0xF0840))
#define FUNC_STATETUTORIAL_INIT (base + idaOffsetFix(0xF0E10))
#define FUNC_STATETUTORIAL_CLOSE (base + idaOffsetFix(0xF18C0))
#define FUNC_STATETUTORIAL_UPDATE (base + idaOffsetFix(0xF1910))
#define FUNC_STATETUTORIAL_RENDER (base + idaOffsetFix(0xF1EA0))
#define FUNC_STATETUTORIAL_RESUME (base + idaOffsetFix(0xF3E50))
#define FUNC_STATETUTORIAL_MOUSEINPUT (base + idaOffsetFix(0xF3EC0))
#define FUNC_STATETUTORIAL_SCROLLINPUT (base + idaOffsetFix(0xF3F90))
#define FUNC_STATETUTORIAL_MOUSEBUTTONINPUT (base + idaOffsetFix(0xF3FB0))
#define FUNC_STATETUTORIAL_KEYINPUT (base + idaOffsetFix(0xF40B0))
#define FUNC_STATETUTORIAL_WINDOWRESIZE (base + idaOffsetFix(0xF4280))
#define FUNC_STATETUTORIAL_CHARINPUT (base + idaOffsetFix(0xF42B0))
#define FUNC_STATETUTORIAL_UPDATEVIEWPORT (base + idaOffsetFix(0xF42E0))

// StateTutorialSlideshow

#define FUNC_STATETUTORIALSLIDESHOW_DESTR_STATETUTORIALSLIDESHOW (base + idaOffsetFix(0xEA010))
#define FUNC_STATETUTORIALSLIDESHOW_STATETUTORIALSLIDESHOW (base + idaOffsetFix(0xEA250))
#define FUNC_STATETUTORIALSLIDESHOW_UPDATEPROJECTION (base + idaOffsetFix(0xEABC0))
#define FUNC_STATETUTORIALSLIDESHOW_UPDATESLIDESIZE (base + idaOffsetFix(0xEB350))
#define FUNC_STATETUTORIALSLIDESHOW_VIEWPORTCALLBACK (base + idaOffsetFix(0xEB430))
#define FUNC_STATETUTORIALSLIDESHOW_INIT (base + idaOffsetFix(0xEB4C0))
#define FUNC_STATETUTORIALSLIDESHOW_UPDATE (base + idaOffsetFix(0xECA20))
#define FUNC_STATETUTORIALSLIDESHOW_RENDER (base + idaOffsetFix(0xECA80))
#define FUNC_STATETUTORIALSLIDESHOW_RESUME (base + idaOffsetFix(0xECD90))
#define FUNC_STATETUTORIALSLIDESHOW_WINDOWRESIZE (base + idaOffsetFix(0xECE10))
#define FUNC_STATETUTORIALSLIDESHOW_CONTINUEBUTTONCALLBACK (base + idaOffsetFix(0xECE70))
#define FUNC_STATETUTORIALSLIDESHOW_BACKBUTTONCALLBACK (base + idaOffsetFix(0xECE90))
#define FUNC_STATETUTORIALSLIDESHOW_SETSLIDE (base + idaOffsetFix(0xECEB0))

// StateSkinChooser

#define FUNC_STATESKINCHOOSER_MOUSEINPUT (base + idaOffsetFix(0x7CBA0))
#define FUNC_STATESKINCHOOSER_SCROLLINPUT (base + idaOffsetFix(0x7CBC0))
#define FUNC_STATESKINCHOOSER_KEYINPUT (base + idaOffsetFix(0x7CC00))
#define FUNC_STATESKINCHOOSER_STATESKINCHOOSER (base + idaOffsetFix(0xDD100))
#define FUNC_STATESKINCHOOSER_UPDATEPROJECTION (base + idaOffsetFix(0xDD420))
#define FUNC_STATESKINCHOOSER_VIEWPORTCALLBACK (base + idaOffsetFix(0xDDBA0))
#define FUNC_STATESKINCHOOSER_CHOOSEFILEBUTTONCALLBACK (base + idaOffsetFix(0xDDC30))
#define FUNC_STATESKINCHOOSER_INIT (base + idaOffsetFix(0xDDE00))
#define FUNC_STATESKINCHOOSER_CLOSE (base + idaOffsetFix(0xDE420))
#define FUNC_STATESKINCHOOSER_UPDATE (base + idaOffsetFix(0xDE450))
#define FUNC_STATESKINCHOOSER_RENDER (base + idaOffsetFix(0xDE520))
#define FUNC_STATESKINCHOOSER_WINDOWRESIZE (base + idaOffsetFix(0xDE710))
#define FUNC_STATESKINCHOOSER_FILEDROP (base + idaOffsetFix(0xDE780))
#define FUNC_STATESKINCHOOSER_GETSKINMESSAGE (base + idaOffsetFix(0xDE8F0))
#define FUNC_STATESKINCHOOSER_LOADSKIN (base + idaOffsetFix(0xDEAE0))

// StateSettings

#define FUNC_STATESETTINGS_UPDATEPROJECTION (base + idaOffsetFix(0x7C010))
#define FUNC_STATESETTINGS_DESTR_STATESETTINGS (base + idaOffsetFix(0xC5040))
#define FUNC_STATESETTINGS_STATESETTINGS (base + idaOffsetFix(0xC5210))
#define FUNC_STATESETTINGS_GETSETTING (base + idaOffsetFix(0xC5E80))
#define FUNC_STATESETTINGS_RENDERDISTANCESLIDERCALLBACK (base + idaOffsetFix(0xC5EB0))
#define FUNC_STATESETTINGS_SCROLLSENSITIVITYSLIDERCALLBACK (base + idaOffsetFix(0xC5EC0))
#define FUNC_STATESETTINGS_LOOKSENSITIVITYSLIDERCALLBACK (base + idaOffsetFix(0xC5ED0))
#define FUNC_STATESETTINGS_XINVERTCHECKBOXCALLBACK (base + idaOffsetFix(0xC5EE0))
#define FUNC_STATESETTINGS_YINVERTCHECKBOXCALLBACK (base + idaOffsetFix(0xC5EF0))
#define FUNC_STATESETTINGS_FOVSLIDERCALLBACK (base + idaOffsetFix(0xC5F00))
#define FUNC_STATESETTINGS_GLOBALVOLUMESLIDERCALLBACK (base + idaOffsetFix(0xC5F10))
#define FUNC_STATESETTINGS_MUSICVOLUMESLIDERCALLBACK (base + idaOffsetFix(0xC5F40))
#define FUNC_STATESETTINGS_CREATUREVOLUMESLIDERCALLBACK (base + idaOffsetFix(0xC5FA0))
#define FUNC_STATESETTINGS_AMBIENCEVOLUMESLIDERCALLBACK (base + idaOffsetFix(0xC5FB0))
#define FUNC_STATESETTINGS_CONTROLSBUTTONCALLBACK (base + idaOffsetFix(0xC5FC0))
#define FUNC_STATESETTINGS_CONTROLSOKBUTTONCALLBACK (base + idaOffsetFix(0xC5FD0))
#define FUNC_STATESETTINGS_FULLSCREENBUTTONCALLBACK (base + idaOffsetFix(0xC5FE0))
#define FUNC_STATESETTINGS_DIFFICULTYSLIDERCALLBACK (base + idaOffsetFix(0xC6000))
#define FUNC_STATESETTINGS_SMOOTHLIGHTINGCHECKBOXCALLBACK (base + idaOffsetFix(0xC6010))
#define FUNC_STATESETTINGS_SHADOWSCHECKBOXCALLBACK (base + idaOffsetFix(0xC6020))
#define FUNC_STATESETTINGS_LIGHTSCHECKBOXCALLBACK (base + idaOffsetFix(0xC6030))
#define FUNC_STATESETTINGS_CHATCHECKBOXCALLBACK (base + idaOffsetFix(0xC6040))
#define FUNC_STATESETTINGS_NAMETAGSCHECKBOXCALLBACK (base + idaOffsetFix(0xC60D0))
#define FUNC_STATESETTINGS_SKINSCHECKBOXCALLBACK (base + idaOffsetFix(0xC60E0))
#define FUNC_STATESETTINGS_SECRETBUTTONCALLBACK (base + idaOffsetFix(0xC60F0))
#define FUNC_STATESETTINGS_VIEWPORTCALLBACK (base + idaOffsetFix(0xC6100))
#define FUNC_STATESETTINGS_UPDATESTATEGAME (base + idaOffsetFix(0xC6190))
#define FUNC_STATESETTINGS_UPDATEVOLUME (base + idaOffsetFix(0xC6220))
#define FUNC_STATESETTINGS_LOAD (base + idaOffsetFix(0xC62D0))
#define FUNC_STATESETTINGS_SAVE (base + idaOffsetFix(0xC7130))
#define FUNC_STATESETTINGS_INIT (base + idaOffsetFix(0xC78C0))
#define FUNC_STATESETTINGS_CLOSE (base + idaOffsetFix(0xC9110))
#define FUNC_STATESETTINGS_RENDER (base + idaOffsetFix(0xC9160))
#define FUNC_STATESETTINGS_MOUSEINPUT (base + idaOffsetFix(0xC9370))
#define FUNC_STATESETTINGS_SCROLLINPUT (base + idaOffsetFix(0xC93A0))
#define FUNC_STATESETTINGS_MOUSEBUTTONINPUT (base + idaOffsetFix(0xC93D0))
#define FUNC_STATESETTINGS_KEYINPUT (base + idaOffsetFix(0xC9400))
#define FUNC_STATESETTINGS_WINDOWRESIZE (base + idaOffsetFix(0xC94B0))
#define FUNC_STATESETTINGS_UPDATERENDERDISTANCE (base + idaOffsetFix(0xC95D0))
#define FUNC_STATESETTINGS_UPDATEFOV (base + idaOffsetFix(0xC96B0))
#define FUNC_STATESETTINGS_UPDATECREATUREVOLUME (base + idaOffsetFix(0xC97C0))
#define FUNC_STATESETTINGS_UPDATEAMBIENCEVOLUME (base + idaOffsetFix(0xC9850))
#define FUNC_STATESETTINGS_UPDATEDIFFICULTY (base + idaOffsetFix(0xC98E0))
#define FUNC_STATESETTINGS_SETFULLSCREENMODE (base + idaOffsetFix(0xC99C0))

// StatePause

#define FUNC_STATEPAUSE_STATEPAUSE (base + idaOffsetFix(0xB0DA0))
#define FUNC_STATEPAUSE_UPDATEPROJECTION (base + idaOffsetFix(0xB0FA0))
#define FUNC_STATEPAUSE_UPDATE (base + idaOffsetFix(0xB1A70))
#define FUNC_STATEPAUSE_RENDER (base + idaOffsetFix(0xB1B20))
#define FUNC_STATEPAUSE_PAUSE (base + idaOffsetFix(0xB1D20))
#define FUNC_STATEPAUSE_RESUME (base + idaOffsetFix(0xB1D30))
#define FUNC_STATEPAUSE_WINDOWRESIZE (base + idaOffsetFix(0xB1D40))

// StateCredits

#define FUNC_STATECREDITS_INIT_A (base + idaOffsetFix(0x6D140))
#define FUNC_STATECREDITS_UPDATE_A (base + idaOffsetFix(0x6DCA0))
#define FUNC_STATECREDITS_RENDER_A (base + idaOffsetFix(0x6DD40))
#define FUNC_STATECREDITS_WINDOWRESIZE_A (base + idaOffsetFix(0x6F200))
#define FUNC_STATECREDITS_KEYINPUT_A (base + idaOffsetFix(0x6F210))
#define FUNC_STATECREDITS_UPDATEPROJECTION_A (base + idaOffsetFix(0x6F270))

// StateManager

#define FUNC_STATEMANAGER_PUSHSTATE (base + idaOffsetFix(0xD35E0))

// m4::Mat5

#define FUNC_M4_MAT5_OPERATORIND (base + idaOffsetFix(0x67C0))
#define FUNC_M4_MAT5_MAT5 (base + idaOffsetFix(0xAA8A0))
#define FUNC_M4_MAT5_MAT5_A (base + idaOffsetFix(0xAA8E0))
#define FUNC_M4_MAT5_TOJSON (base + idaOffsetFix(0xAA990))
#define FUNC_M4_MAT5_OPERATORMULT (base + idaOffsetFix(0xAB0C0))
#define FUNC_M4_MAT5_OPERATORMULTEQ (base + idaOffsetFix(0xAB1B0))
#define FUNC_M4_MAT5_MULTIPLY (base + idaOffsetFix(0xAB250))
#define FUNC_M4_MAT5_OPERATORMULT_A (base + idaOffsetFix(0xAB320))
#define FUNC_M4_MAT5_TRANSLATE (base + idaOffsetFix(0xAB340))
#define FUNC_M4_MAT5_SCALE (base + idaOffsetFix(0xAB440))

// m4::Rotor

#define FUNC_M4_ROTOR_ROTOR (base + idaOffsetFix(0xA9D00))
#define FUNC_M4_ROTOR_ROTOR_A (base + idaOffsetFix(0xA9E50))
#define FUNC_M4_ROTOR_OPERATORMULTEQ (base + idaOffsetFix(0xA9F10))
#define FUNC_M4_ROTOR_ROTATE (base + idaOffsetFix(0xAA2A0))
#define FUNC_M4_ROTOR_NORMALIZE (base + idaOffsetFix(0xAA730))

// m4::BiVector4

#define FUNC_M4_BIVECTOR4_BIVECTOR4 (base + idaOffsetFix(0x274C0))
#define FUNC_M4_BIVECTOR4_BIVECTOR4_A (base + idaOffsetFix(0xA9690))
#define FUNC_M4_BIVECTOR4_TOJSON (base + idaOffsetFix(0xA9940))
#define FUNC_M4_BIVECTOR4_NORMALIZE (base + idaOffsetFix(0xA9AD0))

// m4::

#define FUNC_M4_I64VEC3TOJSON (base + idaOffsetFix(0x3EC70))
#define FUNC_M4_IVEC4TOJSON (base + idaOffsetFix(0x25BA0))
//#define FUNC_M4_IVEC4FROMJSON (base + idaOffsetFix(0x25BA0))
#define FUNC_M4_VEC4TOJSON (base + idaOffsetFix(0x2B1F0))
#define FUNC_M4_VEC4FROMJSON (base + idaOffsetFix(0x2AFC0))
#define FUNC_M4_CROSS (base + idaOffsetFix(0xA94D0))
#define FUNC_M4_ADJUSTTOMAXHORIZSPEED (base + idaOffsetFix(0xAB700))

// Item

#define FUNC_ITEM_LOADITEMINFO (base + idaOffsetFix(0x99CD0))
#define FUNC_ITEM_RENDERITEM (base + idaOffsetFix(0x9A510))
#define FUNC_ITEM_RENDERITEMDESCRIPTION (base + idaOffsetFix(0x9A6A0))
#define FUNC_ITEM_CREATEFROMJSON (base + idaOffsetFix(0x9ABE0))
#define FUNC_ITEM_GIVEMAX (base + idaOffsetFix(0x9ADB0))
#define FUNC_ITEM_GIVEONE (base + idaOffsetFix(0x9AEA0))
#define FUNC_ITEM_INSTANTIATEITEM (base + idaOffsetFix(0x9B010))
#define FUNC_ITEM_COMBINEITEMATTRIBUTES (base + idaOffsetFix(0x9B170))
#define FUNC_ITEM_SAVE (base + idaOffsetFix(0x9B3E0))
#define FUNC_ITEM_DESTR_ITEM (base + idaOffsetFix(0x9B500))
#define FUNC_ITEM_TAKEMAX (base + idaOffsetFix(0x9B510))
#define FUNC_ITEM_TAKEHALF (base + idaOffsetFix(0x9B5D0))

// World

#define FUNC_WORLD_WORLD (base + idaOffsetFix(0xF5050))
#define FUNC_WORLD_GETCHUNK (base + idaOffsetFix(0xF6B40))
#define FUNC_WORLD_GETCHUNKFROMCOORDS (base + idaOffsetFix(0xF6C10))
#define FUNC_WORLD_GETENTITYINTERSECTION (base + idaOffsetFix(0xF6DF0))
#define FUNC_WORLD_CASTRAY (base + idaOffsetFix(0xF7490))
#define FUNC_WORLD_ADDENTITYTOCHUNK (base + idaOffsetFix(0xF8440))

// BlockInfo::ItemMesh

#define FUNC_BLOCKINFO_ITEMMESH_DESTR_ITEMMESH (base + idaOffsetFix(0x195B0))

// BlockInfo

#define FUNC_BLOCKINFO_RENDERITEMMESH (base + idaOffsetFix(0x19B10))

// ItemBlock

#define FUNC_ITEMBLOCK_RENDER (base + idaOffsetFix(0x26BC0))
#define FUNC_ITEMBLOCK_RENDERENTITY (base + idaOffsetFix(0x26C80))
#define FUNC_ITEMBLOCK_ISDEADLY (base + idaOffsetFix(0x27060))
#define FUNC_ITEMBLOCK_ISCOMPATIBLE (base + idaOffsetFix(0x27070))
#define FUNC_ITEMBLOCK_SAVEATTRIBUTES (base + idaOffsetFix(0x270D0))
#define FUNC_ITEMBLOCK_ACTION (base + idaOffsetFix(0x27100))
#define FUNC_ITEMBLOCK_POSTACTION (base + idaOffsetFix(0x273D0))
#define FUNC_ITEMBLOCK_CLONE (base + idaOffsetFix(0x27400))

// ItemTool

#define FUNC_ITEMTOOL_RENDER (base + idaOffsetFix(0xE4050))
#define FUNC_ITEMTOOL_RENDERENTITY (base + idaOffsetFix(0xE42B0))
#define FUNC_ITEMTOOL_ISDEADLY (base + idaOffsetFix(0xE9380))
#define FUNC_ITEMTOOL_ISCOMPATIBLE (base + idaOffsetFix(0xE9400))
#define FUNC_ITEMTOOL_GETSTACKLIMIT (base + idaOffsetFix(0xE9480))
#define FUNC_ITEMTOOL_ACTION (base + idaOffsetFix(0xE94C0))
#define FUNC_ITEMTOOL_BREAKBLOCK (base + idaOffsetFix(0xE96A0))
#define FUNC_ITEMTOOL_ENTITYACTION (base + idaOffsetFix(0xE9E50))
#define FUNC_ITEMTOOL_CLONE (base + idaOffsetFix(0xE9FA0))

// ItemMaterial

#define FUNC_ITEMMATERIAL_GETSTACKLIMIT (base + idaOffsetFix(0x270C0))
#define FUNC_ITEMMATERIAL_GETNAME (base + idaOffsetFix(0x9EFA0))
#define FUNC_ITEMMATERIAL_RENDER (base + idaOffsetFix(0x9EFC0))
#define FUNC_ITEMMATERIAL_RENDERENTITY (base + idaOffsetFix(0x9F310))
#define FUNC_ITEMMATERIAL_ISDEADLY (base + idaOffsetFix(0xA32A0))
#define FUNC_ITEMMATERIAL_ISCOMPATIBLE (base + idaOffsetFix(0xA3340))
#define FUNC_ITEMMATERIAL_ACTION (base + idaOffsetFix(0xA33C0))
#define FUNC_ITEMMATERIAL_POSTACTION (base + idaOffsetFix(0xA3880))
#define FUNC_ITEMMATERIAL_CLONE (base + idaOffsetFix(0xA3900))

// Chunk::ChunkMesh

#define FUNC_CHUNK_CHUNKMESH_DESTR_CHUNKMESH (base + idaOffsetFix(0x2DC40))
#define FUNC_CHUNK_CHUNKMESH_CHUNKMESH (base + idaOffsetFix(0x3C340))
#define FUNC_CHUNK_CHUNKMESH_BUFFSIZE (base + idaOffsetFix(0x3C390))
#define FUNC_CHUNK_CHUNKMESH_ATTRCOUNT (base + idaOffsetFix(0x3C3C0))
#define FUNC_CHUNK_CHUNKMESH_ATTRTYPE (base + idaOffsetFix(0x3C3D0))
#define FUNC_CHUNK_CHUNKMESH_ATTRSIZE (base + idaOffsetFix(0x3C3E0))
#define FUNC_CHUNK_CHUNKMESH_ATTRSTRIDE (base + idaOffsetFix(0x3C410))
#define FUNC_CHUNK_CHUNKMESH_INDEXBUFFDATA (base + idaOffsetFix(0x3C430))
#define FUNC_CHUNK_CHUNKMESH_MOVE (base + idaOffsetFix(0x3C450))
#define FUNC_CHUNK_CHUNKMESH_ADDMESHSIDE (base + idaOffsetFix(0x3C530))
#define FUNC_CHUNK_CHUNKMESH_ADDMESHPLANT (base + idaOffsetFix(0x3C710))

// Chunk

#define FUNC_CHUNK_CHUNK (base + idaOffsetFix(0x2DA10))
#define FUNC_CHUNK_SETBLOCK (base + idaOffsetFix(0x2DCB0))
#define FUNC_CHUNK_GENERATEMESH (base + idaOffsetFix(0x2DD90))
#define FUNC_CHUNK_UPDATEENTITIESCLIENT (base + idaOffsetFix(0x2DEF0))
#define FUNC_CHUNK_CLEARENTITIES (base + idaOffsetFix(0x2E1C0))
#define FUNC_CHUNK_RENDER (base + idaOffsetFix(0x2E280))
#define FUNC_CHUNK_UPDATELIGHTINGHEIGHTMAP (base + idaOffsetFix(0x2EBC0))
#define FUNC_CHUNK_UPDATEMESH (base + idaOffsetFix(0x2ECA0))
#define FUNC_CHUNK_LOAD (base + idaOffsetFix(0x2EE90))
#define FUNC_CHUNK_SAVE (base + idaOffsetFix(0x2FF50))
#define FUNC_CHUNK_LOADFROMMESSAGE (base + idaOffsetFix(0x30890))
#define FUNC_CHUNK_UPDATECACHESECTION (base + idaOffsetFix(0x30A30))
#define FUNC_CHUNK_UPDATEHEIGHTMAPCACHESECTION (base + idaOffsetFix(0x38310))
#define FUNC_CHUNK_GENERATEMESHSECTION (base + idaOffsetFix(0x38B00))
#define FUNC_CHUNK_GETSMOOTHLIGHTING (base + idaOffsetFix(0x3A8D0))
#define FUNC_CHUNK_GETLIGHTING (base + idaOffsetFix(0x3BD20))
#define FUNC_CHUNK_ENABLEMESH (base + idaOffsetFix(0x3BF20))
#define FUNC_CHUNK_LOADENTITIESFROMJSON (base + idaOffsetFix(0x3C0E0))
#define FUNC_CHUNK_GETFILENAMEPREFIX (base + idaOffsetFix(0x3C220))

// ChunkLoader::BiomeInfo

#define FUNC_CHUNKLOADER_BIOMEINFO_DESTR_BIOMEINFO (base + idaOffsetFix(0xD5710))
#define FUNC_CHUNKLOADER_BIOMEINFO_BIOMEINFO (base + idaOffsetFix(0xDD000))

// ChunkLoader

#define FUNC_CHUNKLOADER_INIT (base + idaOffsetFix(0xD3790))
#define FUNC_CHUNKLOADER_LOADCHUNK (base + idaOffsetFix(0xD3970))
#define FUNC_CHUNKLOADER_LOADBIOMES (base + idaOffsetFix(0xD3F90))
#define FUNC_CHUNKLOADER_LOADINFO (base + idaOffsetFix(0xD5810))
#define FUNC_CHUNKLOADER_GENERATECHUNK (base + idaOffsetFix(0xD6430))
#define FUNC_CHUNKLOADER_GETBIOME (base + idaOffsetFix(0xD7350))
#define FUNC_CHUNKLOADER_GENERATETREE (base + idaOffsetFix(0xD7690))
#define FUNC_CHUNKLOADER_GENERATETREEBRANCH (base + idaOffsetFix(0xD7D40))
#define FUNC_CHUNKLOADER_GENERATETAIGATREE (base + idaOffsetFix(0xD86E0))
#define FUNC_CHUNKLOADER_CREATEFLATWORLDCHESTS (base + idaOffsetFix(0xD8A70))

// CloudChunk::CloudChunkMesh

#define FUNC_CLOUDCHUNK_CLOUDCHUNKMESH_INDEXBUFFSIZE (base + idaOffsetFix(0x3C440))
#define FUNC_CLOUDCHUNK_CLOUDCHUNKMESH_BUFFSIZE (base + idaOffsetFix(0x44F10))
#define FUNC_CLOUDCHUNK_CLOUDCHUNKMESH_ATTRSIZE (base + idaOffsetFix(0x44F30))
#define FUNC_CLOUDCHUNK_CLOUDCHUNKMESH_ATTRSTRIDE (base + idaOffsetFix(0x44F40))
#define FUNC_CLOUDCHUNK_CLOUDCHUNKMESH_MOVE (base + idaOffsetFix(0x44F50))
#define FUNC_CLOUDCHUNK_CLOUDCHUNKMESH_DESTR_CLOUDCHUNKMESH (base + idaOffsetFix(0x45010))

// CloudChunk

#define FUNC_CLOUDCHUNK_GENERATEMESH (base + idaOffsetFix(0x450C0))

// CloudManager

#define FUNC_CLOUDMANAGER_DESTR_CLOUDMANAGER (base + idaOffsetFix(0x45710))
#define FUNC_CLOUDMANAGER_RENDER (base + idaOffsetFix(0x457A0))
#define FUNC_CLOUDMANAGER_UPDATECHUNKS (base + idaOffsetFix(0x45B80))
#define FUNC_CLOUDMANAGER_UNLOADALLCHUNKS (base + idaOffsetFix(0x46F50))
#define FUNC_CLOUDMANAGER_LOADCHUNKS (base + idaOffsetFix(0x47020))
#define FUNC_CLOUDMANAGER_UPDATECHUNK (base + idaOffsetFix(0x47340))

// CraftingMenu::CraftableRecipe

#define FUNC_CRAFTINGMENU_CRAFTABLERECIPE_DESTR_CRAFTABLERECIPE (base + idaOffsetFix(0x5B4F0))
#define FUNC_CRAFTINGMENU_CRAFTABLERECIPE_CRAFTABLERECIPE (base + idaOffsetFix(0x5C070))

// CraftingMenu

#define FUNC_CRAFTINGMENU_LOADRECIPES (base + idaOffsetFix(0x5A270))
#define FUNC_CRAFTINGMENU_RENDER (base + idaOffsetFix(0x5A700))
#define FUNC_CRAFTINGMENU_OFFSETX (base + idaOffsetFix(0x5ABA0))
#define FUNC_CRAFTINGMENU_OFFSETY (base + idaOffsetFix(0x5ABB0))
#define FUNC_CRAFTINGMENU_GETPOS (base + idaOffsetFix(0x5ABC0))
#define FUNC_CRAFTINGMENU_GETSIZE (base + idaOffsetFix(0x5ACA0))
#define FUNC_CRAFTINGMENU_MOUSEBUTTONINPUT (base + idaOffsetFix(0x5AD50))
#define FUNC_CRAFTINGMENU_UPDATEAVAILABLERECIPES (base + idaOffsetFix(0x5AE90))

// Entity

#define FUNC_ENTITY_LOADENTITYINFO (base + idaOffsetFix(0x78500))
#define FUNC_ENTITY_CREATEFROMJSON (base + idaOffsetFix(0x78F20))
#define FUNC_ENTITY_CREATEWITHATTRIBUTES (base + idaOffsetFix(0x791F0))
#define FUNC_ENTITY_SAVE (base + idaOffsetFix(0x792D0))
#define FUNC_ENTITY_INSTANTIATEENTITY (base + idaOffsetFix(0x79ED0))
#define FUNC_ENTITY_COMBINEENTITYATTRIBUTES (base + idaOffsetFix(0x7A780))
#define FUNC_ENTITY_DESTR_ENTITY (base + idaOffsetFix(0x7A9F0))

// InventoryPlayer

#define FUNC_INVENTORYPLAYER_ADDITEM (base + idaOffsetFix(0x96800))
#define FUNC_INVENTORYPLAYER_BEGIN (base + idaOffsetFix(0x96A50))
#define FUNC_INVENTORYPLAYER_RENDER (base + idaOffsetFix(0xC3B90))
#define FUNC_INVENTORYPLAYER_COMBINEITEM (base + idaOffsetFix(0xC3BC0))
#define FUNC_INVENTORYPLAYER_PLACEITEM (base + idaOffsetFix(0xC3C30))
#define FUNC_INVENTORYPLAYER_GETSLOTINDEX (base + idaOffsetFix(0xC3CA0))
#define FUNC_INVENTORYPLAYER_GETSLOTCOUNT (base + idaOffsetFix(0xC3CF0))
#define FUNC_INVENTORYPLAYER_GETSLOT (base + idaOffsetFix(0xC3D20))
#define FUNC_INVENTORYPLAYER_END (base + idaOffsetFix(0xC3D90))

// InventoryGrid

#define FUNC_INVENTORYGRID_DESTR_INVENTORYGRID (base + idaOffsetFix(0x2BB40))
#define FUNC_INVENTORYGRID_INVENTORYGRID (base + idaOffsetFix(0x96360))
#define FUNC_INVENTORYGRID_RENDER (base + idaOffsetFix(0x96410))
#define FUNC_INVENTORYGRID_COMBINEITEM (base + idaOffsetFix(0x96870))
#define FUNC_INVENTORYGRID_PLACEITEM (base + idaOffsetFix(0x96920))
#define FUNC_INVENTORYGRID_GETSLOTINDEX (base + idaOffsetFix(0x96970))
#define FUNC_INVENTORYGRID_GETSLOTCOUNT (base + idaOffsetFix(0x969E0))
#define FUNC_INVENTORYGRID_GETSLOT (base + idaOffsetFix(0x969F0))
#define FUNC_INVENTORYGRID_END (base + idaOffsetFix(0x96A60))
#define FUNC_INVENTORYGRID_LOAD (base + idaOffsetFix(0x96A80))
#define FUNC_INVENTORYGRID_SAVE (base + idaOffsetFix(0x96C60))

// InventorySession

#define FUNC_INVENTORYSESSION_DESTR_INVENTORYSESSION (base + idaOffsetFix(0x96F00))

// InventoryManager

#define FUNC_INVENTORYMANAGER_DESTR_INVENTORYMANAGER (base + idaOffsetFix(0x7CD50))
#define FUNC_INVENTORYMANAGER_RENDERINIT (base + idaOffsetFix(0x96F20))
#define FUNC_INVENTORYMANAGER_MOUSEBUTTONINPUT (base + idaOffsetFix(0x973D0))
#define FUNC_INVENTORYMANAGER_WINDOWRESIZE (base + idaOffsetFix(0x97AB0))
#define FUNC_INVENTORYMANAGER_APPLYACTION (base + idaOffsetFix(0x97B60))
#define FUNC_INVENTORYMANAGER_APPLYTRANSFER (base + idaOffsetFix(0x98D70))
#define FUNC_INVENTORYMANAGER_FINDINVENTORY (base + idaOffsetFix(0x98EF0))
#define FUNC_INVENTORYMANAGER_UPDATECRAFTINGMENUBOX (base + idaOffsetFix(0x99190))
#define FUNC_INVENTORYMANAGER_CRAFTINGMENUCALLBACK (base + idaOffsetFix(0x99240))
#define FUNC_INVENTORYMANAGER_VIEWPORTCALLBACK (base + idaOffsetFix(0x995A0))
#define FUNC_INVENTORYMANAGER_UPDATEPROJECTION (base + idaOffsetFix(0x99600))

// MeshBuilder

#define FUNC_MESHBUILDER_MESHBUILDER (base + idaOffsetFix(0x84AD0))
#define FUNC_MESHBUILDER_MESHBUILDER_A (base + idaOffsetFix(0x84B00))
#define FUNC_MESHBUILDER_DESTR_MESHBUILDER (base + idaOffsetFix(0x84C70))
#define FUNC_MESHBUILDER_BUFFCOUNT (base + idaOffsetFix(0x84C90))
#define FUNC_MESHBUILDER_BUFFSIZE (base + idaOffsetFix(0x84CD0))
#define FUNC_MESHBUILDER_ATTRCOUNT (base + idaOffsetFix(0x84CE0))
#define FUNC_MESHBUILDER_VERTCOUNT (base + idaOffsetFix(0x84D10))
#define FUNC_MESHBUILDER_INDEXBUFFSIZE (base + idaOffsetFix(0x84D30))
#define FUNC_MESHBUILDER_ADDBUFF (base + idaOffsetFix(0x84D40))
#define FUNC_MESHBUILDER_ATTRTYPE (base + idaOffsetFix(0x84DC0))
#define FUNC_MESHBUILDER_ATTRSIZE (base + idaOffsetFix(0x84DE0))
#define FUNC_MESHBUILDER_ATTRSTRIDE (base + idaOffsetFix(0x84E00))
#define FUNC_MESHBUILDER_ADDATTR (base + idaOffsetFix(0x84E20))
#define FUNC_MESHBUILDER_CLEAR (base + idaOffsetFix(0x84E70))

// Player

#define FUNC_PLAYER_DESTR_PLAYER (base + idaOffsetFix(0x7CCB0))
#define FUNC_PLAYER_PLAYER (base + idaOffsetFix(0x7D1A0))
#define FUNC_PLAYER_UPDATEPOS (base + idaOffsetFix(0xB1D70))
#define FUNC_PLAYER_UPDATECURRENTBLOCK (base + idaOffsetFix(0xB2BA0))
#define FUNC_PLAYER_HANDLECOLLISION (base + idaOffsetFix(0xB2CD0))
#define FUNC_PLAYER_UPDATECOMPONENTVECTORS (base + idaOffsetFix(0xB3F80))
#define FUNC_PLAYER_UPDATEALLCOMPONENTVECTORS (base + idaOffsetFix(0xB4710))
#define FUNC_PLAYER_REMOVEVELCOMP (base + idaOffsetFix(0xB4810))
#define FUNC_PLAYER_UPDATETARGETBLOCK (base + idaOffsetFix(0xB4CC0))
#define FUNC_PLAYER_INIT (base + idaOffsetFix(0xB58A0))
#define FUNC_PLAYER_RENDERHUD (base + idaOffsetFix(0xB5DC0))
#define FUNC_PLAYER_RENDERTARGETBLOCK (base + idaOffsetFix(0xB7720))
#define FUNC_PLAYER_GETMOVEMENTUPDATE (base + idaOffsetFix(0xB7DF0))
#define FUNC_PLAYER_SETMOVEMENTBEHAVIOR (base + idaOffsetFix(0xB92A0))
#define FUNC_PLAYER_HITTARGETBLOCK (base + idaOffsetFix(0xB9790))
#define FUNC_PLAYER_BREAKBLOCK (base + idaOffsetFix(0xB9890))
#define FUNC_PLAYER_THROWITEM (base + idaOffsetFix(0xB9D20))
#define FUNC_PLAYER_UPDATE (base + idaOffsetFix(0xBA010))
#define FUNC_PLAYER_UPDATELOCAL (base + idaOffsetFix(0xBACB0))
#define FUNC_PLAYER_UPDATECAMERAPOS (base + idaOffsetFix(0xBB380))
#define FUNC_PLAYER_RESETMOUSE (base + idaOffsetFix(0xBC210))
#define FUNC_PLAYER_KEYINPUT (base + idaOffsetFix(0xBC2F0))
#define FUNC_PLAYER_MOUSEINPUT (base + idaOffsetFix(0xBCB50))
#define FUNC_PLAYER_MOUSEBUTTONINPUT (base + idaOffsetFix(0xBD410))
#define FUNC_PLAYER_ISHOLDINGGLASSES (base + idaOffsetFix(0xBD5F0))
#define FUNC_PLAYER_ISHOLDINGCOMPASS (base + idaOffsetFix(0xBD700))
#define FUNC_PLAYER_ISHOLDINGCOLLECTOR (base + idaOffsetFix(0xBD780))
#define FUNC_PLAYER_HEADISINBLOCK (base + idaOffsetFix(0xBD800))
#define FUNC_PLAYER_GETHEADBLOCK (base + idaOffsetFix(0xBD820))
#define FUNC_PLAYER_RESPAWN (base + idaOffsetFix(0xBD840))
#define FUNC_PLAYER_LOAD (base + idaOffsetFix(0xBD9F0))
#define FUNC_PLAYER_SAVE (base + idaOffsetFix(0xBDEA0))
#define FUNC_PLAYER_LOADCLIENTDATA (base + idaOffsetFix(0xBF080))
#define FUNC_PLAYER_SAVECLIENTDATA (base + idaOffsetFix(0xBF400))
#define FUNC_PLAYER_SAVEORIENTATION (base + idaOffsetFix(0xC0680))

// QuadRenderer

#define FUNC_QUADRENDERER_DESTR_QUADRENDERER (base + idaOffsetFix(0xC3DE0))
#define FUNC_QUADRENDERER_INIT (base + idaOffsetFix(0xC3E30))
#define FUNC_QUADRENDERER_SETCOLOR (base + idaOffsetFix(0xC4250))
#define FUNC_QUADRENDERER_SETPOS (base + idaOffsetFix(0xC4330))

// ResourceManager

#define FUNC_RESOURCEMANAGER_LOADARRAYTEXTURE (base + idaOffsetFix(0xC47F0))
#define FUNC_RESOURCEMANAGER_GET (base + idaOffsetFix(0xC45A0))

// ShaderManager

#define FUNC_SHADERMANAGER_LOADFROMSHADERLIST (base + idaOffsetFix(0xCA290))

// Shader

#define FUNC_SHADER_LOAD (base + idaOffsetFix(0xC9BA0))
#define FUNC_SHADER_COMPILESHADER (base + idaOffsetFix(0xC9CD0))

// Tex2D

#define FUNC_TEX2D_DESTR_TEX2D_A (base + idaOffsetFix(0xDF7F0))
#define FUNC_TEX2D_LOADRAWIMAGEDATA_A (base + idaOffsetFix(0xDF820))
#define FUNC_TEX2D_INITFROMTEXID_A (base + idaOffsetFix(0xDF940))
#define FUNC_TEX2D_LOADARRAYTEXTURE_A (base + idaOffsetFix(0xDFA30))

// WorldManager

#define FUNC_WORLDMANAGER_DESTR_WORLDMANAGER (base + idaOffsetFix(0xF4FF0))
#define FUNC_WORLDMANAGER_UPDATERENDERFRUSTUM (base + idaOffsetFix(0x1017E0))
#define FUNC_WORLDMANAGER_SETBLOCKUPDATE (base + idaOffsetFix(0x101D10))
#define FUNC_WORLDMANAGER_RENDER (base + idaOffsetFix(0x1025C0))

// WorldClient

#define FUNC_WORLDCLIENT_DESTR_WORLDCLIENT (base + idaOffsetFix(0xF8980))
#define FUNC_WORLDCLIENT_ADDENTITYTOCHUNK (base + idaOffsetFix(0xF8B20))
#define FUNC_WORLDCLIENT_LOCALPLAYEREVENT (base + idaOffsetFix(0xF8D10))
#define FUNC_WORLDCLIENT_UPDATELOCAL (base + idaOffsetFix(0xF9770))
#define FUNC_WORLDCLIENT_SETRENDERDISTANCELOCAL (base + idaOffsetFix(0xF9BD0))
#define FUNC_WORLDCLIENT_SETSKINVISIBILITY (base + idaOffsetFix(0xF9CA0))
#define FUNC_WORLDCLIENT_LOCALPLAYERINIT (base + idaOffsetFix(0xFA060))
#define FUNC_WORLDCLIENT_LOCALPLAYERRESPAWN (base + idaOffsetFix(0xFA090))
#define FUNC_WORLDCLIENT_SENDCHATMESSAGE (base + idaOffsetFix(0xFA2D0))
#define FUNC_WORLDCLIENT_UPDATEPHYSICS (base + idaOffsetFix(0xFA3C0))
#define FUNC_WORLDCLIENT_HANDLEWORLDMESSAGE (base + idaOffsetFix(0xFA520))
#define FUNC_WORLDCLIENT_HANDLELIGHTINGOPTIONSUPDATE (base + idaOffsetFix(0xFCD30))
#define FUNC_WORLDCLIENT_UPDATECHUNKS (base + idaOffsetFix(0xFCE50))
#define FUNC_WORLDCLIENT_UPDATECHUNK (base + idaOffsetFix(0xFE2D0))
#define FUNC_WORLDCLIENT_GENERATECHUNKMESHES (base + idaOffsetFix(0xFE5E0))
#define FUNC_WORLDCLIENT_UPDATECHUNKCACHEANDMESH (base + idaOffsetFix(0xFECA0))
#define FUNC_WORLDCLIENT_UPDATECHUNKCACHE (base + idaOffsetFix(0xFECF0))
#define FUNC_WORLDCLIENT_REGENERATEALLCHUNKMESHES (base + idaOffsetFix(0xFF260))
#define FUNC_WORLDCLIENT_JOINALLCHUNKLOADINGTHREADS (base + idaOffsetFix(0xFF2F0))
#define FUNC_WORLDCLIENT_HANDLEMESSAGE (base + idaOffsetFix(0xFF3A0))
#define FUNC_WORLDCLIENT_INVENTORYUPDATECALLBACK (base + idaOffsetFix(0xFFBA0))

// WorldSingleplayer

#define FUNC_WORLDSINGLEPLAYER_WORLDSINGLEPLAYER (base + idaOffsetFix(0x102A60))
#define FUNC_WORLDSINGLEPLAYER_DESTR_WORLDSINGLEPLAYER (base + idaOffsetFix(0x102BE0))
#define FUNC_WORLDSINGLEPLAYER_LOCALPLAYEREVENT (base + idaOffsetFix(0x102E40))
#define FUNC_WORLDSINGLEPLAYER_UPDATELOCAL (base + idaOffsetFix(0x103230))
#define FUNC_WORLDSINGLEPLAYER_CLEANUPLOCAL (base + idaOffsetFix(0x103520))
#define FUNC_WORLDSINGLEPLAYER_SETRENDERDISTANCELOCAL (base + idaOffsetFix(0x1039E0))
#define FUNC_WORLDSINGLEPLAYER_SETDIFFICULTYLOCAL (base + idaOffsetFix(0x103A10))
#define FUNC_WORLDSINGLEPLAYER_LOCALPLAYERINIT (base + idaOffsetFix(0x103AB0))
#define FUNC_WORLDSINGLEPLAYER_LOCALPLAYERRESPAWN (base + idaOffsetFix(0x103AD0))
#define FUNC_WORLDSINGLEPLAYER_HANDLELIGHTINGOPTIONSUPDATE (base + idaOffsetFix(0x103BE0))
#define FUNC_WORLDSINGLEPLAYER_UPDATECHUNKS (base + idaOffsetFix(0x103D40))
#define FUNC_WORLDSINGLEPLAYER_UPDATECHUNK (base + idaOffsetFix(0x105080))
#define FUNC_WORLDSINGLEPLAYER_LOADCHUNKS (base + idaOffsetFix(0x105290))
#define FUNC_WORLDSINGLEPLAYER_LOADCHUNK (base + idaOffsetFix(0x105B40))
#define FUNC_WORLDSINGLEPLAYER_UPDATECHUNKCACHEANDMESH (base + idaOffsetFix(0x105BA0))
#define FUNC_WORLDSINGLEPLAYER_UPDATECHUNKCACHE (base + idaOffsetFix(0x105BF0))
#define FUNC_WORLDSINGLEPLAYER_REGENERATEALLCHUNKMESHES (base + idaOffsetFix(0x106160))

// gui::Button

#define FUNC_GUI_BUTTON_DESTR_BUTTON (base + idaOffsetFix(0x2BB70))
#define FUNC_GUI_BUTTON_RENDER (base + idaOffsetFix(0x85EE0))
#define FUNC_GUI_BUTTON_MOUSEBUTTONINPUT (base + idaOffsetFix(0x865F0))
#define FUNC_GUI_BUTTON_KEYINPUT (base + idaOffsetFix(0x86670))
#define FUNC_GUI_BUTTON_OFFSETX (base + idaOffsetFix(0x866C0))
#define FUNC_GUI_BUTTON_ENABLED (base + idaOffsetFix(0x866D0))
#define FUNC_GUI_BUTTON_SELECT (base + idaOffsetFix(0x866E0))
#define FUNC_GUI_BUTTON_GETPOS (base + idaOffsetFix(0x86700))
#define FUNC_GUI_BUTTON_GETSIZE (base + idaOffsetFix(0x867C0))
#define FUNC_GUI_BUTTON_TOUCHINGMOUSE (base + idaOffsetFix(0x867D0))

// gui::CheckBox

#define FUNC_GUI_CHECKBOX_RENDER (base + idaOffsetFix(0x86860))
#define FUNC_GUI_CHECKBOX_MOUSEBUTTONINPUT (base + idaOffsetFix(0x87000))
#define FUNC_GUI_CHECKBOX_KEYINPUT (base + idaOffsetFix(0x87090))
#define FUNC_GUI_CHECKBOX_GETPOS (base + idaOffsetFix(0x870E0))
#define FUNC_GUI_CHECKBOX_GETSIZE (base + idaOffsetFix(0x871C0))
#define FUNC_GUI_CHECKBOX_TOUCHINGMOUSE (base + idaOffsetFix(0x87210))

// gui::ContentBox

#define FUNC_GUI_CONTENTBOX_DESTR_CONTENTBOX (base + idaOffsetFix(0x7CDE0))
#define FUNC_GUI_CONTENTBOX_GETQUADRENDERER (base + idaOffsetFix(0x89600))
#define FUNC_GUI_CONTENTBOX_GETFONT (base + idaOffsetFix(0x89610))
#define FUNC_GUI_CONTENTBOX_GETGLFWWINDOW (base + idaOffsetFix(0x89620))
#define FUNC_GUI_CONTENTBOX_GETCURSORPOS (base + idaOffsetFix(0x89630))
#define FUNC_GUI_CONTENTBOX_GETSIZE (base + idaOffsetFix(0x896A0))
#define FUNC_GUI_CONTENTBOX_CHANGEVIEWPORT (base + idaOffsetFix(0x896B0))
#define FUNC_GUI_CONTENTBOX_GETPOS (base + idaOffsetFix(0x897F0))
#define FUNC_GUI_CONTENTBOX_GETSIZE_A (base + idaOffsetFix(0x898A0))
#define FUNC_GUI_CONTENTBOX_TOUCHINGMOUSE (base + idaOffsetFix(0x898B0))
#define FUNC_GUI_CONTENTBOX_RESETVIEWPORT (base + idaOffsetFix(0x89950))
#define FUNC_GUI_CONTENTBOX_RENDER (base + idaOffsetFix(0x899F0))
#define FUNC_GUI_CONTENTBOX_ALIGNX (base + idaOffsetFix(0x8A540))
#define FUNC_GUI_CONTENTBOX_ALIGNY (base + idaOffsetFix(0x8A550))
#define FUNC_GUI_CONTENTBOX_OFFSETX (base + idaOffsetFix(0x8A560))
#define FUNC_GUI_CONTENTBOX_OFFSETY (base + idaOffsetFix(0x8A570))
#define FUNC_GUI_CONTENTBOX_MOUSEINPUT (base + idaOffsetFix(0x8A580))
#define FUNC_GUI_CONTENTBOX_SCROLLINPUT (base + idaOffsetFix(0x8A840))
#define FUNC_GUI_CONTENTBOX_MOUSEBUTTONINPUT (base + idaOffsetFix(0x8A9B0))
#define FUNC_GUI_CONTENTBOX_KEYINPUT (base + idaOffsetFix(0x8ACC0))
#define FUNC_GUI_CONTENTBOX_SELECT (base + idaOffsetFix(0x8AE80))
#define FUNC_GUI_CONTENTBOX_DESELECT (base + idaOffsetFix(0x8AEB0))
#define FUNC_GUI_CONTENTBOX_ADDELEMENT (base + idaOffsetFix(0x8AEF0))
#define FUNC_GUI_CONTENTBOX_REMOVEELEMENT (base + idaOffsetFix(0x8AF30))
#define FUNC_GUI_CONTENTBOX_SELECTELEMENT (base + idaOffsetFix(0x8AFA0))
#define FUNC_GUI_CONTENTBOX_CLEAR (base + idaOffsetFix(0x8B060))
#define FUNC_GUI_CONTENTBOX_EMPTY (base + idaOffsetFix(0x8B0B0))

// gui::Element

#define FUNC_GUI_ELEMENT_ENABLED (base + idaOffsetFix(0x1DB80))
#define FUNC_GUI_ELEMENT_GETCURSORTYPE (base + idaOffsetFix(0x5A260))

// gui::Image

#define FUNC_GUI_IMAGE_OFFSETX (base + idaOffsetFix(0x69D80))
#define FUNC_GUI_IMAGE_OFFSETY (base + idaOffsetFix(0x69D90))
#define FUNC_GUI_IMAGE_RENDER (base + idaOffsetFix(0x8BD40))
#define FUNC_GUI_IMAGE_GETPOS (base + idaOffsetFix(0x8BE00))
#define FUNC_GUI_IMAGE_GETSIZE (base + idaOffsetFix(0x8BEE0))

// gui::Interface

#define FUNC_GUI_INTERFACE_INTERFACE (base + idaOffsetFix(0x85600))
#define FUNC_GUI_INTERFACE_DESTR_INTERFACE (base + idaOffsetFix(0x85670))
#define FUNC_GUI_INTERFACE_RENDER (base + idaOffsetFix(0x856F0))
#define FUNC_GUI_INTERFACE_MOUSEINPUT (base + idaOffsetFix(0x857E0))
#define FUNC_GUI_INTERFACE_SCROLLINPUT (base + idaOffsetFix(0x858E0))
#define FUNC_GUI_INTERFACE_MOUSEBUTTONINPUT (base + idaOffsetFix(0x85980))
#define FUNC_GUI_INTERFACE_KEYINPUT (base + idaOffsetFix(0x85A80))
#define FUNC_GUI_INTERFACE_GETQUADRENDERER (base + idaOffsetFix(0x85C30))
#define FUNC_GUI_INTERFACE_GETFONT (base + idaOffsetFix(0x85C40))
#define FUNC_GUI_INTERFACE_GETGLFWWINDOW (base + idaOffsetFix(0x85C50))
#define FUNC_GUI_INTERFACE_GETCURSORPOS (base + idaOffsetFix(0x85C60))
#define FUNC_GUI_INTERFACE_GETSIZE (base + idaOffsetFix(0x85CC0))
#define FUNC_GUI_INTERFACE_CHANGEVIEWPORT (base + idaOffsetFix(0x85CD0))
#define FUNC_GUI_INTERFACE_ADDELEMENT (base + idaOffsetFix(0x85CF0))
#define FUNC_GUI_INTERFACE_REMOVEELEMENT (base + idaOffsetFix(0x85D30))
#define FUNC_GUI_INTERFACE_SELECTELEMENT (base + idaOffsetFix(0x85DC0))
#define FUNC_GUI_INTERFACE_CLEAR (base + idaOffsetFix(0x85E80))
#define FUNC_GUI_INTERFACE_EMPTY (base + idaOffsetFix(0x85ED0))

// gui::Slider

#define FUNC_GUI_SLIDER_OFFSETX (base + idaOffsetFix(0x5AB80))
#define FUNC_GUI_SLIDER_OFFSETY (base + idaOffsetFix(0x5AB90))
#define FUNC_GUI_SLIDER_DESELECT (base + idaOffsetFix(0x866F0))
#define FUNC_GUI_SLIDER_RENDER (base + idaOffsetFix(0x872A0))
#define FUNC_GUI_SLIDER_MOUSEBUTTONINPUT (base + idaOffsetFix(0x87920))
#define FUNC_GUI_SLIDER_MOUSEINPUT (base + idaOffsetFix(0x87A00))
#define FUNC_GUI_SLIDER_KEYINPUT (base + idaOffsetFix(0x87AE0))
#define FUNC_GUI_SLIDER_ALIGNX (base + idaOffsetFix(0x87B40))
#define FUNC_GUI_SLIDER_ALIGNY (base + idaOffsetFix(0x87B50))
#define FUNC_GUI_SLIDER_GETPOS (base + idaOffsetFix(0x87B60))
#define FUNC_GUI_SLIDER_GETSIZE (base + idaOffsetFix(0x87C10))

// gui::Text

#define FUNC_GUI_TEXT_RENDER (base + idaOffsetFix(0x8B0C0))
#define FUNC_GUI_TEXT_OFFSETX (base + idaOffsetFix(0x8B4D0))
#define FUNC_GUI_TEXT_GETPOS (base + idaOffsetFix(0x8B4E0))
#define FUNC_GUI_TEXT_GETSIZE (base + idaOffsetFix(0x8B5C0))
#define FUNC_GUI_TEXT_SETTEXT (base + idaOffsetFix(0x8B820))
#define FUNC_GUI_TEXT_RENDERTEXT (base + idaOffsetFix(0x8B9C0))

// gui::TextInput

#define FUNC_GUI_TEXTINPUT_RENDER (base + idaOffsetFix(0x87C20))
#define FUNC_GUI_TEXTINPUT_ALIGNX (base + idaOffsetFix(0x88730))
#define FUNC_GUI_TEXTINPUT_ALIGNY (base + idaOffsetFix(0x88740))
#define FUNC_GUI_TEXTINPUT_OFFSETX (base + idaOffsetFix(0x88750))
#define FUNC_GUI_TEXTINPUT_OFFSETY (base + idaOffsetFix(0x88760))
#define FUNC_GUI_TEXTINPUT_MOUSEBUTTONINPUT (base + idaOffsetFix(0x88770))
#define FUNC_GUI_TEXTINPUT_MOUSEINPUT (base + idaOffsetFix(0x888E0))
#define FUNC_GUI_TEXTINPUT_KEYINPUT (base + idaOffsetFix(0x88A40))
#define FUNC_GUI_TEXTINPUT_CHARINPUT (base + idaOffsetFix(0x890B0))
#define FUNC_GUI_TEXTINPUT_GETCURSORTYPE (base + idaOffsetFix(0x891E0))
#define FUNC_GUI_TEXTINPUT_SELECT (base + idaOffsetFix(0x891F0))
#define FUNC_GUI_TEXTINPUT_DESELECT (base + idaOffsetFix(0x89200))
#define FUNC_GUI_TEXTINPUT_UPDATEPASSWORDVISUALTEXT (base + idaOffsetFix(0x89210))
#define FUNC_GUI_TEXTINPUT_UPDATESCROLLPOS (base + idaOffsetFix(0x892D0))
#define FUNC_GUI_TEXTINPUT_GETPOS (base + idaOffsetFix(0x89350))
#define FUNC_GUI_TEXTINPUT_GETSIZE (base + idaOffsetFix(0x89410))
#define FUNC_GUI_TEXTINPUT_REMOVEINVALIDCHARS (base + idaOffsetFix(0x89420))
#define FUNC_GUI_TEXTINPUT_REMOVEHIGHLIGHTEDTEXT (base + idaOffsetFix(0x89550))

// EntityButterfly

#define FUNC_ENTITYBUTTERFLY_GETNAME (base + idaOffsetFix(0x27800))
#define FUNC_ENTITYBUTTERFLY_UPDATE (base + idaOffsetFix(0x27840))
#define FUNC_ENTITYBUTTERFLY_RENDER (base + idaOffsetFix(0x27D20))
#define FUNC_ENTITYBUTTERFLY_GETSERVERUPDATEATTRIBUTES (base + idaOffsetFix(0x29D10))
#define FUNC_ENTITYBUTTERFLY_APPLYSERVERUPDATE (base + idaOffsetFix(0x2A020))
#define FUNC_ENTITYBUTTERFLY_TAKEDAMAGE (base + idaOffsetFix(0x2A230))
#define FUNC_ENTITYBUTTERFLY_PLAYHITSOUND (base + idaOffsetFix(0x2A980))
#define FUNC_ENTITYBUTTERFLY_PLAYDEATHSOUND (base + idaOffsetFix(0x2AA30))
#define FUNC_ENTITYBUTTERFLY_COLLISIONCALLBACK (base + idaOffsetFix(0x2AAE0))

// EntityAlidade::SPInfo

#define FUNC_ENTITYALIDADE_SPINFO_SPINFO (base + idaOffsetFix(0x1F580))
#define FUNC_ENTITYALIDADE_SPINFO_DESTR_SPINFO (base + idaOffsetFix(0x1F5A0))

// EntityAlidade

#define FUNC_ENTITYALIDADE_GETNAME (base + idaOffsetFix(0x1C620))
#define FUNC_ENTITYALIDADE_UPDATE (base + idaOffsetFix(0x1C660))
#define FUNC_ENTITYALIDADE_RENDER (base + idaOffsetFix(0x1C850))
#define FUNC_ENTITYALIDADE_SAVEATTRIBUTES (base + idaOffsetFix(0x1D510))
#define FUNC_ENTITYALIDADE_GETPOS (base + idaOffsetFix(0x1DB10))
#define FUNC_ENTITYALIDADE_SETPOS (base + idaOffsetFix(0x1DB20))
#define FUNC_ENTITYALIDADE_TAKEDAMAGE (base + idaOffsetFix(0x1DBB0))
#define FUNC_ENTITYALIDADE_ACTION (base + idaOffsetFix(0x1DBC0))
#define FUNC_ENTITYALIDADE_POSTACTION (base + idaOffsetFix(0x1DBD0))
#define FUNC_ENTITYALIDADE_GENERATESPHERINDER (base + idaOffsetFix(0x1DD40))
#define FUNC_ENTITYALIDADE_GENERATESPHERINDERHOLLOW (base + idaOffsetFix(0x1F660))
#define FUNC_ENTITYALIDADE_GENERATESEMICIRCLE (base + idaOffsetFix(0x21D90))

// EntityItem

#define FUNC_ENTITYITEM_CREATEWITHITEM (base + idaOffsetFix(0x9B8E0))
#define FUNC_ENTITYITEM_GETNAME (base + idaOffsetFix(0x9BA90))
#define FUNC_ENTITYITEM_UPDATE (base + idaOffsetFix(0x9BAD0))
#define FUNC_ENTITYITEM_RENDER (base + idaOffsetFix(0x9BDC0))
#define FUNC_ENTITYITEM_SAVEATTRIBUTES (base + idaOffsetFix(0x9C700))
#define FUNC_ENTITYITEM_APPLYSERVERUPDATE (base + idaOffsetFix(0x9C960))
#define FUNC_ENTITYITEM_GETPOS (base + idaOffsetFix(0x9C9D0))
#define FUNC_ENTITYITEM_SETPOS (base + idaOffsetFix(0x9C9E0))
#define FUNC_ENTITYITEM_SHOULDSAVE (base + idaOffsetFix(0x9C9F0))
#define FUNC_ENTITYITEM_ISINTERSECTINGRAY (base + idaOffsetFix(0x9CA00))
#define FUNC_ENTITYITEM_GIVE (base + idaOffsetFix(0x9CA10))
#define FUNC_ENTITYITEM_COMBINEWITHNEARBY (base + idaOffsetFix(0x9CC40))
#define FUNC_ENTITYITEM_COLLISIONCALLBACK (base + idaOffsetFix(0x9CF30))

// EntityPlayer

#define FUNC_ENTITYPLAYER_CREATEFROMPLAYER (base + idaOffsetFix(0xC11F0))
#define FUNC_ENTITYPLAYER_ENTITYPLAYER (base + idaOffsetFix(0xC1370))
#define FUNC_ENTITYPLAYER_GETNAME (base + idaOffsetFix(0xC1580))
#define FUNC_ENTITYPLAYER_UPDATE (base + idaOffsetFix(0xC15C0))
#define FUNC_ENTITYPLAYER_RENDER (base + idaOffsetFix(0xC2010))
#define FUNC_ENTITYPLAYER_SAVEATTRIBUTES (base + idaOffsetFix(0xC2900))
#define FUNC_ENTITYPLAYER_APPLYSERVERUPDATE (base + idaOffsetFix(0xC2DB0))
#define FUNC_ENTITYPLAYER_GETPOS (base + idaOffsetFix(0xC2E90))
#define FUNC_ENTITYPLAYER_SETPOS (base + idaOffsetFix(0xC2EA0))
#define FUNC_ENTITYPLAYER_ISINTERSECTINGRAY (base + idaOffsetFix(0xC2EF0))
#define FUNC_ENTITYPLAYER_TAKEDAMAGE (base + idaOffsetFix(0xC31D0))
#define FUNC_ENTITYPLAYER_DEATHTIMER (base + idaOffsetFix(0xC3250))
#define FUNC_ENTITYPLAYER_APPLYMOVEMENTUPDATE (base + idaOffsetFix(0xC3270))
#define FUNC_ENTITYPLAYER_COLLECTITEMS (base + idaOffsetFix(0xC3690))

// EntitySpider::SpiderType

#define FUNC_ENTITYSPIDER_SPIDERTYPE_DESTR_SPIDERTYPE (base + idaOffsetFix(0xCF4F0))

// EntitySpider

#define FUNC_ENTITYSPIDER_ISINTERSECTINGRAY (base + idaOffsetFix(0x1DBA0))
#define FUNC_ENTITYSPIDER_GETPOS (base + idaOffsetFix(0x2A210))
#define FUNC_ENTITYSPIDER_SETPOS (base + idaOffsetFix(0x2A220))
#define FUNC_ENTITYSPIDER_GETNAME (base + idaOffsetFix(0xCF580))
#define FUNC_ENTITYSPIDER_UPDATE (base + idaOffsetFix(0xCF5C0))
#define FUNC_ENTITYSPIDER_RENDER (base + idaOffsetFix(0xCFF30))
#define FUNC_ENTITYSPIDER_SAVEATTRIBUTES (base + idaOffsetFix(0xD1E40))
#define FUNC_ENTITYSPIDER_GETSERVERUPDATEATTRIBUTES (base + idaOffsetFix(0xD1F90))
#define FUNC_ENTITYSPIDER_APPLYSERVERUPDATE (base + idaOffsetFix(0xD24D0))
#define FUNC_ENTITYSPIDER_TAKEDAMAGE (base + idaOffsetFix(0xD28E0))
#define FUNC_ENTITYSPIDER_PLAYHITSOUND (base + idaOffsetFix(0xD2D70))
#define FUNC_ENTITYSPIDER_PLAYDEATHSOUND (base + idaOffsetFix(0xD2E60))
#define FUNC_ENTITYSPIDER_COLLISIONCALLBACK (base + idaOffsetFix(0xD2FA0))
#define FUNC_ENTITYSPIDER_FINDPLAYER (base + idaOffsetFix(0xD2FC0))
#define FUNC_ENTITYSPIDER_PERSUEPLAYER (base + idaOffsetFix(0xD3340))

// EntityChest

#define FUNC_ENTITYCHEST_ISCLICKABLE (base + idaOffsetFix(0x1DB90))
#define FUNC_ENTITYCHEST_GETNAME (base + idaOffsetFix(0x2BB80))
#define FUNC_ENTITYCHEST_UPDATE (base + idaOffsetFix(0x2BBC0))
#define FUNC_ENTITYCHEST_RENDER (base + idaOffsetFix(0x2BE40))
#define FUNC_ENTITYCHEST_SAVEATTRIBUTES (base + idaOffsetFix(0x2C470))
#define FUNC_ENTITYCHEST_GETSERVERUPDATEATTRIBUTES (base + idaOffsetFix(0x2C4F0))
#define FUNC_ENTITYCHEST_APPLYSERVERUPDATE (base + idaOffsetFix(0x2C710))
#define FUNC_ENTITYCHEST_GETPOS (base + idaOffsetFix(0x2C740))
#define FUNC_ENTITYCHEST_SETPOS (base + idaOffsetFix(0x2C750))
#define FUNC_ENTITYCHEST_ACTION (base + idaOffsetFix(0x2C760))

// EntityDying

#define FUNC_ENTITYDYING_DEATHTIMER (base + idaOffsetFix(0x1DCD0))
#define FUNC_ENTITYDYING_CREATEWITHENTITY (base + idaOffsetFix(0x266A0))
#define FUNC_ENTITYDYING_GETNAME (base + idaOffsetFix(0x26840))
#define FUNC_ENTITYDYING_UPDATE (base + idaOffsetFix(0x26880))
#define FUNC_ENTITYDYING_RENDER (base + idaOffsetFix(0x268E0))
#define FUNC_ENTITYDYING_GETSERVERUPDATEATTRIBUTES (base + idaOffsetFix(0x268F0))
#define FUNC_ENTITYDYING_APPLYSERVERUPDATE (base + idaOffsetFix(0x26910))
#define FUNC_ENTITYDYING_GETPOS (base + idaOffsetFix(0x26920))
#define FUNC_ENTITYDYING_SETPOS (base + idaOffsetFix(0x26940))
#define FUNC_ENTITYDYING_ISBLOCKENTITY (base + idaOffsetFix(0x26950))
#define FUNC_ENTITYDYING_ISINTERSECTINGRAY (base + idaOffsetFix(0x26960))

// EntityManager

#define FUNC_ENTITYMANAGER_EXTRACT (base + idaOffsetFix(0x2D740))
#define FUNC_ENTITYMANAGER_GET (base + idaOffsetFix(0x78360))
#define FUNC_ENTITYMANAGER_GETBLOCKENTITY (base + idaOffsetFix(0xF6A30))

// Coil

#define FUNC_COIL_COIL (base + idaOffsetFix(0x49330))
#define FUNC_COIL_BUFFSIZE (base + idaOffsetFix(0x4AA00))
#define FUNC_COIL_ATTRSIZE (base + idaOffsetFix(0x4AA20))

// CompassRenderer

#define FUNC_COMPASSRENDERER_RENDERHAND (base + idaOffsetFix(0x4B7C0))
#define FUNC_COMPASSRENDERER_RENDERITEMDROP (base + idaOffsetFix(0x4D9C0))

// DodecaplexWireframe

#define FUNC_DODECAPLEXWIREFRAME_GENERATEMESH (base + idaOffsetFix(0x75260))
#define FUNC_DODECAPLEXWIREFRAME_ADDFACES (base + idaOffsetFix(0x75B80))
#define FUNC_DODECAPLEXWIREFRAME_ADDCELLS (base + idaOffsetFix(0x765D0))

// Framebuffer

#define FUNC_FRAMEBUFFER_DESTR_FRAMEBUFFER (base + idaOffsetFix(0x7BBE0))
#define FUNC_FRAMEBUFFER_RENDER (base + idaOffsetFix(0x7BC70))
#define FUNC_FRAMEBUFFER_INIT (base + idaOffsetFix(0x7BD80))
#define FUNC_FRAMEBUFFER_CLEANUP (base + idaOffsetFix(0x7BFA0))

// HypercubeHollow

#define FUNC_HYPERCUBEHOLLOW_ATTRSIZE (base + idaOffsetFix(0xCB9A0))
#define FUNC_HYPERCUBEHOLLOW_ATTRSTRIDE (base + idaOffsetFix(0xCB9B0))
#define FUNC_HYPERCUBEHOLLOW_HYPERCUBEHOLLOW (base + idaOffsetFix(0xCBEB0))
#define FUNC_HYPERCUBEHOLLOW_ADDCUBESIDE (base + idaOffsetFix(0xCC240))

// PlayerSkinRenderer

#define FUNC_PLAYERSKINRENDERER_PLAYERSKINRENDERER (base + idaOffsetFix(0x5F4F0))
#define FUNC_PLAYERSKINRENDERER_RENDER (base + idaOffsetFix(0x5F6D0))
#define FUNC_PLAYERSKINRENDERER_UPDATEANIMATION (base + idaOffsetFix(0x62480))
#define FUNC_PLAYERSKINRENDERER_RESETTRANSFORMATIONS (base + idaOffsetFix(0x68F40))

// PlayerSkinViewer

#define FUNC_PLAYERSKINVIEWER_RENDER (base + idaOffsetFix(0x69420))
#define FUNC_PLAYERSKINVIEWER_ALIGNX (base + idaOffsetFix(0x69D60))
#define FUNC_PLAYERSKINVIEWER_ALIGNY (base + idaOffsetFix(0x69D70))
#define FUNC_PLAYERSKINVIEWER_GETPOS (base + idaOffsetFix(0x69DA0))
#define FUNC_PLAYERSKINVIEWER_GETSIZE (base + idaOffsetFix(0x69E50))
#define FUNC_PLAYERSKINVIEWER_MOUSEINPUT (base + idaOffsetFix(0x69E60))
#define FUNC_PLAYERSKINVIEWER_GETCURSORTYPE (base + idaOffsetFix(0x69F10))
#define FUNC_PLAYERSKINVIEWER_INIT (base + idaOffsetFix(0x69F20))
#define FUNC_PLAYERSKINVIEWER_SETUPFRAMEBUFFER (base + idaOffsetFix(0x6A070))

// Sphere

#define FUNC_SPHERE_VERTCOUNT (base + idaOffsetFix(0x4AA30))
#define FUNC_SPHERE_BUFFSIZE (base + idaOffsetFix(0x92F20))
#define FUNC_SPHERE_SPHERE (base + idaOffsetFix(0x92F60))
#define FUNC_SPHERE_GENERATECIRCLEPOLYGONS (base + idaOffsetFix(0x93FE0))

