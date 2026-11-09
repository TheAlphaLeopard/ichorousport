# Ichorous - PASS 3 decompile failures (63 of 5,555 targets)

Every failed row carries the SAME status in `ghidra_pass3_index.csv`:
`Exception while decompiling <entry>: process: timeout` - the per-function
decompiler timeout expired on a huge function body. ZERO codegen errors, so
all 63 are mechanically re-runnable: PASS 4 = raise the per-function time
budget, decompile only these entries, splice outputs into `c_code\`, update
the index status column. Pass bar (>=90% ok) PASSED: 5,492/5,555 = 98.87%.

## Breakdown by rough theme

- Struct-builder / anon Create chains: 23
- Plain object events / misc: 18
- TrueState / combat state machines: 8
- Scribble text engine: 5
- Input plugin (CursorClass/IconConfig/Motion/TypeLookup): 4
- Savedata set/get: 2
- ImGui (oImGui + sys_imgui): 2
- Room Create code: 1

## All 63 (file order from index CSV)

- gml_Script__struct_anon_139___InputCreateTypeLookup___InputCreateTypeLookup  (entry 140072ed0, span 14192 bytes)
- gml_GlobalScript___InputCursorClassPlayer  (entry 140076740, span 46075 bytes)
- gml_GlobalScript___InputIconConfigNintendo  (entry 14009c800, span 11972 bytes)
- gml_GlobalScript___InputMotionQuatToPitch  (entry 1400b4d50, span 18705 bytes)
- gml_Script_get_top_anon_28988___scribble_class_element___scribble_class_element  (entry 14011db40, span 15952 bytes)
- gml_Script___scribble_class_event  (entry 14013d2e0, span 28992 bytes)
- gml_Script___scribble_gen_3_devanagari  (entry 140195d90, span 130974 bytes)
- gml_Script___scribble_gen_9_build_vbuff_grids  (entry 1401d5df0, span 26244 bytes)
- gml_Script_savedata_set  (entry 1402d58d0, span 33569 bytes)
- gml_Script_savedata_get  (entry 1402ed340, span 35465 bytes)
- gml_Script_anon_27190_DefineBuffs_OFFERINGSINIT  (entry 1403e30d0, span 18936 bytes)
- gml_GlobalScript_PoisonDealDamage  (entry 140434890, span 23030 bytes)
- gml_Script_scribble_markdown_set_styles  (entry 14047c280, span 42060 bytes)
- gml_Script_anon_284_anon_115_speaker_get_profile_speaker_get_profile  (entry 140511c80, span 12260 bytes)
- gml_Script_StatesGrubBurrow  (entry 140523f70, span 16415 bytes)
- gml_Script_StatesGrubSlam  (entry 140534220, span 18131 bytes)
- gml_Script_StatesPatronIdle  (entry 14055b840, span 26406 bytes)
- gml_Script_StatesPatronAtk2  (entry 140563330, span 19252 bytes)
- gml_Script_StatesPestAttack  (entry 14057b8c0, span 16492 bytes)
- gml_Script_StatesPestScurry  (entry 140583e00, span 18414 bytes)
- gml_Script_truestate_system_init  (entry 14061c340, span 46143 bytes)
- gml_RoomCC_rmSqualor18_1_Create  (entry 1406706a0, span 27149 bytes)
- gml_Object_objExample_Draw_64  (entry 140693640, span 63169 bytes)
- gml_Object_oBloodDrain_Create_0  (entry 1406a4180, span 24529 bytes)
- gml_Object_oBloodPullEffect_Create_0  (entry 1406de980, span 13447 bytes)
- gml_Script____struct___347_gml_Object_oBossEmbrace_Create_0  (entry 140745810, span 29527 bytes)
- gml_Object_oBossPestHeadOld_CleanUp_0  (entry 1407b6270, span 18381 bytes)
- gml_Script____struct___372_gml_Object_oBossRecreant_Create_0  (entry 1407c6650, span 17234 bytes)
- gml_Script____struct___393_gml_Object_oBossSplit_Create_0  (entry 1408023d0, span 23675 bytes)
- gml_Object_oButtonSet_Step_0  (entry 140870720, span 19388 bytes)
- gml_Object_oCam_Alarm_0  (entry 140883a30, span 12981 bytes)
- gml_Object_oCardBlood_Create_0  (entry 140892270, span 19079 bytes)
- gml_Object_oCollectionMenu_Draw_64  (entry 1408b5860, span 17634 bytes)
- gml_Object_oContract_Step_0  (entry 1408b9e40, span 19391 bytes)
- gml_Object_oDirtPatch_Step_0  (entry 1409183f0, span 16790 bytes)
- gml_Script_anon_6029____struct___454_gml_Object_oEnemyCageShambler_Create_0  (entry 140957d70, span 14147 bytes)
- gml_Script_anon_15384____struct___456_gml_Object_oEnemyCageShambler_Create_0  (entry 140964fc0, span 24330 bytes)
- gml_Script_anon_11916____struct___461_gml_Object_oEnemyDamsel_Create_0  (entry 140982960, span 23564 bytes)
- gml_Script_anon_4987____struct___482_gml_Object_oEnemyFoulFowl_Create_0  (entry 1409d0e70, span 14291 bytes)
- gml_Script_anon_6165____struct___486_gml_Object_oEnemyMoistMan_Create_0  (entry 1409e19b0, span 14696 bytes)
- gml_Script_anon_66_gml_Object_oEnemyMoistMarauder_Create_0  (entry 140a16cf0, span 10748 bytes)
- gml_Script____struct___514_anon_3941____struct___513_gml_Object_oEnemyRotHive_Create_0  (entry 140a34040, span 12559 bytes)
- gml_Script_anon_11483____struct___518_gml_Object_oEnemyRotHive_Create_0  (entry 140a40bf0, span 16206 bytes)
- gml_Script____struct___518_gml_Object_oEnemyRotHive_Create_0  (entry 140a45340, span 18242 bytes)
- gml_Object_oEnemySewerSkeet_Alarm_0  (entry 140a5be60, span 18728 bytes)
- gml_Script_anon_66_gml_Object_oEnemySkele_Create_0  (entry 140a70b00, span 13697 bytes)
- gml_Object_oFlameExplosion_Create_0  (entry 140ad4880, span 20649 bytes)
- gml_Object_oIKTest_Create_0  (entry 140b14310, span 25779 bytes)
- gml_Object_oImGui_Create_0  (entry 140b1e4f0, span 21254 bytes)
- gml_Script_anon_6128_gml_Object_oOcean_Create_0  (entry 140b66b60, span 21005 bytes)
- gml_Object_oOfferingManager_Create_0  (entry 140b76880, span 25891 bytes)
- gml_Script_anon_270_gml_Object_oOfferingManager_Create_0  (entry 140b7cdb0, span 20349 bytes)
- gml_Object_oOfferingPullEffect_Create_0  (entry 140b934a0, span 18519 bytes)
- gml_Object_oPatronTendril_Draw_0  (entry 140bda130, span 11171 bytes)
- gml_Object_oPlatStone_PreCreate_0  (entry 140c54cd0, span 40477 bytes)
- gml_Script_anon_16872_anon_16129_gml_Object_oPlayer_Other_10  (entry 140c75680, span 15542 bytes)
- gml_Script_anon_544____struct___702_gml_Object_oPlayerPause_Create_0  (entry 140c8cdf0, span 12211 bytes)
- gml_Script____struct___711_gml_Object_oPlayerPause_Draw_73  (entry 140c907e0, span 39230 bytes)
- gml_Script____struct___736_anon_8743_anon_8364_gml_Object_oRogueLevelManager_Create_0  (entry 140cbeba0, span 16666 bytes)
- gml_Script_anon_346_gml_Object_oSalesman_Create_0  (entry 140d56160, span 19880 bytes)
- gml_Object_oTumorHemangioma_Create_0  (entry 140ddec80, span 25511 bytes)
- gml_Script_anon_12642_gml_Object_oUIManager_Other_10  (entry 140e11990, span 31919 bytes)
- gml_Object_sys_imgui_Create_0  (entry 140e32d60, span 27568 bytes)
