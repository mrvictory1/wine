/*
 *  DirectMusic Performance Layer Plugins API
 *
 *  Copyright (C) 2003 Rok Mandeljc
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __WINE_DMUSIC_PLUGIN_H
#define __WINE_DMUSIC_PLUGIN_H

#include <objbase.h>
#include <mmsystem.h>

#ifdef __cplusplus
extern "C" {
#endif

#define DMUS_REGSTR_PATH_TOOLS  "Software\\Microsoft\\DirectMusic\\Tools"

/*****************************************************************************
 * Predeclare the interfaces
 */
DEFINE_GUID(IID_IDirectMusicTrack, 							0xf96029a1,0x4282,0x11d2,0x87,0x17,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicTool,							0xd2ac28ba,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicTool8,							0xe674303,0x3b05,0x11d3,0x9b,0xd1,0xf9,0xe7,0xf0,0xa0,0x15,0x36);
DEFINE_GUID(IID_IDirectMusicTrack8, 						0xe674304,0x3b05,0x11d3,0x9b,0xd1,0xf9,0xe7,0xf0,0xa0,0x15,0x36);

/* typedef definitions of interfaces are in dmusici.h */

DEFINE_GUID(CLSID_DirectMusicTempoTrack,					0xd2ac2885,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicSeqTrack,						0xd2ac2886,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicSysExTrack,					0xd2ac2887,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicTimeSigTrack,					0xd2ac2888,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicChordTrack,					0xd2ac288b,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicCommandTrack,					0xd2ac288c,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicStyleTrack,					0xd2ac288d,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicMotifTrack,					0xd2ac288e,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicSignPostTrack,					0xf17e8672,0xc3b4,0x11d1,0x87,0xb,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicBandTrack,						0xd2ac2894,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicChordMapTrack,					0xd2ac2896,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicMuteTrack,						0xd2ac2898,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicScriptTrack,					0x4108fa85,0x3586,0x11d3,0x8b,0xd7,0x0,0x60,0x8,0x93,0xb1,0xb6);
DEFINE_GUID(CLSID_DirectMusicMarkerTrack,					0x55a8fd00,0x4288,0x11d3,0x9b,0xd1,0x8a,0xd,0x61,0xc8,0x88,0x35);
DEFINE_GUID(CLSID_DirectMusicSegmentTriggerTrack,			0xbae4d665,0x4ea1,0x11d3,0x8b,0xda,0x0,0x60,0x8,0x93,0xb1,0xb6);
DEFINE_GUID(CLSID_DirectMusicLyricsTrack,					0x995c1cf5,0x54ff,0x11d3,0x8b,0xda,0x0,0x60,0x8,0x93,0xb1,0xb6);
DEFINE_GUID(CLSID_DirectMusicParamControlTrack,				0x4be0537b,0x5c19,0x11d3,0x8b,0xdc,0x0,0x60,0x8,0x93,0xb1,0xb6);
DEFINE_GUID(CLSID_DirectMusicMelodyFormulationTrack,		0xb0684266,0xb57f,0x11d2,0x97,0xf9,0x0,0xc0,0x4f,0xa3,0x6e,0x58);
DEFINE_GUID(CLSID_DirectMusicWaveTrack,						0xeed36461,0x9ea5,0x11d3,0x9b,0xd1,0x0,0x80,0xc7,0x15,0xa,0x74);


/*****************************************************************************
 * IDirectMusicTool interface
 */
#undef  INTERFACE
#define INTERFACE IDirectMusicTool
#define IDirectMusicTool_METHODS \
    IUnknown_METHODS \
    STDMETHOD(Init)(THIS_ IDirectMusicGraph *pGraph) PURE; \
    STDMETHOD(GetMsgDeliveryType)(THIS_ DWORD *pdwDeliveryType) PURE; \
    STDMETHOD(GetMediaTypeArraySize)(THIS_ DWORD *pdwNumElements) PURE; \
    STDMETHOD(GetMediaTypes)(THIS_ DWORD **padwMediaTypes, DWORD dwNumElements) PURE; \
    STDMETHOD(ProcessPMsg)(THIS_ IDirectMusicPerformance *pPerf, DMUS_PMSG *pPMSG) PURE; \
    STDMETHOD(Flush)(THIS_ IDirectMusicPerformance *pPerf, DMUS_PMSG *pPMSG, REFERENCE_TIME rtTime) PURE;
ICOM_DEFINE(IDirectMusicTool,IUnknown)
#undef INTERFACE

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDirectMusicTool_QueryInterface(p,a,b)          (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirectMusicTool_AddRef(p)                      (p)->lpVtbl->AddRef(p)
#define IDirectMusicTool_Release(p)                     (p)->lpVtbl->Release(p)
/*** IDirectMusicTool methods ***/
#define IDirectMusicTool_Init(p,a)                      (p)->lpVtbl->Init(p,a)
#define IDirectMusicTool_GetMsgDeliveryType(p,a)        (p)->lpVtbl->GetMsgDeliveryType(p,a)
#define IDirectMusicTool_GetMediaTypeArraySize(p,a)     (p)->lpVtbl->GetMediaTypeArraySize(p,a)
#define IDirectMusicTool_GetMediaTypes(p,a,b)           (p)->lpVtbl->GetMediaTypes(p,a,b)
#define IDirectMusicTool_ProcessPMsg(p,a,b)             (p)->lpVtbl->ProcessPMsg(p,a,b)
#define IDirectMusicTool_Flush(p,a,b,c)                 (p)->lpVtbl->Flush(p,a,b,c)
#endif


/*****************************************************************************
 * IDirectMusicTool8 interface
 */
#undef  INTERFACE
#define INTERFACE IDirectMusicTool8
#define IDirectMusicTool8_METHODS \
    IDirectMusicTool_METHODS \
    STDMETHOD(Clone)(THIS_ IDirectMusicTool **ppTool) PURE;
ICOM_DEFINE(IDirectMusicTool8,IDirectMusicTool)
#undef INTERFACE

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDirectMusicTool8_QueryInterface(p,a,b)         (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirectMusicTool8_AddRef(p)                     (p)->lpVtbl->AddRef(p)
#define IDirectMusicTool8_Release(p)                    (p)->lpVtbl->Release(p)
/*** IDirectMusicTool methods ***/
#define IDirectMusicTool8_Init(p,a)                     (p)->lpVtbl->Init(p,a)
#define IDirectMusicTool8_GetMsgDeliveryType(p,a)       (p)->lpVtbl->GetMsgDeliveryType(p,a)
#define IDirectMusicTool8_GetMediaTypeArraySize(p,a)    (p)->lpVtbl->GetMediaTypeArraySize(p,a)
#define IDirectMusicTool8_GetMediaTypes(p,a,b)          (p)->lpVtbl->GetMediaTypes(p,a,b)
#define IDirectMusicTool8_ProcessPMsg(p,a,b)            (p)->lpVtbl->ProcessPMsg(p,a,b)
#define IDirectMusicTool8_Flush(p,a,b)                  (p)->lpVtbl->Flush(p,a,b)
/*** IDirectMusicTool8 methods ***/
#define IDirectMusicTool8_Clone(p,a)                    (p)->lpVtbl->Clone(p,a)
#endif


typedef enum enumDMUS_TRACKF_FLAGS
{
    DMUS_TRACKF_SEEK            = 1,
    DMUS_TRACKF_LOOP            = 2,
    DMUS_TRACKF_START           = 4,
    DMUS_TRACKF_FLUSH           = 8,
    DMUS_TRACKF_DIRTY           = 0x10,
    DMUS_TRACKF_NOTIFY_OFF      = 0x20,
    DMUS_TRACKF_PLAY_OFF        = 0x40,
    DMUS_TRACKF_LOOPEND         = 0x80,
    DMUS_TRACKF_STOP            = 0x100,
    DMUS_TRACKF_RECOMPOSE       = 0x200,
    DMUS_TRACKF_CLOCK           = 0x400,
} DMUS_TRACKF_FLAGS;

#define DMUS_TRACK_PARAMF_CLOCK  0x01



/*****************************************************************************
 * IDirectMusicTrack interface
 */
#undef  INTERFACE
#define INTERFACE IDirectMusicTrack
#define IDirectMusicTrack_METHODS \
    IUnknown_METHODS \
    STDMETHOD(Init)(THIS_ IDirectMusicSegment *pSegment) PURE; \
    STDMETHOD(InitPlay)(THIS_ IDirectMusicSegmentState *pSegmentState, IDirectMusicPerformance *pPerformance, void **ppStateData, DWORD dwVirtualTrackID, DWORD dwFlags) PURE; \
    STDMETHOD(EndPlay)(THIS_ void *pStateData) PURE; \
    STDMETHOD(Play)(THIS_ void *pStateData, MUSIC_TIME mtStart, MUSIC_TIME mtEnd, MUSIC_TIME mtOffset, DWORD dwFlags, IDirectMusicPerformance *pPerf, IDirectMusicSegmentState *pSegSt, DWORD dwVirtualID) PURE; \
    STDMETHOD(GetParam)(THIS_ REFGUID rguidType, MUSIC_TIME mtTime, MUSIC_TIME *pmtNext, void *pParam) PURE; \
    STDMETHOD(SetParam)(THIS_ REFGUID rguidType, MUSIC_TIME mtTime, void *pParam) PURE; \
    STDMETHOD(IsParamSupported)(THIS_ REFGUID rguidType) PURE; \
    STDMETHOD(AddNotificationType)(THIS_ REFGUID rguidNotificationType) PURE; \
    STDMETHOD(RemoveNotificationType)(THIS_ REFGUID rguidNotificationType) PURE; \
    STDMETHOD(Clone)(THIS_ MUSIC_TIME mtStart, MUSIC_TIME mtEnd, IDirectMusicTrack **ppTrack) PURE;
ICOM_DEFINE(IDirectMusicTrack,IUnknown)
#undef INTERFACE

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDirectMusicTrack_QueryInterface(p,a,b)         (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirectMusicTrack_AddRef(p)                     (p)->lpVtbl->AddRef(p)
#define IDirectMusicTrack_Release(p)                    (p)->lpVtbl->Release(p)
/*** IDirectMusicTrack methods ***/
#define IDirectMusicTrack_Init(p,a)                     (p)->lpVtbl->Init(p,a)
#define IDirectMusicTrack_InitPlay(p,a,b,c,d,e)         (p)->lpVtbl->InitPlay(p,a,b,c,d,e)
#define IDirectMusicTrack_EndPlay(p,a)                  (p)->lpVtbl->EndPlay(p,a)
#define IDirectMusicTrack_Play(p,a,b,c,d,e,f,g,h)       (p)->lpVtbl->Play(p,a,b,c,d,e,f,g,h)
#define IDirectMusicTrack_GetParam(p,a,b,c,d)           (p)->lpVtbl->GetParam(p,a,b,c,d)
#define IDirectMusicTrack_SetParam(p,a,b,c)             (p)->lpVtbl->SetParam(p,a,b,c)
#define IDirectMusicTrack_IsParamSupported(p,a)         (p)->lpVtbl->IsParamSupported(p,a)
#define IDirectMusicTrack_AddNotificationType(p,a)      (p)->lpVtbl->AddNotificationType(p,a)
#define IDirectMusicTrack_RemoveNotificationType(p,a)   (p)->lpVtbl->RemoveNotificationType(p,a)
#define IDirectMusicTrack_Clone(p,a,b,c)                (p)->lpVtbl->Clone(p,a,b,c)
#endif


/*****************************************************************************
 * IDirectMusicTrack8 interface
 */
#undef  INTERFACE
#define INTERFACE IDirectMusicTrack8
#define IDirectMusicTrack8_METHODS \
    IDirectMusicTrack_METHODS \
    STDMETHOD(PlayEx)(THIS_ void *pStateData, REFERENCE_TIME rtStart, REFERENCE_TIME rtEnd, REFERENCE_TIME rtOffset, DWORD dwFlags, IDirectMusicPerformance *pPerf, IDirectMusicSegmentState *pSegSt, DWORD dwVirtualID) PURE; \
    STDMETHOD(GetParamEx)(THIS_ REFGUID rguidType, REFERENCE_TIME rtTime, REFERENCE_TIME *prtNext, void *pParam, void *pStateData, DWORD dwFlags) PURE; \
    STDMETHOD(SetParamEx)(THIS_ REFGUID rguidType, REFERENCE_TIME rtTime, void *pParam, void *pStateData, DWORD dwFlags) PURE; \
    STDMETHOD(Compose)(THIS_ IUnknown *pContext, DWORD dwTrackGroup, IDirectMusicTrack **ppResultTrack) PURE; \
    STDMETHOD(Join)(THIS_ IDirectMusicTrack *pNewTrack, MUSIC_TIME mtJoin, IUnknown *pContext, DWORD dwTrackGroup, IDirectMusicTrack **ppResultTrack) PURE;
ICOM_DEFINE(IDirectMusicTrack8,IDirectMusicTrack)
#undef INTERFACE

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDirectMusicTrack8_QueryInterface(p,a,b)        (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirectMusicTrack8_AddRef(p)                    (p)->lpVtbl->AddRef(p)
#define IDirectMusicTrack8_Release(p)                   (p)->lpVtbl->Release(p)
/*** IDirectMusicTrack methods ***/
#define IDirectMusicTrack8_Init(p,a)                    (p)->lpVtbl->Init(p,a)
#define IDirectMusicTrack8_InitPlay(p,a,b,c,d,e)        (p)->lpVtbl->InitPlay(p,a,b,c,d,e)
#define IDirectMusicTrack8_EndPlay(p,a)                 (p)->lpVtbl->EndPlay(p,a)
#define IDirectMusicTrack8_Play(p,a,b,c,d,e,f,g,h)      (p)->lpVtbl->Play(p,a,b,c,d,e,f,g,h)
#define IDirectMusicTrack8_GetParam(p,a,b,c,d)          (p)->lpVtbl->GetParam(p,a,b,c,d)
#define IDirectMusicTrack8_SetParam(p,a,b,c)            (p)->lpVtbl->SetParam(p,a,b,c)
#define IDirectMusicTrack8_IsParamSupported(p,a)        (p)->lpVtbl->IsParamSupported(p,a)
#define IDirectMusicTrack8_AddNotificationType(p,a)     (p)->lpVtbl->AddNotificationType(p,a)
#define IDirectMusicTrack8_RemoveNotificationType(p,a)  (p)->lpVtbl->RemoveNotificationType(p,a)
#define IDirectMusicTrack8_Clone(p,a,b,c)               (p)->lpVtbl->Clone(p,a,b,c)
/*** IDirectMusicTrack8 methods ***/
#define IDirectMusicTrack8_PlayEx(p,a,b,c,d,e,f,g,h)    (p)->lpVtbl->PlayEx(p,a,b,c,d,e,f,g,h)
#define IDirectMusicTrack8_GetParamEx(p,a,b,c,d,e,f)    (p)->lpVtbl->GetParamEx(p,a,b,c,d,e,f)
#define IDirectMusicTrack8_SetParamEx(p,a,b,c,d,e)      (p)->lpVtbl->SetParamEx(p,a,b,c,d,e)
#define IDirectMusicTrack8_Compose(p,a,b,c)             (p)->lpVtbl->Compose(p,a,b,c)
#define IDirectMusicTrack8_Join(p,a,b,c,d,e)            (p)->lpVtbl->Join(p,a,b,c,d,e)
#endif


#ifdef __cplusplus
}
#endif

#endif /* __WINE_DMUSIC_PLUGIN_H */
