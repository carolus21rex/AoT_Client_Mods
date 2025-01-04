/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

//
// eqgame.exe offsets
//

#define __ClientDate                                               20241118u
#define __ExpectedVersionDate                                     "Nov 18 2024"
#define __ExpectedVersionTime                                     "11:55:00"
#define __ActualVersionDate_x                                      0x140949F00
#define __ActualVersionTime_x                                      0x140949EF0
#define __ActualVersionBuild_x                                     0x1408E0650

// Memory Protection
#define __MemChecker0_x                                            0x1402B1C50
#define __MemChecker1_x                                            0x140570A40
#define __MemChecker4_x                                            0x1402807D0
#define __EncryptPad0_x                                            0x140D16E50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E4FAA0
#define instEQZoneInfo_x                                           0x140E4FC94 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140217520
#define __gfMaxZoomCameraDistance_x                                0x1408E18C8
#define __gfMaxCameraDistance_x                                    0x140A866A8
#define __CurrentSocial_x                                          0x140BD2940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D0E720
#define g_eqCommandStates_x                                        0x140D0F790
#define __CommandList_x                                            0x140D0F9D0
#define __ScreenMode_x                                             0x140D9735C
#define __gWorld_x                                                 0x140E4A3D8
#define __gpbCommandEvent_x                                        0x140E4A3E4
#define __ServerHost_x                                             0x140E4A5C8
#define __Guilds_x                                                 0x140E4E650
#define __MemCheckBitmask_x                                        0x140E4FFDB
#define __MemCheckActive_x                                         0x140E516CD
#define __MouseEventTime_x                                         0x140EC5018
#define DI8__MouseState_x                                          0x140EC9248
#define __heqmain_x                                                0x140ECB6E8
#define DI8__Mouse_x                                               0x140EC9198
#define __HWnd_x                                                   0x140EC9220
#define __Mouse_x                                                  0x140EC9154
#define DI8__Keyboard_x                                            0x140EC9170
#define __LoginName_x                                              0x140ECBDCC
#define __CurrentMapLabel_x                                        0x140EDF5D0
#define __LabelCache_x                                             0x140EE01A0
#define __ChatFilterDefs_x                                         0x140A217B0
#define Teleport_Table_Size_x                                      0x140E4A470
#define Teleport_Table_x                                           0x140E47F30

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E4A9E0
#define pinstActiveBanker_x                                        0x140E4A900
#define pinstActiveCorpse_x                                        0x140E4A8F0
#define pinstActiveGMaster_x                                       0x140E4A8F8
#define pinstActiveMerchant_x                                      0x140E4A8E8
#define pinstAltAdvManager_x                                       0x140D981F8
#define pinstCEverQuest_x                                          0x140EC9190
#define pinstCamActor_x                                            0x140D97348
#define pinstCDBStr_x                                              0x140D96FB0
#define pinstCDisplay_x                                            0x140E4A9D8
#define pinstControlledPlayer_x                                    0x140E4A990
#define pinstCResolutionHandler_x                                  0x141550948
#define pinstCSidlManager_x                                        0x140EF14A0
#define pinstCXWndManager_x                                        0x140EF1498
#define instDynamicZone_x                                          0x140E4E510 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4E55E
#define instExpeditionName_x                                       0x140E4E59E
#define pinstDZMember_x                                            0x140E4E628
#define pinstDZTimerInfo_x                                         0x140E4E630
#define pinstEqLogin_x                                             0x140ECB710
#define instTribute_x                                              0x140D09D50
#define pinstDeviceInputProxy_x                                    0x140E4FAFC
#define pinstEQSoundManager_x                                      0x140D98578
#define pinstEQSpellStrings_x                                      0x140D7BB80
#define pinstSGraphicsEngine_x                                     0x1415506C8
#define pinstLocalPC_x                                             0x140E4A9C0
#define pinstLocalPlayer_x                                         0x140E4A8E0
#define pinstCMercenaryClientManager_x                             0x140EC68F8
#define pinstModelPlayer_x                                         0x140E4A910
#define pinstRenderInterface_x                                     0x1415506E0
#define pinstSkillMgr_x                                            0x140EC8598
#define pinstSpawnManager_x                                        0x140EC6CC0
#define pinstSpellManager_x                                        0x140EC8600
#define pinstStringTable_x                                         0x140E47F20
#define pinstSwitchManager_x                                       0x140E47EA0
#define pinstTarget_x                                              0x140E4A988
#define pinstTaskMember_x                                          0x140D09D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E4A998
#define pinstTradeTarget_x                                         0x140E4A908
#define instTributeActive_x                                        0x140D09D79
#define pinstViewActor_x                                           0x140D97340
#define pinstWorldData_x                                           0x140E4A9D0
#define pinstPlayerPath_x                                          0x140EC6CE8
#define pinstTargetIndicator_x                                     0x140EC86B0
#define EQObject_Top_x                                             0x140E4A9B0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EDC728
#define pinstCContainerMgr_x                                       0x140D97008
#define pinstCContextMenuManager_x                                 0x140EF1180
#define pinstCInvSlotMgr_x                                         0x140D97000
#define pinstCItemDisplayManager_x                                 0x140EDF1A0
#define pinstCPopupWndManager_x                                    0x140EDFA30
#define pinstCSpellDisplayMgr_x                                    0x140EE0080
#define pinstCTaskManager_x                                        0x140BD2C80
#define pinstEQSuiteTextureLoader_x                                0x140D20550
#define pinstItemIconCache_x                                       0x140EDCA88
#define pinstLootFiltersManager_x                                  0x140D969F8
#define pinstGFViewListener_x                                      0x140EF0958


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140240590
#define __CastRay_x                                                0x1402389C0
#define __CastRay2_x                                               0x1402386C0
#define __compress_block_x                                         0x1405260E0
#define __ConvertItemTags_x                                        0x140238E20
#define __CleanItemTags_x                                          0x140088490
#define __CreateCascadeMenuItems_x                                 0x140187090
#define __decompress_block_x                                       0x14056C2B0
#define __DoesFileExist_x                                          0x1405748F0
#define __EQGetTime_x                                              0x140570FF0
#define __ExecuteCmd_x                                             0x14020EE30
#define __FixHeading_x                                             0x14069DC80
#define __FlushDxKeyboard_x                                        0x140333B90
#define __get_bearing_x                                            0x140242780
#define __get_melee_range_x                                        0x140242870
#define __GetAnimationCache_x                                      0x1403B1270
#define __GetGaugeValueFromEQ_x                                    0x1404E5DC0
#define __GetLabelFromEQ_x                                         0x1404E73B0
#define __GetXTargetType_x                                         0x14069EF60   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14069DD00
#define __HelpPath_x                                               0x140EC4EE0   // Why?
#define __NewUIINI_x                                               0x1404F2E30   // Why?
#define __ProcessDeviceEvents_x                                    0x140280DE0
#define __ProcessGameEvents_x                                      0x140275B00
#define __ProcessKeyboardEvents_x                                  0x1403352E0
#define __ProcessMouseEvents_x                                     0x1402771E0
#define __SaveColors_x                                             0x1401970B0
#define __STMLToText_x                                             0x140579240
#define __WndProc_x                                                0x1403323B0
#define CMemoryMappedFile__SetFile_x                               0x1407D9C70
#define DrawNetStatus_x                                            0x1402C0110
#define Util__FastTime_x                                           0x140570580
#define __eq_delete_x                                              0x1406A5CE4
#define __eq_new_x                                                 0x1406A5CA0
#define __CopyLayout_x                                             0x1402AE040
#define __ThrottleFrameRate_x                                      0x140265324
#define __ThrottleFrameRateEnd_x                                   0x140265384

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140344CC0
#define CAAWnd__Update_x                                           0x140344FC0
#define CAAWnd__UpdateSelected_x                                   0x140346010

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA8A0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A3190
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14082EB78
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AB190

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A21F0
#define AltAdvManager__IsAbilityReady_x                            0x1401A2470
#define AltAdvManager__GetAAById_x                                 0x1401A1AC0
#define AltAdvManager__CanTrainAbility_x                           0x1401A18D0
#define AltAdvManager__CanSeeAbility_x                             0x1401A1590

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D10D0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1F10
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D2160
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E6010
#define CharacterZoneClient__CanUseItem_x                          0x1400E6440
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2B30
#define CharacterZoneClient__CastSpell_x                           0x1400D2BD0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1F70
#define CharacterZoneClient__Cur_HP_x                              0x1400E7B10
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7CD0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D5960
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EE1A0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FCBD0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6E10
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5910
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EFD60
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EEC30
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6FE0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C74E0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8EB0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EF370
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7780
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFFF0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D7060
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0DD0
#define CharacterZoneClient__GetModCap_x                           0x1400F8390
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D72F0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7500
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CC020
#define CharacterZoneClient__HasSkill_x                            0x1400F3DC0
#define CharacterZoneClient__HitBySpell_x                          0x1400D7FB0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB750
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7E70
#define CharacterZoneClient__Max_Endurance_x                       0x1402DC820  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F81C0
#define CharacterZoneClient__Max_Mana_x                            0x1402DCA40  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8620
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DEB00
#define CharacterZoneClient__SpellDuration_x                       0x1400DF800
#define CharacterZoneClient__TotalEffect_x                         0x1400E0B50
#define CharacterZoneClient__UseSkill_x                            0x1400FDB40


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140363180

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036D4D0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140369370
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036CF50

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036FBA0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA5430

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140392AC0
#define CChatWindowManager__InitContextMenu_x                      0x140392C50
#define CChatWindowManager__FreeChatWindow_x                       0x140391B40
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14039A830
#define CChatWindowManager__CreateChatWindow_x                     0x140391480

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140106090

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039B880
#define CChatWindow__Clear_x                                       0x14039C840
#define CChatWindow__WndNotification_x                             0x14039DA20
#define CChatWindow__AddHistory_x                                  0x14039C340

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AE3F0
#define CContextMenu__RemoveMenuItem_x                             0x1405AE7E0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AE7B0
#define CContextMenu__CheckMenuItem_x                              0x1405AE620
#define CContextMenu__SetMenuItem_x                                0x1405AE800
#define CContextMenu__AddSeparator_x                               0x1405AE560

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405A02B0
#define CContextMenuManager__RemoveMenu_x                          0x1405A0890
#define CContextMenuManager__PopupMenu_x                           0x1405A05D0
#define CContextMenuManager__Flush_x                               0x1405A0330
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A91B0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406679D0
#define CChatService__GetFriendName_x                              0x1406679E0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140591240
#define CComboWnd__Draw_x                                          0x140591340
#define CComboWnd__GetCurChoice_x                                  0x140591620  // unused
#define CComboWnd__GetListRect_x                                   0x1405916C0
#define CComboWnd__InsertChoice_x                                  0x140591A00
#define CComboWnd__SetColors_x                                     0x140591D90
#define CComboWnd__SetChoice_x                                     0x140591D50
#define CComboWnd__GetItemCount_x                                  0x1405916B0
#define CComboWnd__GetCurChoiceText_x                              0x140591660  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405915F0
#define CComboWnd__InsertChoiceAtIndex_x                           0x140591AC0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A6F20
#define CContainerWnd__SetContainer_x                              0x1403FD3B0
#define CContainerWnd__vftable_x                                   0x1409BD928

// CDisplay
#define CDisplay__cameraType_x                                     0x140D970FC
#define CDisplay__ZoneMainUI_x                                     0x1405C8530
#define CDisplay__PreZoneMainUI_x                                  0x140193FE0
#define CDisplay__CleanGameUI_x                                    0x140186150
#define CDisplay__GetClickedActor_x                                0x14018A310
#define CDisplay__GetUserDefinedColor_x                            0x14018AF80
#define CDisplay__InitCharSelectUI_x                               0x14018B230
#define CDisplay__ReloadUI_x                                       0x1401962D0
#define CDisplay__RestartUI_x                                      0x1401F5440
#define CDisplay__WriteTextHD2_x                                   0x14019D2E0
#define CDisplay__TrueDistance_x                                   0x14019CF90
#define CDisplay__SetViewActor_x                                   0x1401997D0
#define CDisplay__GetFloorHeight_x                                 0x14018A570
#define CDisplay__ToggleScreenshotMode_x                           0x14019CA80
#define CDisplay__RealRender_World_x                               0x1401956B0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D2760
#define CEditWnd__DrawCaret_x                                      0x1405C42D0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C4770
#define CEditWnd__GetCaretPt_x                                     0x1405C49F0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C4A30
#define CEditWnd__GetDisplayString_x                               0x1405C4CA0
#define CEditWnd__GetHorzOffset_x                                  0x1405C4ED0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C5020
#define CEditWnd__GetSelStartPt_x                                  0x1405C5300  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C5150
#define CEditWnd__PointFromPrintableChar_x                         0x1405C5EB0
#define CEditWnd__ReplaceSelection_x                               0x1405C6260
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C6700
#define CEditWnd__SetEditable_x                                    0x1405C6980
#define CEditWnd__SetWindowText_x                                  0x1405C69B0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140266430
#define CEverQuest__ClickedPlayer_x                                0x14025BF20
#define CEverQuest__CreateTargetIndicator_x                        0x14025C7E0
#define CEverQuest__DoTellWindow_x                                 0x140105DA0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106660 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140267DF0
#define CEverQuest__dsp_chat_x                                     0x1401057D0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402921F0
#define CEverQuest__Emote_x                                        0x1402687D0
#define CEverQuest__GetBodyTypeDesc_x                              0x140269580
#define CEverQuest__GetClassDesc_x                                 0x1402695E0
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402699B0
#define CEverQuest__GetDeityDesc_x                                 0x140269C60
#define CEverQuest__GetLangDesc_x                                  0x14026A090
#define CEverQuest__GetRaceDesc_x                                  0x14026A430
#define CEverQuest__InterpretCmd_x                                 0x14026BD70
#define CEverQuest__LeftClickedOnPlayer_x                          0x140280E50
#define CEverQuest__LMouseUp_x                                     0x14026D790
#define CEverQuest__RightClickedOnPlayer_x                         0x14027E670
#define CEverQuest__RMouseUp_x                                     0x140277D70
#define CEverQuest__SetGameState_x                                 0x140283390
#define CEverQuest__UPCNotificationFlush_x                         0x140288CC0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026D400
#define CEverQuest__ReportSuccessfulHeal_x                         0x140279120
#define CEverQuest__ReportSuccessfulHit_x                          0x140279F40

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BB620

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C1060
#define CGuild__GetGuildName_x                                     0x1400C10A0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DE890

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A3DD0
#define CHotButton__SetCheck_x                                     0x1402A40A0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F6160
#define CInvSlotMgr__MoveItem_x                                    0x1403F6340
#define CInvSlotMgr__SelectSlot_x                                  0x1403F7CF0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F3350
#define CInvSlot__SliderComplete_x                                 0x1403F48A0
#define CInvSlot__GetItemBase_x                                    0x1403EEF60
#define CInvSlot__UpdateItem_x                                     0x1403F4D60

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F9080

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14041A1F0
#define CItemDisplayWnd__UpdateStrings_x                           0x14041CB50
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140416C60
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140418430
#define CItemDisplayWnd__RequestConvertItem_x                      0x140419600

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E28E0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E45D0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051F450

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140413380

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014E6B0

// CLabel
#define CLabel__UpdateText_x                                       0x140423F60

// CListWnd
#define CListWnd__CListWnd_x                                       0x140594BD0
#define CListWnd__dCListWnd_x                                      0x140595020
#define CListWnd__vftable_x                                        0x140AA3588
#define CListWnd__AddColumn_x                                      0x1405956C0
#define CListWnd__AddColumn1_x                                     0x140595760
#define CListWnd__AddLine_x                                        0x1405958C0
#define CListWnd__AddString_x                                      0x140595E50
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405963C0
#define CListWnd__CalculateVSBRange_x                              0x1405966A0
#define CListWnd__ClearSel_x                                       0x140596850
#define CListWnd__ClearAllSel_x                                    0x1405967F0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405968B0
#define CListWnd__Compare_x                                        0x140596A70
#define CListWnd__Draw_x                                           0x140596F40
#define CListWnd__DrawColumnSeparators_x                           0x140597AF0
#define CListWnd__DrawHeader_x                                     0x140597BB0
#define CListWnd__DrawItem_x                                       0x140598280
#define CListWnd__DrawLine_x                                       0x140598C00
#define CListWnd__DrawSeparator_x                                  0x1405990C0
#define CListWnd__EnableLine_x                                     0x1405994E0
#define CListWnd__EnsureVisible_x                                  0x140599540
#define CListWnd__ExtendSel_x                                      0x140599640
#define CListWnd__GetColumnMinWidth_x                              0x140599970
#define CListWnd__GetColumnWidth_x                                 0x1405999F0
#define CListWnd__GetCurSel_x                                      0x140599AF0
#define CListWnd__GetItemData_x                                    0x140599E70
#define CListWnd__GetItemHeight_x                                  0x140599EB0
#define CListWnd__GetItemRect_x                                    0x14059A0D0
#define CListWnd__GetItemText_x                                    0x14059A370
#define CListWnd__GetSelList_x                                     0x14059A5C0
#define CListWnd__GetSeparatorRect_x                               0x14059A7B0
#define CListWnd__InsertLine_x                                     0x14059BC20
#define CListWnd__RemoveLine_x                                     0x14059C290
#define CListWnd__SetColors_x                                      0x14059C650
#define CListWnd__SetColumnJustification_x                         0x14059C670
#define CListWnd__SetColumnLabel_x                                 0x14059C6F0
#define CListWnd__SetColumnWidth_x                                 0x14059C890
#define CListWnd__SetCurSel_x                                      0x14059C960
#define CListWnd__SetItemColor_x                                   0x14059CBD0
#define CListWnd__SetItemData_x                                    0x14059CC70
#define CListWnd__SetItemText_x                                    0x14059CEB0
#define CListWnd__Sort_x                                           0x14059D2C0
#define CListWnd__ToggleSel_x                                      0x14059D430
#define CListWnd__SetColumnsSizable_x                              0x14059C8E0
#define CListWnd__SetItemWnd_x                                     0x14059CFE0
#define CListWnd__GetItemWnd_x                                     0x14059A550
#define CListWnd__SetItemIcon_x                                    0x14059CCB0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140596190
#define CListWnd__SetVScrollPos_x                                  0x14059D220

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140437250

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A0A3B8
#define MapViewMap__Clear_x                                        0x140438DD0
#define MapViewMap__SetZoom_x                                      0x14043F420
#define MapViewMap__HandleLButtonDown_x                            0x14043BF60

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140460AE0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140467080
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140467820
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14046B040
#define CMerchantWnd__SelectBuySellSlot_x                          0x14046A390
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046F2D0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140642EE0
#define CPacketScrambler__hton_x                                   0x140642ED0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BDBC0
#define CSidlManagerBase__FindAnimation1_x                         0x1405BDB00
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BE1F0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BDFA0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405BCF00
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405BCE90
#define CSidlManagerBase__CreateXWnd_x                             0x1405BC4D0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D58C0
#define CSidlManager__CreateXWnd_x                                 0x1404D5A80

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405825C0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405826F0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CCCA0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140582870
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140581CF0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140581DC0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140581FD0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140582F60
#define CSidlScreenWnd__EnableIniStorage_x                         0x140583190
#define CSidlScreenWnd__GetChildItem_x                             0x140583330
#define CSidlScreenWnd__GetSidlPiece_x                             0x140583580
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058D7B0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405838F0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140583C30
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405844F0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140584EF0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EF07F8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140585580
#define CSidlScreenWnd__StoreIniVis_x                              0x140585D70
#define CSidlScreenWnd__vftable_x                                  0x140AA27F8
#define CSidlScreenWnd__WndNotification_x                          0x140585DC0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031D090 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031D530 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031D460
#define CSkillMgr__IsActivatedSkill_x                              0x14031D8E0
#define CSkillMgr__IsCombatSkill_x                                 0x14031D920
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031D850
#define CSkillMgr__GetSkillLastUsed_x                              0x14031D4B0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059DD80
#define CSliderWnd__SetValue_x                                     0x14059E590
#define CSliderWnd__SetNumTicks_x                                  0x14059E410

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DBF30

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405A2D10
#define CStmlWnd__CalculateHSBRange_x                              0x14058D190
#define CStmlWnd__CalculateVSBRange_x                              0x1405A3BB0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A46B0
#define CStmlWnd__ForceParseNow_x                                  0x1405A4750
#define CStmlWnd__GetVisibleText_x                                 0x1405A4E20
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A6B80
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A6BC0
#define CStmlWnd__SetSTMLText_x                                    0x1405ADB90
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405ADD40
#define CStmlWnd__UpdateHistoryString_x                            0x1405AE0D0

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059E940
#define CTabWnd__DrawCurrentPage_x                                 0x14059E9E0
#define CTabWnd__DrawTab_x                                         0x14059EDB0
#define CTabWnd__GetTabRect_x                                      0x14059F420
#define CTabWnd__InsertPage_x                                      0x14059F6F0
#define CTabWnd__RemovePage_x                                      0x14059F980
#define CTabWnd__SetPage_x                                         0x14059FAE0
#define CTabWnd__UpdatePage_x                                      0x14059FDE0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C6DE0
#define CPageWnd__SetTabText_x                                     0x1405C6E50

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA790  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BABA0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B5580
#define CTextureFont__DrawWrappedText1_x                           0x1405B5490
#define CTextureFont__DrawWrappedText2_x                           0x1405B56B0
#define CTextureFont__GetTextExtent_x                              0x1405B5A60
#define CTextureFont__GetHeight_x                                  0x1405B5A20

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405CB400

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405818D0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D1FEC0
#define CXStr__gCXStrAccess_x                                      0x140EF05F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405887B0
#define CXWnd__ClrFocus_x                                          0x140588AA0
#define CXWnd__Destroy_x                                           0x140588C20
#define CXWnd__DoAllDrawing_x                                      0x140588D30
#define CXWnd__DrawColoredRect_x                                   0x140589500
#define CXWnd__DrawTooltip_x                                       0x14058AB90
#define CXWnd__DrawTooltipAtPoint_x                                0x14058AC40
#define CXWnd__GetChildItem_x                                      0x14058B550
#define CXWnd__GetChildWndAt_x                                     0x14058B610
#define CXWnd__GetClientRect_x                                     0x14058B8D0
#define CXWnd__GetClientClipRect_x                                 0x14058B780
#define CXWnd__GetRelativeRect_x                                   0x14058D2D0
#define CXWnd__GetScreenClipRect_x                                 0x14058D3E0
#define CXWnd__GetScreenRect_x                                     0x14058D530
#define CXWnd__GetTooltipRect_x                                    0x14058D6B0
#define CXWnd__IsActive_x                                          0x14058DC70
#define CXWnd__IsDescendantOf_x                                    0x14058DCA0
#define CXWnd__IsReallyVisible_x                                   0x14058DD10
#define CXWnd__IsType_x                                            0x14058DD50
#define CXWnd__Minimize_x                                          0x14058DE40
#define CXWnd__ProcessTransition_x                                 0x14058ED40
#define CXWnd__Resize_x                                            0x14058EE60
#define CXWnd__Right_x                                             0x14058EF00
#define CXWnd__SetFocus_x                                          0x14058F2D0
#define CXWnd__SetFont_x                                           0x14058F320
#define CXWnd__SetKeyTooltip_x                                     0x14058F430
#define CXWnd__SetMouseOver_x                                      0x14058F570
#define CXWnd__SetParent_x                                         0x14058F5F0
#define CXWnd__StartFade_x                                         0x14058FA40
#define CXWnd__vftable_x                                           0x140AA2DE8
#define CXWnd__CXWnd_x                                             0x140587360
#define CXWnd__dCXWnd_x                                            0x140587CA0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405D1EE0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AF9B0
#define CXWndManager__DrawCursor_x                                 0x1405AFC90
#define CXWndManager__DrawWindows_x                                0x1405AFEF0
#define CXWndManager__GetKeyboardFlags_x                           0x1405B05C0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405B0600
#define CXWndManager__RemoveWnd_x                                  0x1405B3C40

// CDBStr
#define CDBStr__GetString_x                                        0x140184310

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14064CD00

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CEC50
#define CCharacterListWnd__EnterWorld_x                            0x1400CD950
#define CCharacterListWnd__Quit_x                                  0x1400CEC30
#define CCharacterListWnd__UpdateList_x                            0x1400CFAC0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14061A8F0
#define ItemBase__CreateItemTagString_x                            0x14061B370
#define ItemBase__GetImageNum_x                                    0x14061D8F0
#define ItemBase__GetItemValue_x                                   0x14061F390
#define ItemBase__IsEmpty_x                                        0x140620F90
#define ItemBase__IsKeyRingItem_x                                  0x1406216D0
#define ItemBase__ValueSellMerchant_x                              0x140625870
#define ItemClient__CanDrop_x                                      0x1402A62D0
#define ItemClient__CanGoInBag_x                                   0x1402A6400
#define ItemClient__CreateItemClient_x                             0x1402A6680
#define ItemClient__dItemClient_x                                  0x1402A6140

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A3990
#define EQ_LoadingS__Array_x                                       0x140D0C230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1406320E0
#define PcBase__GetCombatAbility_x                                 0x1406327D0
#define PcBase__GetCombatAbilityTimer_x                            0x140632870
#define PcBase__GetItemContainedRealEstateIds_x                    0x140633010
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140633B00
#define PcClient__AlertInventoryChanged_x                          0x1402C86F0
#define PcClient__GetConLevel_x                                    0x1402C8D10  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CB4B0
#define PcClient__HasLoreItem_x                                    0x1402CC480
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D9D50
#define PcZoneClient__RemoveMyAffect_x                             0x1402DD960

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140213540  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1402136F0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140213850  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140213790  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024D520  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017EB70

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140690920
#define PlayerBase__CanSee1_x                                      0x1406909F0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140690EB0
#define PlayerBase__HasProperty_x                                  0x140691080
#define PlayerBase__IsTargetable_x                                 0x140691140
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402EA660
#define PlayerClient__GetPcClient_x                                0x1402ECE90
#define PlayerClient__PlayerClient_x                               0x1402E3930
#define PlayerClient__SetNameSpriteState_x                         0x1402F02E0
#define PlayerClient__SetNameSpriteTint_x                          0x1402F12A0
#define PlayerZoneClient__ChangeHeight_x                           0x1402FF840
#define PlayerZoneClient__DoAttack_x                               0x140300550
#define PlayerZoneClient__GetLevel_x                               0x140303C90
#define PlayerZoneClient__IsValidTeleport_x                        0x1402502B0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140192860

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F9160  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F9210  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F9310
#define PlayerManagerClient__CreatePlayer_x                        0x1402F8C30
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406904E0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AB540
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AB140
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AB1B0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AB4D0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AB660
#define KeypressHandler__HandleKeyUp_x                             0x1402AB780
#define KeypressHandler__SaveKeymapping_x                          0x1402AB3E0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14064A840  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140644610

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D2A40  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D7D70
#define PcZoneClient__GetPcSkillLimit_x                            0x1402DA450
#define PcZoneClient__RemovePetEffect_x                            0x1402DDC40
#define PcZoneClient__HasAlternateAbility_x                        0x1402DB040
#define PcZoneClient__CanEquipItem_x                               0x1402D60B0
#define PcZoneClient__GetItemByID_x                                0x1402D8E10
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DD7E0
#define PcZoneClient__BandolierSwap_x                              0x1402D5100

// Doors
#define EQSwitch__UseSwitch_x                                      0x140254DE0

// IconCache
#define IconCache__GetIcon_x                                       0x1403B12A0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A5CD0
#define CContainerMgr__CloseContainer_x                            0x1403A5610
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A6050

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14049A590

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029E5C0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14042B240
#define CLootWnd__RequestLootSlot_x                                0x14042C260

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2D40
#define EQ_Spell__SpellAffects_x                                   0x1401D4000
#define EQ_Spell__SpellAffectBase_x                                0x1401D3F60
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D76D0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7680
#define EQ_Spell__IsSPAStacking_x                                  0x1401D3C20
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D37E0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D30B0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BFCA0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F6600
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F5D10
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F5510

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FDC70  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017B530
#define CTaskManager__GetTaskStatus_x                              0x14017B640
#define CTaskManager__GetElementDescription_x                      0x14017B1C0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D10B0
#define EqSoundManager__PlayScriptMp3_x                            0x1401CFEF0
#define EqSoundManager__SoundAssistPlay_x                          0x1403226D0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140322A10  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405907F0
#define CTextureAnimation__SetCurCell_x                            0x140590B00

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029C820

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406650A0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140665120
#define CharacterBase__IsExpansionFlag_x                           0x1401F4C90

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403839E0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140384350
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403858A0

// messages
#define msg_spell_worn_off_x                                       0x140209E70
#define msg_new_text_x                                             0x140205700
#define __msgTokenTextParam_x                                      0x1401FD250
#define msgTokenText_x                                             0x1401FD170

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140324090
#define SpellManager__GetSpellByGroupAndRank_x                     0x140323FB0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069F340

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404246B0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403AA9C0
#define CCursorAttachment__IsOkToActivate_x                        0x1403AD940
#define CCursorAttachment__RemoveAttachment_x                      0x1403ADBF0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C98A0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C9A90
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C9AA0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140149920
#define CFindItemWnd__Update_x                                     0x14014A2C0
#define CFindItemWnd__PickupSelectedItem_x                         0x140143DC0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401531B0
#define LootFiltersManager__GetItemFilterData_x                    0x140153CC0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140154560
#define LootFiltersManager__SetItemLootFilter_x                    0x140154810

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047D2C0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031CC50
#define CResolutionHandler__UpdateResolution_x                     0x1406A3BA0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A1FC0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406694A0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140669390  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C79B0
#define CGroupWnd__UpdateDisplay_x                                 0x1403C7590

// ItemBase
#define ItemBase__IsLore_x                                         0x1406217A0
#define ItemBase__IsLoreEquipped_x                                 0x140621830

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BE320

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024D680
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024D610
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024D650

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140317080

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401239C0
#define FactionManagerClient__HandleFactionMessage_x               0x140123D70
#define FactionManagerClient__GetFactionStanding_x                 0x140123190
#define FactionManagerClient__GetMaxFaction_x                      0x140123190
#define FactionManagerClient__GetMinFaction_x                      0x140123040

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400ACD40

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012F160

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AC2F0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AB670
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AC110  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AC090  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140329100

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140317080

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1402138E0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405863B0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140085340

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14033ABF0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008CD10

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14064D880
#define FreeToPlayClient__RestrictionInfo_x                        0x140AB6E40

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14052C500

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
