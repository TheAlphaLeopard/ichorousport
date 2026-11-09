// gml_Object_oBossClot_Step_0 @ 0x14071b3b0

undefined8 * gml_Object_oBossClot_Step_0(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  double dVar13;
  code *pcVar14;
  undefined4 uVar18;
  undefined1 **ppuVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong in_stack_fffffffffffff740;
  undefined1 **ppuVar19;
  undefined8 local_8b8;
  undefined4 local_8b0;
  undefined4 local_8ac;
  undefined1 *local_8a8;
  undefined4 local_89c;
  undefined8 local_898;
  char *local_890;
  undefined4 local_888;
  undefined1 local_880 [16];
  undefined8 local_870;
  undefined4 local_868;
  undefined4 local_864;
  undefined8 local_860;
  undefined4 local_858;
  undefined4 local_854;
  undefined8 local_850;
  undefined4 local_848;
  undefined4 local_844;
  undefined8 local_840;
  undefined4 local_838;
  undefined4 local_834;
  undefined1 *local_828;
  undefined1 *local_820;
  undefined1 *local_818;
  undefined1 *local_810;
  undefined1 *local_808;
  undefined1 *local_800;
  undefined1 *local_7f8;
  undefined1 *local_7f0;
  undefined1 *local_7e8;
  undefined1 *local_7e0;
  undefined8 local_7d8;
  undefined4 local_7cc;
  longlong *local_7c8;
  undefined4 local_7bc;
  undefined8 local_7b8;
  undefined4 local_7ac;
  longlong *local_7a8;
  undefined4 local_79c;
  undefined1 local_798 [16];
  undefined1 local_788 [16];
  undefined1 local_778 [16];
  undefined1 local_768 [16];
  undefined1 local_758 [16];
  undefined1 local_748 [16];
  undefined1 local_738 [16];
  undefined1 local_728 [16];
  undefined1 local_718 [16];
  undefined1 local_708 [16];
  undefined1 local_6f8 [16];
  undefined8 local_6e8;
  undefined4 local_6dc;
  undefined8 local_6d8;
  undefined4 local_6cc;
  undefined8 local_6c8;
  undefined4 local_6bc;
  undefined8 local_6b8;
  undefined4 local_6ac;
  undefined8 local_6a8;
  undefined4 local_69c;
  undefined8 local_698;
  undefined4 local_68c;
  undefined8 local_688;
  undefined4 local_67c;
  undefined8 local_678;
  undefined4 local_66c;
  undefined1 local_668 [16];
  longlong *local_658;
  undefined4 local_64c;
  undefined1 local_648 [16];
  undefined8 local_638;
  undefined4 local_62c;
  undefined8 local_628;
  undefined4 local_61c;
  undefined8 local_618;
  undefined4 local_60c;
  undefined8 local_608;
  undefined4 local_5fc;
  undefined8 local_5f8;
  undefined4 local_5ec;
  undefined8 local_5e8;
  undefined4 local_5dc;
  undefined8 local_5d8;
  undefined4 local_5cc;
  undefined8 local_5c8;
  undefined4 local_5bc;
  undefined8 local_5b8;
  undefined4 local_5ac;
  undefined8 local_5a8;
  undefined4 local_59c;
  undefined8 local_598;
  undefined4 local_58c;
  undefined8 local_588;
  undefined4 local_57c;
  undefined8 local_578;
  undefined4 local_56c;
  undefined8 local_568;
  undefined4 local_55c;
  undefined8 local_558;
  undefined4 local_54c;
  undefined8 local_548;
  undefined4 local_53c;
  undefined8 local_538;
  undefined4 local_52c;
  undefined8 local_528;
  undefined4 local_51c;
  undefined8 local_518;
  undefined4 local_50c;
  undefined8 local_508;
  undefined4 local_4fc;
  undefined8 local_4f8;
  undefined4 local_4ec;
  undefined8 local_4e8;
  undefined4 local_4dc;
  undefined8 local_4d8;
  undefined4 local_4cc;
  undefined8 local_4c8;
  undefined4 local_4bc;
  undefined8 local_4b8;
  undefined4 local_4ac;
  undefined8 local_4a8;
  undefined4 local_49c;
  undefined8 local_498;
  undefined4 local_48c;
  undefined8 local_488;
  undefined4 local_47c;
  undefined8 local_478;
  undefined4 local_46c;
  undefined8 local_468;
  undefined4 local_45c;
  undefined8 local_458;
  undefined4 local_44c;
  undefined8 local_448;
  undefined4 local_43c;
  undefined8 local_438;
  undefined4 local_42c;
  undefined8 local_428;
  undefined4 local_41c;
  undefined8 local_418;
  undefined4 local_40c;
  undefined1 *local_408;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined4 local_3dc;
  undefined8 local_3d8;
  undefined4 local_3cc;
  undefined8 local_3c8;
  undefined4 local_3bc;
  undefined8 local_3b8;
  undefined4 local_3ac;
  undefined8 local_3a8;
  undefined4 local_39c;
  undefined8 local_398;
  undefined4 local_38c;
  undefined8 local_388;
  undefined4 local_37c;
  undefined8 local_378;
  undefined4 local_36c;
  undefined8 local_368;
  undefined4 local_35c;
  undefined1 *local_358;
  undefined4 local_34c;
  undefined8 local_348;
  undefined4 local_33c;
  undefined8 local_338;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_31c;
  undefined1 *local_318;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined1 *local_228;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined1 *local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined1 *local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  
  local_890 = "gml_Script_anon@22446@___struct___337@gml_Object_oBossClot_Create_0";
  local_898 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_898;
  local_888 = 0x49d;
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_798,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_69c = 0xffffff;
  local_6a8 = 0;
  local_5dc = 0xffffff;
  local_5e8 = 0;
  local_68c = 0xffffff;
  local_698 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_7cc = 0xffffff;
  local_7d8 = 0;
  local_7ac = 0xffffff;
  local_7b8 = 0;
  local_61c = 0xffffff;
  local_628 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_5cc = 0xffffff;
  local_5d8 = 0;
  local_6dc = 0xffffff;
  local_6e8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_66c = 0xffffff;
  local_678 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_5bc = 0xffffff;
  local_5c8 = 0;
  local_60c = 0xffffff;
  local_618 = 0;
  local_4dc = 0xffffff;
  local_4e8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_4ec = 0xffffff;
  local_4f8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_4fc = 0xffffff;
  local_508 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_42c = 0xffffff;
  local_438 = 0;
  local_1dc = 0xffffff;
  local_1e8 = (undefined1 *)0x0;
  local_51c = 0xffffff;
  local_528 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_52c = 0xffffff;
  local_538 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_53c = 0xffffff;
  local_548 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_54c = 0xffffff;
  local_558 = 0;
  local_21c = 0xffffff;
  local_228 = (undefined1 *)0x0;
  local_6ac = 0xffffff;
  local_6b8 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_62c = 0xffffff;
  local_638 = 0;
  local_67c = 0xffffff;
  local_688 = 0;
  local_5ec = 0xffffff;
  local_5f8 = 0;
  local_5fc = 0xffffff;
  local_608 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_55c = 0xffffff;
  local_568 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_6bc = 0xffffff;
  local_6c8 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_56c = 0xffffff;
  local_578 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_57c = 0xffffff;
  local_588 = 0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_58c = 0xffffff;
  local_598 = 0;
  local_2fc = 0xffffff;
  local_308 = 0;
  local_59c = 0xffffff;
  local_5a8 = 0;
  local_30c = 0xffffff;
  local_318 = (undefined1 *)0x0;
  local_5ac = 0xffffff;
  local_5b8 = 0;
  local_31c = 0xffffff;
  local_328 = 0;
  local_43c = 0xffffff;
  local_448 = 0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_44c = 0xffffff;
  local_458 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_4ac = 0xffffff;
  local_4b8 = 0;
  local_34c = 0xffffff;
  local_358 = (undefined1 *)0x0;
  local_35c = 0xffffff;
  local_368 = 0;
  local_36c = 0xffffff;
  local_378 = 0;
  local_37c = 0xffffff;
  local_388 = 0;
  local_38c = 0xffffff;
  local_398 = 0;
  local_39c = 0xffffff;
  local_3a8 = 0;
  local_3ac = 0xffffff;
  local_3b8 = 0;
  local_3bc = 0xffffff;
  local_3c8 = 0;
  local_4bc = 0xffffff;
  local_4c8 = 0;
  local_3cc = 0xffffff;
  local_3d8 = 0;
  local_49c = 0xffffff;
  local_4a8 = 0;
  local_3dc = 0xffffff;
  local_3e8 = 0;
  local_45c = 0xffffff;
  local_468 = 0;
  local_3ec = 0xffffff;
  local_3f8 = 0;
  local_50c = 0xffffff;
  local_518 = 0;
  local_3fc = 0xffffff;
  local_408 = (undefined1 *)0x0;
  local_4cc = 0xffffff;
  local_4d8 = 0;
  local_40c = 0xffffff;
  local_418 = 0;
  local_48c = 0xffffff;
  local_498 = 0;
  local_41c = 0xffffff;
  local_428 = 0;
  local_47c = 0xffffff;
  local_488 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_46c = 0xffffff;
  local_478 = 0;
  local_10c = 0xffffff;
  local_118 = (undefined1 *)0x0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_8ac = 0;
  local_8b8 = 0;
  local_864 = 0;
  local_870 = 0;
  local_834 = 0;
  local_840 = 0;
  local_844 = 0;
  local_850 = 0;
  local_854 = 0;
  local_860 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_888 = 0x49e;
  local_e8 = uVar4;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  in_stack_fffffffffffff740 = in_stack_fffffffffffff740 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_141a0ab48,0x80000000,&local_6a8,uVar6,in_stack_fffffffffffff740);
  FUN_1400424a0(&local_8a8,&DAT_141dd6078);
  iVar2 = FUN_140e851f0(&local_6a8,&local_8a8,DAT_141955260,0);
  if ((1 << ((byte)local_89c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_8a8);
  }
  if (iVar2 == 0) {
    local_888 = 0x4a0;
    if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_8b8);
    }
    local_8b8 = 0;
    local_8b0 = 0;
    local_8ac = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
    FUN_1400441d0(local_798,&DAT_1419e7c30);
    local_828 = local_798;
    FUN_1400441d0(local_788,&DAT_1419e7b40);
    local_820 = local_788;
    FUN_1400441d0(local_778,&DAT_1419e7cd0);
    local_818 = local_778;
    ppuVar19 = &local_828;
    FUN_140e63610(param_1,param_2,&local_8b8,3,uVar6,ppuVar19);
    local_888 = 0x4a2;
    if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_8b8);
    }
    local_8b8 = 0;
    local_8b0 = 0;
    local_8ac = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_5e8,uVar6,
                  (ulonglong)ppuVar19 & 0xffffffffffffff00);
    uVar18 = (undefined4)(uVar6 >> 0x20);
    FUN_1400441d0(local_798,&DAT_141dc6950);
    local_828 = local_798;
    ppuVar19 = &local_828;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_8b8,1,CONCAT44(uVar18,DAT_141a0a0d8),ppuVar19);
    uVar4 = FUN_1400b46b0(&local_8a8,uVar4,0x3fe0000000000000);
    uVar3 = FUN_140e851f0(&local_5e8,uVar4,DAT_141955260,1);
    if ((1 << ((byte)local_89c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_8a8);
    }
    if (uVar3 < 0x80000000) {
      local_888 = 0x4a4;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      FUN_140041c60(&local_698,&DAT_141dd6068);
      FUN_140e87930(uVar4,DAT_141a0ab48,0x80000000,&local_698);
      local_888 = 0x4a5;
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
      FUN_140044220(uVar4,0);
      local_888 = 0x4a6;
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      FUN_140044220(uVar4,0xfffffffb);
      local_888 = 0x4a7;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd448);
      uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
      FUN_140e609c0(param_1);
      uVar4 = FUN_1400b46b0(&local_8a8,uVar4,0x3fe0000000000000);
      FUN_140041c60(uVar5,uVar4);
      if ((1 << ((byte)local_89c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_8a8);
      }
      FUN_140e60910(1);
      local_888 = 0x4a8;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd518);
      uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
      FUN_140e609c0(param_1);
      uVar4 = FUN_140087a30(&local_8a8,uVar4,2);
      FUN_140041c60(uVar5,uVar4);
      if ((1 << ((byte)local_89c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_8a8);
      }
      FUN_140e60910(1);
      local_888 = 0x4aa;
      if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_8b8);
      }
      local_8b8 = 0;
      local_8b0 = 0;
      local_8ac = 5;
      FUN_1400441d0(local_798,&DAT_1419e7c40);
      local_828 = local_798;
      FUN_1400441d0(local_788,&DAT_1419e7c40);
      local_820 = local_788;
      FUN_1400441d0(local_778,&DAT_1419e7cb0);
      local_818 = local_778;
      FUN_1400441d0(local_768,&DAT_1419df7c0);
      local_810 = local_768;
      ppuVar15 = &local_828;
      FUN_14044e5b0(param_1,param_2,&local_8b8,4,ppuVar15);
      local_888 = 0x4ab;
      if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_8b8);
      }
      local_8b8 = 0;
      local_8b0 = 0;
      local_8ac = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06888);
      FUN_140e87440(uVar4,DAT_1419f4a98,0x80000000,&local_138,
                    (ulonglong)ppuVar15 & 0xffffffffffffff00,
                    (ulonglong)ppuVar19 & 0xffffffffffffff00);
      uVar4 = FUN_140069500(uVar4);
      FUN_140e63610(uVar4,param_2,&local_8b8,0,&local_138,0);
    }
    local_888 = 0x4ae;
    if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_8b8);
    }
    local_8b8 = 0;
    local_8b0 = 0;
    local_8ac = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
    FUN_140e63610(param_1,param_2,&local_8b8,0,uVar4,0);
    local_888 = 0x4af;
    if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_8b8);
    }
    local_8b8 = 0;
    local_8b0 = 0;
    local_8ac = 5;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
LAB_14072090e:
    ppuVar19 = (undefined1 **)0x0;
    FUN_140e63610(param_1,param_2,&local_8b8,0,puVar7,0);
  }
  else {
    local_888 = 0x4b1;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    in_stack_fffffffffffff740 = in_stack_fffffffffffff740 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a0ab48,0x80000000,&local_6a8,uVar6,in_stack_fffffffffffff740);
    FUN_1400424a0(&local_8a8,&DAT_141dd6068);
    iVar2 = FUN_140e851f0(&local_6a8,&local_8a8,DAT_141955260,0);
    if ((1 << ((byte)local_89c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_8a8);
    }
    if (iVar2 == 0) {
      local_888 = 0x4b3;
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      FUN_140162c50(uVar4,0x3fc999999999999a);
      local_888 = 0x4b4;
      if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_8b8);
      }
      local_8b8 = 0;
      local_8b0 = 0;
      local_8ac = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
      FUN_1400441d0(local_798,&DAT_1419e7b40);
      local_828 = local_798;
      FUN_1400441d0(local_788,&DAT_1419e7c40);
      local_820 = local_788;
      FUN_1400441d0(local_778,&DAT_1419e7bf0);
      local_818 = local_778;
      ppuVar19 = &local_828;
      FUN_140e63610(param_1,param_2,&local_8b8,3,uVar6,ppuVar19);
      local_888 = 0x4b6;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      cVar1 = FUN_140046dd0(uVar4,0);
      if (cVar1 != '\0') {
        if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_8b8);
        }
        local_8b8 = 0;
        local_8b0 = 0;
        local_8ac = 5;
        local_7bc = 6;
        uVar16 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
        uVar6 = uVar6 & 0xffffffffffffff00;
        local_7c8 = param_1;
        FUN_140e87440(&local_7c8,DAT_1419fe0e8,0x80000000,&local_7d8,uVar6,uVar16);
        if ((1 << ((byte)local_7bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_7c8);
        }
        local_7bc = 6;
        uVar6 = uVar6 & 0xffffffffffffff00;
        local_7c8 = param_1;
        FUN_140e87440(&local_7c8,DAT_1419fe158,0x80000000,&local_7b8,uVar6,
                      uVar16 & 0xffffffffffffff00);
        uVar18 = (undefined4)(uVar6 >> 0x20);
        if ((1 << ((byte)local_7bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_7c8);
        }
        FUN_140041c60(local_798,&local_7d8);
        local_828 = local_798;
        uVar4 = FUN_140053820(&local_8a8,&local_7b8,2);
        FUN_140041c60(local_788,uVar4);
        if ((1 << ((byte)local_89c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_8a8);
        }
        local_820 = local_788;
        local_7bc = 0xf;
        local_7c8 = (longlong *)0x100000000000149;
        FUN_140041c60(local_778,&local_7c8);
        if ((1 << ((byte)local_7bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_7c8);
        }
        local_818 = local_778;
        ppuVar19 = &local_828;
        uVar6 = CONCAT44(uVar18,DAT_141a12628);
        uVar4 = FUN_140e634e0(param_1,param_2,&local_8b8,3,uVar6,ppuVar19);
        cVar1 = FUN_140e491e0(uVar4);
        if (cVar1 != '\0') {
          local_888 = 0x4b8;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
          FUN_140041c60(&local_698,&DAT_141dd6048);
          FUN_140e87930(uVar4,DAT_141a0ab48,0x80000000,&local_698);
          local_888 = 0x4b9;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
          FUN_140044220(&local_628,0);
          FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_628);
          local_888 = 0x4ba;
          uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
          FUN_140044220(uVar4,0);
          local_888 = 0x4bb;
          uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
          FUN_140044220(uVar4,0);
          local_888 = 0x4bd;
          if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_8b8);
          }
          local_8b8 = 0;
          local_8b0 = 0;
          local_8ac = 5;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06268);
          FUN_140e87440(uVar4,DAT_1419f4a98,0x80000000,&local_148,uVar6 & 0xffffffffffffff00,
                        (ulonglong)ppuVar19 & 0xffffffffffffff00);
          uVar4 = FUN_140069500(uVar4);
          puVar7 = &local_148;
          FUN_140e63610(uVar4,param_2,&local_8b8,0,puVar7,0);
          uVar18 = (undefined4)((ulonglong)puVar7 >> 0x20);
          local_888 = 0x4be;
          if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_8b8);
          }
          local_8b8 = 0;
          local_8b0 = 0;
          local_8ac = 5;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
          local_7bc = 0xf;
          local_7c8 = (longlong *)0x100000200000030;
          FUN_140041c60(local_798,&local_7c8);
          if ((1 << ((byte)local_7bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_7c8);
          }
          local_828 = local_798;
          FUN_1400441d0(local_788,&DAT_1419e7bc0);
          local_820 = local_788;
          FUN_1400441d0(local_778,&DAT_1419df7c0);
          local_818 = local_778;
          ppuVar19 = &local_828;
          uVar6 = CONCAT44(uVar18,DAT_141a0a2e8);
          uVar5 = FUN_140e634e0(param_1,param_2,&local_8b8,3,uVar6,ppuVar19);
          FUN_140041c60(&local_158,uVar5);
          FUN_140e87930(uVar4,DAT_141a06238,0x80000000,&local_158);
          local_888 = 0x4c0;
          FUN_140044220(&local_5d8,0xffffffff);
          iVar2 = 2;
          do {
            iVar2 = iVar2 + -1;
            local_888 = 0x4c3;
            if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_8b8);
            }
            local_8b8 = 0;
            local_8b0 = 0;
            local_8ac = 5;
            local_7bc = 6;
            uVar16 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
            uVar6 = uVar6 & 0xffffffffffffff00;
            local_7c8 = param_1;
            FUN_140e87440(&local_7c8,DAT_1419fe0e8,0x80000000,&local_7d8,uVar6,uVar16);
            if ((1 << ((byte)local_7bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_7c8);
            }
            local_64c = 6;
            uVar6 = uVar6 & 0xffffffffffffff00;
            local_658 = param_1;
            FUN_140e87440(&local_658,DAT_1419fe158,0x80000000,&local_7b8,uVar6,
                          uVar16 & 0xffffffffffffff00);
            uVar18 = (undefined4)(uVar6 >> 0x20);
            if ((1 << ((byte)local_64c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_658);
            }
            FUN_140041c20(local_668,10);
            FUN_140042560(local_668,&local_5d8);
            FUN_1400424a0(local_648,&local_7d8);
            FUN_1400460e0(local_648,local_668);
            FUN_140041c60(local_798,local_648);
            if ((1 << (local_648[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_648);
            }
            if ((1 << (local_668[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_668);
            }
            local_828 = local_798;
            uVar4 = FUN_140053940(local_880,&local_7b8,8);
            FUN_140041c60(local_788,uVar4);
            if ((1 << (local_880[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_880);
            }
            local_820 = local_788;
            FUN_140041c60(local_778,&DAT_141dd6168);
            local_818 = local_778;
            local_6cc = 0xf;
            local_6d8 = 0x100000000000066;
            FUN_140041c60(local_768,&local_6d8);
            if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_6d8);
            }
            local_810 = local_768;
            ppuVar19 = &local_828;
            uVar6 = CONCAT44(uVar18,DAT_141a0a7c8);
            uVar4 = FUN_140e634e0(param_1,param_2,&local_8b8,4,uVar6,ppuVar19);
            FUN_140041c60(&local_6e8,uVar4);
            local_888 = 0x4c4;
            FUN_140042540(local_6f8,0x3ff8000000000000);
            FUN_140042560(local_6f8,&local_5d8);
            FUN_140041c60(&local_168,local_6f8);
            if ((1 << (local_6f8[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_6f8);
            }
            FUN_140e87930(&local_6e8,DAT_141a1f230,0x80000000,&local_168);
            local_888 = 0x4c5;
            FUN_140044220(&local_178,0xfffffffc);
            FUN_140e87930(&local_6e8,DAT_141a1f500,0x80000000,&local_178);
            local_888 = 0x4c6;
            local_79c = 6;
            ppuVar19 = (undefined1 **)((ulonglong)ppuVar19 & 0xffffffffffffff00);
            uVar6 = uVar6 & 0xffffffffffffff00;
            local_7a8 = param_1;
            FUN_140e87440(&local_7a8,DAT_141a0a828,0x80000000,&local_678,uVar6,ppuVar19);
            if ((1 << ((byte)local_79c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_7a8);
            }
            FUN_140041c60(&local_188,&local_678);
            FUN_140e87930(&local_6e8,DAT_141a1f0d0,0x80000000,&local_188);
            local_888 = 0x4c7;
            FUN_140044220(&local_198,8);
            FUN_140e87930(&local_6e8,DAT_141a0a7d8,0x80000000,&local_198);
            local_888 = 0x4c8;
            FUN_140044220(&local_1a8,8);
            FUN_140e87930(&local_6e8,DAT_1419f59c8,0x80000000,&local_1a8);
            local_888 = 0x4c9;
            local_89c = 0;
            local_8a8 = &DAT_bff0000000000000;
            FUN_140042560(&local_5d8,&local_8a8);
            if ((1 << ((byte)local_89c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_8a8);
            }
          } while (0 < iVar2);
          local_888 = 0x4cc;
          local_89c = 0xd;
          local_8a8 = (undefined1 *)0x0;
          FUN_140041c60(&local_5c8,&local_8a8);
          iVar2 = 2;
          if ((1 << ((byte)local_89c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_8a8);
          }
          FUN_140e86fa0(param_1,DAT_1419f61d8,0x80000000,&local_5c8);
          local_888 = 0x4cd;
          local_89c = 0xf;
          local_8a8 = (undefined1 *)0x10000010000011b;
          FUN_140041c60(&local_618,&local_8a8);
          if ((1 << ((byte)local_89c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_8a8);
          }
          FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_618);
          local_888 = 0x4cf;
          if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_8b8);
          }
          local_8b8 = 0;
          local_8b0 = 0;
          local_8ac = 5;
          FUN_1400441d0(local_798,&DAT_1419e7d90);
          local_828 = local_798;
          FUN_1400441d0(local_788,&DAT_1419e7d80);
          local_820 = local_788;
          FUN_1400441d0(local_778,&DAT_1419e7c90);
          local_818 = local_778;
          FUN_1400441d0(local_768,&DAT_1419df7c0);
          local_810 = local_768;
          ppuVar15 = &local_828;
          FUN_14044e5b0(param_1,param_2,&local_8b8,4,ppuVar15);
          iVar11 = 7;
          do {
            iVar11 = iVar11 + -1;
            local_888 = 0x4d7;
            if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_8b8);
            }
            local_8b8 = 0;
            local_8b0 = 0;
            local_8ac = 5;
            if ((1 << ((byte)local_864 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_870);
            }
            local_870 = 0;
            local_868 = 0;
            local_864 = 5;
            if ((1 << ((byte)local_834 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_840);
            }
            local_840 = 0;
            local_838 = 0;
            local_834 = 5;
            if ((1 << ((byte)local_844 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_850);
            }
            local_850 = 0;
            local_848 = 0;
            local_844 = 5;
            if ((1 << ((byte)local_854 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_860);
            }
            local_860 = 0;
            local_858 = 0;
            local_854 = 5;
            FUN_1400ec6d0(local_880,param_1);
            uVar16 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
            uVar6 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
            FUN_140e87440(local_880,DAT_1419fe0e8,0x80000000,&local_7d8,uVar6,uVar16);
            FUN_140041b30(local_880);
            FUN_1400ec6d0(&local_8a8,param_1);
            uVar16 = uVar16 & 0xffffffffffffff00;
            FUN_140e87440(&local_8a8,DAT_1419fe158,0x80000000,&local_7b8,uVar6 & 0xffffffffffffff00,
                          uVar16);
            FUN_140041b30(&local_8a8);
            uVar4 = FUN_140e794b0(0xc038000000000000,0x4038000000000000);
            uVar4 = FUN_140162e10(&local_7a8,&local_7d8,uVar4);
            FUN_140041c60(local_798,uVar4);
            FUN_140041b30(&local_7a8);
            local_828 = local_798;
            uVar4 = FUN_140053820(local_6f8,&local_7b8,8);
            FUN_140041c60(local_788,uVar4);
            FUN_140041b30(local_6f8);
            local_820 = local_788;
            FUN_1400441d0(local_778,&DAT_1419df7a0);
            local_818 = local_778;
            ppuVar19 = &local_828;
            uVar4 = FUN_14040f420(param_1,param_2,&local_8b8,3,ppuVar19);
            FUN_140041c60(&local_4e8,uVar4);
            FUN_140e87440(&local_4e8,DAT_141a0a9f8,0x80000000,&local_1b8,
                          (ulonglong)ppuVar19 & 0xffffffffffffff00,uVar16 & 0xffffffffffffff00);
            uVar4 = FUN_140045f40(&local_6d8,0x10001d0,1);
            FUN_140041c60(local_768,uVar4);
            FUN_140041b30(&local_6d8);
            local_810 = local_768;
            uVar4 = FUN_140e794b0(0x3fe999999999999a,0x3ff3333333333333);
            FUN_140041cb0(local_758,uVar4);
            local_808 = local_758;
            uVar4 = FUN_140069500(&local_4e8);
            ppuVar19 = &local_810;
            puVar7 = &local_1b8;
            uVar4 = FUN_140e63610(uVar4,param_2,&local_870,2,puVar7,ppuVar19);
            FUN_140041c60(&local_4f8,uVar4);
            FUN_140e87440(&local_4f8,DAT_1419f5d48,0x80000000,&local_1c8,
                          (ulonglong)puVar7 & 0xffffffffffffff00,
                          (ulonglong)ppuVar19 & 0xffffffffffffff00);
            FUN_1400441d0(local_748,&DAT_1419df7a0);
            local_800 = local_748;
            uVar4 = FUN_140069500(&local_4f8);
            uVar4 = FUN_140e63610(uVar4,param_2,&local_840,1,&local_1c8,&local_800);
            FUN_140041c60(&local_508,uVar4);
            FUN_140e87170(&local_508,DAT_1419f57f8,0x80000000,&local_f8,param_1,param_2);
            uVar4 = FUN_140e794b0(0x4000000000000000,0x4018000000000000);
            FUN_140041cb0(local_738,uVar4);
            local_7f8 = local_738;
            FUN_1400441d0(local_728,&DAT_141dc6950);
            local_7f0 = local_728;
            FUN_1400441d0(local_718,&DAT_1419e7d00);
            local_7e8 = local_718;
            uVar4 = FUN_140069500(&local_508);
            uVar4 = FUN_140e63610(uVar4,param_2,&local_850,3,&local_f8,&local_7f8);
            FUN_140041c60(&local_438,uVar4);
            FUN_140e87170(&local_438,DAT_1419f5dc8,0x80000000,&local_1e8,param_1,param_2);
            uVar4 = FUN_140e794b0(0x4044000000000000,0x4061800000000000);
            FUN_140041cb0(local_708,uVar4);
            local_7e0 = local_708;
            uVar4 = FUN_140069500(&local_438);
            ppuVar19 = &local_7e0;
            ppuVar15 = &local_1e8;
            FUN_140e63610(uVar4,param_2,&local_860,1,ppuVar15,ppuVar19);
          } while (0 < iVar11);
          iVar11 = 4;
          do {
            iVar11 = iVar11 + -1;
            local_888 = 0x4df;
            if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_8b8);
            }
            local_8b8 = 0;
            local_8b0 = 0;
            local_8ac = 5;
            if ((1 << ((byte)local_864 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_870);
            }
            local_870 = 0;
            local_868 = 0;
            local_864 = 5;
            if ((1 << ((byte)local_834 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_840);
            }
            local_840 = 0;
            local_838 = 0;
            local_834 = 5;
            if ((1 << ((byte)local_844 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_850);
            }
            local_850 = 0;
            local_848 = 0;
            local_844 = 5;
            if ((1 << ((byte)local_854 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_860);
            }
            local_860 = 0;
            local_858 = 0;
            local_854 = 5;
            FUN_1400ec6d0(local_880,param_1);
            uVar16 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
            uVar6 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
            FUN_140e87440(local_880,DAT_1419fe0e8,0x80000000,&local_7d8,uVar6,uVar16);
            FUN_140041b30(local_880);
            FUN_1400ec6d0(&local_8a8,param_1);
            uVar16 = uVar16 & 0xffffffffffffff00;
            FUN_140e87440(&local_8a8,DAT_1419fe158,0x80000000,&local_7b8,uVar6 & 0xffffffffffffff00,
                          uVar16);
            FUN_140041b30(&local_8a8);
            uVar4 = FUN_140e794b0(0xc038000000000000,0x4038000000000000);
            uVar4 = FUN_140162e10(&local_7a8,&local_7d8,uVar4);
            FUN_140041c60(local_798,uVar4);
            FUN_140041b30(&local_7a8);
            local_828 = local_798;
            uVar4 = FUN_140053820(local_6f8,&local_7b8,8);
            FUN_140041c60(local_788,uVar4);
            FUN_140041b30(local_6f8);
            local_820 = local_788;
            FUN_1400441d0(local_778,&DAT_1419df7a0);
            local_818 = local_778;
            ppuVar19 = &local_828;
            uVar4 = FUN_14040f420(param_1,param_2,&local_8b8,3,ppuVar19);
            FUN_140041c60(&local_528,uVar4);
            FUN_140e87440(&local_528,DAT_141a0a9f8,0x80000000,&local_1f8,
                          (ulonglong)ppuVar19 & 0xffffffffffffff00,uVar16 & 0xffffffffffffff00);
            uVar4 = FUN_140045f40(&local_6d8,0x1000135,1);
            FUN_140041c60(local_768,uVar4);
            FUN_140041b30(&local_6d8);
            local_810 = local_768;
            uVar4 = FUN_140e794b0(0x3fe999999999999a,0x3ff3333333333333);
            FUN_140041cb0(local_758,uVar4);
            local_808 = local_758;
            uVar4 = FUN_140069500(&local_528);
            ppuVar19 = &local_810;
            puVar7 = &local_1f8;
            uVar4 = FUN_140e63610(uVar4,param_2,&local_870,2,puVar7,ppuVar19);
            FUN_140041c60(&local_538,uVar4);
            FUN_140e87440(&local_538,DAT_1419f5d48,0x80000000,&local_208,
                          (ulonglong)puVar7 & 0xffffffffffffff00,
                          (ulonglong)ppuVar19 & 0xffffffffffffff00);
            FUN_1400441d0(local_748,&DAT_1419df7a0);
            local_800 = local_748;
            uVar4 = FUN_140069500(&local_538);
            uVar4 = FUN_140e63610(uVar4,param_2,&local_840,1,&local_208,&local_800);
            FUN_140041c60(&local_548,uVar4);
            FUN_140e87170(&local_548,DAT_1419f57f8,0x80000000,&local_218,param_1,param_2);
            uVar4 = FUN_140e794b0(0x3fe0000000000000,0x4008000000000000);
            FUN_140041cb0(local_738,uVar4);
            local_7f8 = local_738;
            FUN_1400441d0(local_728,&DAT_141dc6950);
            local_7f0 = local_728;
            FUN_1400441d0(local_718,&DAT_1419e7d00);
            local_7e8 = local_718;
            uVar4 = FUN_140069500(&local_548);
            uVar4 = FUN_140e63610(uVar4,param_2,&local_850,3,&local_218,&local_7f8);
            FUN_140041c60(&local_558,uVar4);
            FUN_140e87170(&local_558,DAT_1419f5dc8,0x80000000,&local_228,param_1,param_2);
            uVar4 = FUN_140e794b0(0x404e000000000000,0x405e000000000000);
            FUN_140041cb0(local_708,uVar4);
            local_7e0 = local_708;
            uVar4 = FUN_140069500(&local_558);
            ppuVar19 = &local_7e0;
            ppuVar15 = &local_228;
            FUN_140e63610(uVar4,param_2,&local_860,1,ppuVar15,ppuVar19);
          } while (0 < iVar11);
          local_888 = 0x4e2;
          FUN_140044220(&local_6b8,0xffffffff);
          do {
            iVar2 = iVar2 + -1;
            local_888 = 0x4e5;
            if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_8b8);
            }
            local_8b8 = 0;
            local_8b0 = 0;
            local_8ac = 5;
            FUN_1400ec6d0(local_880,param_1);
            uVar16 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
            uVar6 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
            FUN_140e87440(local_880,DAT_1419fe0e8,0x80000000,&local_7d8,uVar6,uVar16);
            FUN_140041b30(local_880);
            FUN_1400ec6d0(&local_8a8,param_1);
            uVar6 = uVar6 & 0xffffffffffffff00;
            FUN_140e87440(&local_8a8,DAT_1419fe158,0x80000000,&local_7b8,uVar6,
                          uVar16 & 0xffffffffffffff00);
            uVar18 = (undefined4)(uVar6 >> 0x20);
            FUN_140041b30(&local_8a8);
            uVar4 = FUN_140046840(local_668,10,&local_6b8);
            uVar4 = FUN_140046230(&local_6d8,&local_7d8,uVar4);
            FUN_140041c60(local_798,uVar4);
            FUN_140041b30(&local_6d8);
            FUN_140041b30(local_668);
            local_828 = local_798;
            uVar4 = FUN_140053940(local_648,&local_7b8,0x10);
            FUN_140041c60(local_788,uVar4);
            FUN_140041b30(local_648);
            local_820 = local_788;
            FUN_140041c60(local_778,&DAT_141dd6168);
            local_818 = local_778;
            uVar4 = FUN_140045f40(&local_658,0x66,1);
            FUN_140041c60(local_768,uVar4);
            FUN_140041b30(&local_658);
            local_810 = local_768;
            ppuVar19 = &local_828;
            uVar6 = CONCAT44(uVar18,DAT_141a0a7c8);
            uVar4 = FUN_140e634e0(param_1,param_2,&local_8b8,4,uVar6,ppuVar19);
            FUN_140041c60(&local_6e8,uVar4);
            local_888 = 0x4e6;
            uVar4 = FUN_1400426f0(&local_7c8,0x3fe0000000000000,&local_6b8);
            FUN_140041c60(&local_238,uVar4);
            FUN_140041b30(&local_7c8);
            FUN_140e87930(&local_6e8,DAT_141a1f230,0x80000000,&local_238);
            local_888 = 0x4e7;
            FUN_140044220(&local_248,0xfffffffc);
            FUN_140e87930(&local_6e8,DAT_141a1f500,0x80000000,&local_248);
            local_888 = 0x4e8;
            FUN_1400ec6d0(&local_7a8,param_1);
            ppuVar19 = (undefined1 **)((ulonglong)ppuVar19 & 0xffffffffffffff00);
            ppuVar15 = (undefined1 **)(uVar6 & 0xffffffffffffff00);
            FUN_140e87440(&local_7a8,DAT_141a0a828,0x80000000,&local_678,ppuVar15,ppuVar19);
            FUN_140041b30(&local_7a8);
            FUN_140041c60(&local_258,&local_678);
            FUN_140e87930(&local_6e8,DAT_141a1f0d0,0x80000000,&local_258);
            local_888 = 0x4e9;
            FUN_140044220(&local_268,8);
            FUN_140e87930(&local_6e8,DAT_141a0a7d8,0x80000000,&local_268);
            local_888 = 0x4ea;
            FUN_140044220(&local_278,8);
            FUN_140e87930(&local_6e8,DAT_1419f59c8,0x80000000,&local_278);
            local_888 = 0x4eb;
            FUN_140041c20(local_6f8,0xffffffff);
            FUN_140042560(&local_6b8,local_6f8);
            FUN_140041b30(local_6f8);
          } while (0 < iVar2);
          local_888 = 0x4ed;
          uVar4 = FUN_140042490(param_1,DAT_141a57250);
          FUN_1400ec6d0(local_880,param_1);
          FUN_140e87440(local_880,DAT_1419fe158,0x80000000,&local_7b8,
                        (ulonglong)ppuVar15 & 0xffffffffffffff00,
                        (ulonglong)ppuVar19 & 0xffffffffffffff00);
          FUN_140041b30(local_880);
          FUN_140041c60(&local_288,&local_7b8);
          FUN_140e87930(uVar4,DAT_141a061d8,0x80000000,&local_288);
          local_888 = 0x4ee;
          uVar4 = FUN_140042490(param_1,DAT_141a57250);
          FUN_140044220(&local_638,0);
          FUN_140e87930(uVar4,DAT_141a065f8,0x80000000,&local_638);
          local_888 = 0x4ef;
          uVar4 = FUN_140042490(param_1,DAT_141a57250);
          uVar5 = FUN_140042490(param_1,DAT_141a1f440);
          plVar17 = param_1;
          uVar6 = param_2;
          FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_688,param_1,param_2);
          uVar5 = FUN_1400424f0(&local_8a8,&local_688);
          FUN_140041c60(&local_5f8,uVar5);
          FUN_140041b30(&local_8a8);
          FUN_140e87930(uVar4,DAT_141a066e8,0x80000000,&local_5f8);
          local_888 = 0x4f1;
          if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_8b8);
          }
          local_8b8 = 0;
          local_8b0 = 0;
          local_8ac = 5;
          uVar4 = FUN_140042490(param_1,DAT_141a57250);
          FUN_1400ec6d0(local_880,param_1);
          uVar6 = uVar6 & 0xffffffffffffff00;
          uVar16 = (ulonglong)plVar17 & 0xffffffffffffff00;
          FUN_140e87440(local_880,DAT_1419fe0e8,0x80000000,&local_7d8,uVar16,uVar6);
          FUN_140041b30(local_880);
          uVar16 = uVar16 & 0xffffffffffffff00;
          FUN_140e87440(uVar4,DAT_141a061d8,0x80000000,&local_608,uVar16,uVar6 & 0xffffffffffffff00)
          ;
          uVar18 = (undefined4)(uVar16 >> 0x20);
          FUN_140041c60(local_798,&local_7d8);
          local_828 = local_798;
          uVar5 = FUN_140053820(&local_8a8,&local_608,5);
          FUN_140041c60(local_788,uVar5);
          FUN_140041b30(&local_8a8);
          local_820 = local_788;
          FUN_140041c60(local_778,&DAT_141dd6168);
          local_818 = local_778;
          uVar5 = FUN_140045f40(&local_7a8,0x67,1);
          FUN_140041c60(local_768,uVar5);
          FUN_140041b30(&local_7a8);
          local_810 = local_768;
          uVar5 = FUN_140e634e0(param_1,param_2,&local_8b8,4,CONCAT44(uVar18,DAT_141a0a7c8),
                                &local_828);
          FUN_140041c60(&local_298,uVar5);
          FUN_140e87930(uVar4,DAT_141a06668,0x80000000,&local_298);
        }
      }
      local_888 = 0x4f6;
      if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_8b8);
      }
      local_8b8 = 0;
      local_8b0 = 0;
      local_8ac = 5;
      uVar4 = FUN_140042490(param_1,DAT_1419fd398);
      FUN_140e63610(param_1,param_2,&local_8b8,0,uVar4,0);
      local_888 = 0x4f7;
      if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_8b8);
      }
      local_8b8 = 0;
      local_8b0 = 0;
      local_8ac = 5;
      uVar4 = FUN_140042490(param_1,DAT_1419fd418);
      FUN_140e63610(param_1,param_2,&local_8b8,0,uVar4,0);
      local_888 = 0x4f8;
LAB_1407208d5:
      if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_8b8);
      }
      local_8b8 = 0;
      local_8b0 = 0;
      local_8ac = 5;
      puVar7 = (undefined8 *)FUN_140042490(param_1,DAT_1419fd4b8);
      goto LAB_14072090e;
    }
    local_888 = 0x4fa;
    uVar5 = FUN_140042490(param_1,DAT_141a57250);
    in_stack_fffffffffffff740 = in_stack_fffffffffffff740 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a0ab48,0x80000000,&local_6a8,uVar6,in_stack_fffffffffffff740);
    uVar5 = FUN_1400424f0(local_880,&DAT_141dd6048);
    cVar1 = FUN_140041d70(&local_6a8,uVar5);
    FUN_140041b30(local_880);
    if (cVar1 == '\0') {
      local_888 = 0x53b;
      uVar4 = FUN_140042490(param_1,DAT_141a57250);
      ppuVar19 = (undefined1 **)(in_stack_fffffffffffff740 & 0xffffffffffffff00);
      puVar7 = (undefined8 *)(uVar6 & 0xffffffffffffff00);
      FUN_140e87440(uVar4,DAT_141a0ab48,0x80000000,&local_6a8,puVar7,ppuVar19);
      uVar4 = FUN_1400424f0(local_880,&DAT_141dd5ff8);
      cVar1 = FUN_140041d70(&local_6a8,uVar4);
      FUN_140041b30(local_880);
      if (cVar1 != '\0') {
        local_888 = 0x53d;
        uVar4 = FUN_1400419a0(param_1,DAT_141a1f500);
        FUN_140162c50(uVar4,0x3fc999999999999a);
        local_888 = 0x53f;
        if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_8b8);
        }
        local_8b8 = 0;
        local_8b0 = 0;
        local_8ac = 5;
        FUN_1400ec6d0(local_880,param_1);
        uVar16 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
        uVar6 = (ulonglong)puVar7 & 0xffffffffffffff00;
        FUN_140e87440(local_880,DAT_1419fe0e8,0x80000000,&local_7d8,uVar6,uVar16);
        FUN_140041b30(local_880);
        FUN_1400ec6d0(&local_8a8,param_1);
        uVar6 = uVar6 & 0xffffffffffffff00;
        FUN_140e87440(&local_8a8,DAT_1419fe158,0x80000000,&local_7b8,uVar6,
                      uVar16 & 0xffffffffffffff00);
        uVar18 = (undefined4)(uVar6 >> 0x20);
        FUN_140041b30(&local_8a8);
        FUN_140041c60(local_798,&local_7d8);
        local_828 = local_798;
        uVar4 = FUN_140053820(&local_7a8,&local_7b8,1);
        FUN_140041c60(local_788,uVar4);
        FUN_140041b30(&local_7a8);
        local_820 = local_788;
        uVar4 = FUN_140045f40(local_6f8,0x149,1);
        FUN_140041c60(local_778,uVar4);
        FUN_140041b30(local_6f8);
        local_818 = local_778;
        uVar5 = CONCAT44(uVar18,DAT_141a12628);
        uVar4 = FUN_140e634e0(param_1,param_2,&local_8b8,3,uVar5,&local_828);
        uVar18 = (undefined4)((ulonglong)uVar5 >> 0x20);
        cVar1 = thunk_FUN_140e491e0(uVar4);
        if (cVar1 != '\0') {
          uVar4 = FUN_140042490(param_1,DAT_141a1f500);
          cVar1 = FUN_140046d30(uVar4,0);
          if (cVar1 != '\0') {
            local_888 = 0x541;
            uVar4 = FUN_140042490(param_1,DAT_1419fd448);
            uVar5 = FUN_1400419a0(param_1,DAT_141a0a748);
            FUN_140e609c0(param_1);
            uVar4 = FUN_1400b46b0(local_880,uVar4,0x3ff8000000000000);
            FUN_140041c60(uVar5,uVar4);
            FUN_140041b30(local_880);
            FUN_140e60910(1);
            local_888 = 0x542;
            uVar4 = FUN_140042490(param_1,DAT_1419fd518);
            uVar5 = FUN_1400419a0(param_1,DAT_141a0a858);
            FUN_140e609c0(param_1);
            uVar4 = FUN_1400b46b0(local_880,uVar4,0x3fe0000000000000);
            FUN_140041c60(uVar5,uVar4);
            FUN_140041b30(local_880);
            FUN_140e60910(1);
            local_888 = 0x543;
            if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_8b8);
            }
            local_8b8 = 0;
            local_8b0 = 0;
            local_8ac = 5;
            uVar4 = FUN_140045f40(local_880,0x2000168,1);
            FUN_140041c60(local_798,uVar4);
            FUN_140041b30(local_880);
            local_828 = local_798;
            FUN_1400441d0(local_788,&DAT_1419e7c20);
            local_820 = local_788;
            FUN_1400441d0(local_778,&DAT_1419df7a0);
            local_818 = local_778;
            ppuVar19 = &local_828;
            FUN_140e634e0(param_1,param_2,&local_8b8,3,CONCAT44(uVar18,DAT_141a0a2e8),ppuVar19);
            local_888 = 0x545;
            if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_8b8);
            }
            local_8b8 = 0;
            local_8b0 = 0;
            local_8ac = 5;
            FUN_1400441d0(local_798,&DAT_1419e7d90);
            local_828 = local_798;
            FUN_1400441d0(local_788,&DAT_1419e7d80);
            local_820 = local_788;
            FUN_1400441d0(local_778,&DAT_1419e7c90);
            local_818 = local_778;
            FUN_1400441d0(local_768,&DAT_1419df7c0);
            local_810 = local_768;
            ppuVar15 = &local_828;
            iVar11 = 4;
            FUN_14044e5b0(param_1,param_2,&local_8b8,4,ppuVar15);
            iVar2 = 7;
            do {
              iVar2 = iVar2 + -1;
              local_888 = 0x54d;
              if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_8b8);
              }
              local_8b8 = 0;
              local_8b0 = 0;
              local_8ac = 5;
              if ((1 << ((byte)local_864 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_870);
              }
              local_870 = 0;
              local_868 = 0;
              local_864 = 5;
              if ((1 << ((byte)local_834 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_840);
              }
              local_840 = 0;
              local_838 = 0;
              local_834 = 5;
              if ((1 << ((byte)local_844 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_850);
              }
              local_850 = 0;
              local_848 = 0;
              local_844 = 5;
              if ((1 << ((byte)local_854 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_860);
              }
              local_860 = 0;
              local_858 = 0;
              local_854 = 5;
              FUN_1400ec6d0(local_880,param_1);
              uVar16 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
              uVar6 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
              FUN_140e87440(local_880,DAT_1419fe0e8,0x80000000,&local_7d8,uVar6,uVar16);
              FUN_140041b30(local_880);
              FUN_1400ec6d0(&local_8a8,param_1);
              uVar16 = uVar16 & 0xffffffffffffff00;
              FUN_140e87440(&local_8a8,DAT_1419fe158,0x80000000,&local_7b8,
                            uVar6 & 0xffffffffffffff00,uVar16);
              FUN_140041b30(&local_8a8);
              uVar4 = FUN_140e794b0(0xc038000000000000,0x4038000000000000);
              uVar4 = FUN_140162e10(&local_7a8,&local_7d8,uVar4);
              FUN_140041c60(local_798,uVar4);
              FUN_140041b30(&local_7a8);
              local_828 = local_798;
              uVar4 = FUN_140053820(local_6f8,&local_7b8,8);
              FUN_140041c60(local_788,uVar4);
              FUN_140041b30(local_6f8);
              local_820 = local_788;
              FUN_1400441d0(local_778,&DAT_1419df7a0);
              local_818 = local_778;
              ppuVar19 = &local_828;
              uVar4 = FUN_14040f420(param_1,param_2,&local_8b8,3,ppuVar19);
              FUN_140041c60(&local_4c8,uVar4);
              FUN_140e87440(&local_4c8,DAT_141a0a9f8,0x80000000,&local_3d8,
                            (ulonglong)ppuVar19 & 0xffffffffffffff00,uVar16 & 0xffffffffffffff00);
              uVar4 = FUN_140045f40(&local_6d8,0x10001d0,1);
              FUN_140041c60(local_768,uVar4);
              FUN_140041b30(&local_6d8);
              local_810 = local_768;
              uVar4 = FUN_140e794b0(0x3fe999999999999a,0x3ff3333333333333);
              FUN_140041cb0(local_758,uVar4);
              local_808 = local_758;
              uVar4 = FUN_140069500(&local_4c8);
              ppuVar19 = &local_810;
              puVar7 = &local_3d8;
              uVar4 = FUN_140e63610(uVar4,param_2,&local_870,2,puVar7,ppuVar19);
              FUN_140041c60(&local_4a8,uVar4);
              FUN_140e87440(&local_4a8,DAT_1419f5d48,0x80000000,&local_3e8,
                            (ulonglong)puVar7 & 0xffffffffffffff00,
                            (ulonglong)ppuVar19 & 0xffffffffffffff00);
              FUN_1400441d0(local_748,&DAT_1419df7a0);
              local_800 = local_748;
              uVar4 = FUN_140069500(&local_4a8);
              uVar4 = FUN_140e63610(uVar4,param_2,&local_840,1,&local_3e8,&local_800);
              FUN_140041c60(&local_468,uVar4);
              FUN_140e87170(&local_468,DAT_1419f57f8,0x80000000,&local_3f8,param_1,param_2);
              uVar4 = FUN_140e794b0(0x4000000000000000,0x4018000000000000);
              FUN_140041cb0(local_738,uVar4);
              local_7f8 = local_738;
              FUN_1400441d0(local_728,&DAT_141dc6950);
              local_7f0 = local_728;
              FUN_1400441d0(local_718,&DAT_1419e7d00);
              local_7e8 = local_718;
              uVar4 = FUN_140069500(&local_468);
              uVar4 = FUN_140e63610(uVar4,param_2,&local_850,3,&local_3f8,&local_7f8);
              FUN_140041c60(&local_518,uVar4);
              FUN_140e87170(&local_518,DAT_1419f5dc8,0x80000000,&local_408,param_1,param_2);
              uVar4 = FUN_140e794b0(0x4044000000000000,0x4061800000000000);
              FUN_140041cb0(local_708,uVar4);
              local_7e0 = local_708;
              uVar4 = FUN_140069500(&local_518);
              ppuVar19 = &local_7e0;
              ppuVar15 = &local_408;
              FUN_140e63610(uVar4,param_2,&local_860,1,ppuVar15,ppuVar19);
            } while (0 < iVar2);
            do {
              iVar11 = iVar11 + -1;
              local_888 = 0x555;
              if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_8b8);
              }
              local_8b8 = 0;
              local_8b0 = 0;
              local_8ac = 5;
              if ((1 << ((byte)local_864 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_870);
              }
              local_870 = 0;
              local_868 = 0;
              local_864 = 5;
              if ((1 << ((byte)local_834 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_840);
              }
              local_840 = 0;
              local_838 = 0;
              local_834 = 5;
              if ((1 << ((byte)local_844 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_850);
              }
              local_850 = 0;
              local_848 = 0;
              local_844 = 5;
              if ((1 << ((byte)local_854 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_860);
              }
              local_860 = 0;
              local_858 = 0;
              local_854 = 5;
              FUN_1400ec6d0(local_880,param_1);
              uVar16 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
              uVar6 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
              FUN_140e87440(local_880,DAT_1419fe0e8,0x80000000,&local_7d8,uVar6,uVar16);
              FUN_140041b30(local_880);
              FUN_1400ec6d0(&local_8a8,param_1);
              uVar16 = uVar16 & 0xffffffffffffff00;
              FUN_140e87440(&local_8a8,DAT_1419fe158,0x80000000,&local_7b8,
                            uVar6 & 0xffffffffffffff00,uVar16);
              FUN_140041b30(&local_8a8);
              uVar4 = FUN_140e794b0(0xc038000000000000,0x4038000000000000);
              uVar4 = FUN_140162e10(&local_7a8,&local_7d8,uVar4);
              FUN_140041c60(local_798,uVar4);
              FUN_140041b30(&local_7a8);
              local_828 = local_798;
              uVar4 = FUN_140053820(local_6f8,&local_7b8,8);
              FUN_140041c60(local_788,uVar4);
              FUN_140041b30(local_6f8);
              local_820 = local_788;
              FUN_1400441d0(local_778,&DAT_1419df7a0);
              local_818 = local_778;
              ppuVar19 = &local_828;
              uVar4 = FUN_14040f420(param_1,param_2,&local_8b8,3,ppuVar19);
              FUN_140041c60(&local_4d8,uVar4);
              FUN_140e87440(&local_4d8,DAT_141a0a9f8,0x80000000,&local_418,
                            (ulonglong)ppuVar19 & 0xffffffffffffff00,uVar16 & 0xffffffffffffff00);
              uVar4 = FUN_140045f40(&local_6d8,0x1000135,1);
              FUN_140041c60(local_768,uVar4);
              FUN_140041b30(&local_6d8);
              local_810 = local_768;
              uVar4 = FUN_140e794b0(0x3fe999999999999a,0x3ff3333333333333);
              FUN_140041cb0(local_758,uVar4);
              local_808 = local_758;
              uVar4 = FUN_140069500(&local_4d8);
              ppuVar19 = &local_810;
              puVar7 = &local_418;
              uVar4 = FUN_140e63610(uVar4,param_2,&local_870,2,puVar7,ppuVar19);
              FUN_140041c60(&local_498,uVar4);
              FUN_140e87440(&local_498,DAT_1419f5d48,0x80000000,&local_428,
                            (ulonglong)puVar7 & 0xffffffffffffff00,
                            (ulonglong)ppuVar19 & 0xffffffffffffff00);
              FUN_1400441d0(local_748,&DAT_1419df7a0);
              local_800 = local_748;
              uVar4 = FUN_140069500(&local_498);
              uVar4 = FUN_140e63610(uVar4,param_2,&local_840,1,&local_428,&local_800);
              FUN_140041c60(&local_488,uVar4);
              FUN_140e87170(&local_488,DAT_1419f57f8,0x80000000,&local_108,param_1,param_2);
              uVar4 = FUN_140e794b0(0x3fe0000000000000,0x4008000000000000);
              FUN_140041cb0(local_738,uVar4);
              local_7f8 = local_738;
              FUN_1400441d0(local_728,&DAT_141dc6950);
              local_7f0 = local_728;
              FUN_1400441d0(local_718,&DAT_1419e7d00);
              local_7e8 = local_718;
              uVar4 = FUN_140069500(&local_488);
              uVar4 = FUN_140e63610(uVar4,param_2,&local_850,3,&local_108,&local_7f8);
              FUN_140041c60(&local_478,uVar4);
              FUN_140e87170(&local_478,DAT_1419f5dc8,0x80000000,&local_118,param_1,param_2);
              uVar4 = FUN_140e794b0(0x404e000000000000,0x405e000000000000);
              FUN_140041cb0(local_708,uVar4);
              local_7e0 = local_708;
              uVar4 = FUN_140069500(&local_478);
              ppuVar19 = &local_7e0;
              ppuVar15 = &local_118;
              FUN_140e63610(uVar4,param_2,&local_860,1,ppuVar15,ppuVar19);
            } while (0 < iVar11);
            local_888 = 0x558;
            if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_8b8);
            }
            local_8b8 = 0;
            local_8b0 = 0;
            local_8ac = 5;
            uVar4 = FUN_140042490(param_1,DAT_1419f5868);
            uVar5 = FUN_140042490(param_1,DAT_1419f5a38);
            FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_128,
                          (ulonglong)ppuVar15 & 0xffffffffffffff00,
                          (ulonglong)ppuVar19 & 0xffffffffffffff00);
            FUN_140041c60(local_798,uVar5);
            local_828 = local_798;
            uVar4 = FUN_140069500(uVar4);
            FUN_140e63610(uVar4,param_2,&local_8b8,1,&local_128,&local_828);
            local_888 = 0x559;
            goto LAB_140720998;
          }
        }
        local_888 = 0x55c;
        uVar4 = FUN_140042490(param_1,DAT_141a1f500);
        cVar1 = FUN_140046c90(uVar4,0);
        if (cVar1 == '\0') {
          local_888 = 0x55f;
          if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_8b8);
          }
          local_8b8 = 0;
          local_8b0 = 0;
          local_8ac = 5;
          uVar4 = FUN_140042490(param_1,DAT_1419fd588);
          FUN_1400441d0(local_798,&DAT_1419e7d30);
          local_828 = local_798;
          FUN_1400441d0(local_788,&DAT_1419e7d10);
          puVar10 = &DAT_1419e7d20;
        }
        else {
          local_888 = 0x55d;
          if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_8b8);
          }
          local_8b8 = 0;
          local_8b0 = 0;
          local_8ac = 5;
          uVar4 = FUN_140042490(param_1,DAT_1419fd588);
          FUN_1400441d0(local_798,&DAT_1419e7b40);
          local_828 = local_798;
          FUN_1400441d0(local_788,&DAT_1419e7c40);
          puVar10 = &DAT_1419e7bf0;
        }
        local_820 = local_788;
        FUN_1400441d0(local_778,puVar10);
        local_818 = local_778;
        FUN_140e63610(param_1,param_2,&local_8b8,3,uVar4,&local_828);
        local_888 = 0x561;
        if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_8b8);
        }
        local_8b8 = 0;
        local_8b0 = 0;
        local_8ac = 5;
        uVar4 = FUN_140042490(param_1,DAT_1419fd398);
        FUN_140e63610(param_1,param_2,&local_8b8,0,uVar4,0);
        local_888 = 0x562;
        if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_8b8);
        }
        local_8b8 = 0;
        local_8b0 = 0;
        local_8ac = 5;
        uVar4 = FUN_140042490(param_1,DAT_1419fd418);
        FUN_140e63610(param_1,param_2,&local_8b8,0,uVar4,0);
        local_888 = 0x563;
        goto LAB_1407208d5;
      }
    }
    else {
      local_888 = 0x4fc;
      uVar5 = FUN_140042490(param_1,DAT_141a57250);
      FUN_140e87440(uVar5,DAT_141a065f8,0x80000000,&local_638,uVar6 & 0xffffffffffffff00,
                    in_stack_fffffffffffff740 & 0xffffffffffffff00);
      uVar8 = FUN_1400426f0(local_880,0x3fa1eb851eb851ec,uVar4);
      FUN_1400460e0(&local_638,uVar8);
      FUN_140041b30(local_880);
      FUN_140e87930(uVar5,DAT_141a065f8,0x80000000,&local_638);
      local_888 = 0x4fd;
      uVar5 = FUN_140042490(param_1,DAT_141a57250);
      uVar8 = FUN_140042490(param_1,DAT_141a1f440);
      plVar17 = param_1;
      uVar6 = param_2;
      FUN_140e87170(uVar8,DAT_1419fe0e8,0x80000000,&local_688,param_1,param_2);
      FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_568);
      uVar8 = FUN_1400b46b0(&local_8a8,&local_568,0x3fe4cccccccccccd);
      uVar9 = FUN_1400b46b0(local_880,&local_568,0x3fd6666666666666);
      uVar8 = FUN_140041980(uVar8);
      uVar9 = FUN_140041980(uVar9);
      uVar12 = FUN_140041980(&local_688);
      uVar8 = FUN_140e78ec0(uVar12,uVar9,uVar8);
      FUN_140041cb0(&local_5f8,uVar8);
      FUN_140041b30(local_880);
      FUN_140041b30(&local_8a8);
      FUN_140e87930(uVar5,DAT_141a066e8,0x80000000,&local_5f8);
      local_888 = 0x4fe;
      if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_8b8);
      }
      local_8b8 = 0;
      local_8b0 = 0;
      local_8ac = 5;
      uVar5 = FUN_140042490(param_1,DAT_141a57250);
      FUN_1400ec6d0(local_880,param_1);
      uVar6 = uVar6 & 0xffffffffffffff00;
      uVar16 = (ulonglong)plVar17 & 0xffffffffffffff00;
      FUN_140e87440(local_880,DAT_1419fe0e8,0x80000000,&local_7d8,uVar16,uVar6);
      FUN_140041b30(local_880);
      uVar6 = uVar6 & 0xffffffffffffff00;
      uVar16 = uVar16 & 0xffffffffffffff00;
      FUN_140e87440(uVar5,DAT_141a066e8,0x80000000,&local_2a8,uVar16,uVar6);
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(uVar5,DAT_141a065f8,0x80000000,&local_1d8,uVar16 & 0xffffffffffffff00,uVar6);
      FUN_140041c60(local_798,&local_7d8);
      local_828 = local_798;
      FUN_140041980(&local_1d8);
      dVar13 = (double)thunk_FUN_1412ac390();
      uVar5 = FUN_140162e10(local_880,&local_2a8,dVar13 * 16.0 * 3.0);
      FUN_140041c60(local_788,uVar5);
      FUN_140041b30(local_880);
      local_820 = local_788;
      uVar4 = FUN_140046840(&local_8a8,3,uVar4);
      FUN_140041c60(local_778,uVar4);
      FUN_140041b30(&local_8a8);
      local_818 = local_778;
      ppuVar19 = &local_828;
      uVar4 = gml_Script_arc(param_1,param_2,&local_8b8,3,ppuVar19);
      FUN_140041c60(&local_2b8,uVar4);
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_2b8);
      local_888 = 0x500;
      if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_8b8);
      }
      local_8b8 = 0;
      local_8b0 = 0;
      local_8ac = 5;
      uVar4 = FUN_140042490(param_1,DAT_141a57250);
      uVar16 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
      FUN_140e87440(uVar4,DAT_141a06668,0x80000000,&local_6c8,uVar16,uVar6 & 0xffffffffffffff00);
      uVar18 = (undefined4)(uVar16 >> 0x20);
      FUN_140041c60(local_798,&local_6c8);
      local_828 = local_798;
      ppuVar19 = &local_828;
      uVar6 = CONCAT44(uVar18,DAT_141a02ef8);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_8b8,1,uVar6,ppuVar19);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 != '\0') {
        local_888 = 0x502;
        uVar4 = FUN_140042490(param_1,DAT_141a57250);
        FUN_1400ec6d0(local_880,param_1);
        uVar16 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
        uVar6 = uVar6 & 0xffffffffffffff00;
        FUN_140e87440(local_880,DAT_1419fe0e8,0x80000000,&local_7d8,uVar6,uVar16);
        FUN_140041b30(local_880);
        FUN_140041c60(&local_2c8,&local_7d8);
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar6 = uVar6 & 0xffffffffffffff00;
        FUN_140e87440(uVar4,DAT_141a06668,0x80000000,&local_6c8,uVar6,uVar16);
        FUN_140e86c30(&local_6c8,DAT_1419fe0e8,0x80000000,&local_2c8);
        local_888 = 0x503;
        uVar4 = FUN_140042490(param_1,DAT_141a57250);
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar6 = uVar6 & 0xffffffffffffff00;
        FUN_140e87440(uVar4,DAT_141a061d8,0x80000000,&local_608,uVar6,uVar16);
        uVar5 = FUN_140053820(&local_8a8,&local_608,10);
        FUN_140041c60(&local_2d8,uVar5);
        FUN_140041b30(&local_8a8);
        ppuVar19 = (undefined1 **)(uVar16 & 0xffffffffffffff00);
        uVar6 = uVar6 & 0xffffffffffffff00;
        FUN_140e87440(uVar4,DAT_141a06668,0x80000000,&local_6c8,uVar6,ppuVar19);
        FUN_140e86c30(&local_6c8,DAT_1419fe158,0x80000000,&local_2d8);
      }
      local_888 = 0x506;
      if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_8b8);
      }
      local_8b8 = 0;
      local_8b0 = 0;
      local_8ac = 5;
      uVar4 = FUN_140042490(param_1,DAT_141a57250);
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_5e8,uVar6,
                    (ulonglong)ppuVar19 & 0xffffffffffffff00);
      uVar18 = (undefined4)(uVar6 >> 0x20);
      FUN_1400441d0(local_798,&DAT_141dc6950);
      local_828 = local_798;
      ppuVar19 = &local_828;
      puVar7 = (undefined8 *)CONCAT44(uVar18,DAT_141a0a0d8);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_8b8,1,puVar7,ppuVar19);
      uVar4 = FUN_1400b46b0(local_880,uVar4,0x4004000000000000);
      cVar1 = FUN_140046da0(&local_5e8,uVar4);
      FUN_140041b30(local_880);
      if (cVar1 != '\0') {
        local_888 = 0x508;
        if ((1 << ((byte)local_864 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_870);
        }
        local_870 = 0;
        local_868 = 0;
        local_864 = 5;
        uVar4 = FUN_140042490(param_1,DAT_141a57250);
        uVar6 = (ulonglong)puVar7 & 0xffffffffffffff00;
        FUN_140e87440(uVar4,DAT_141a06668,0x80000000,&local_6c8,uVar6,
                      (ulonglong)ppuVar19 & 0xffffffffffffff00);
        uVar18 = (undefined4)(uVar6 >> 0x20);
        FUN_140041c60(local_788,&local_6c8);
        local_820 = local_788;
        ppuVar19 = &local_820;
        uVar6 = CONCAT44(uVar18,DAT_141a02ef8);
        uVar4 = FUN_140e634e0(param_1,param_2,&local_870,1,uVar6,ppuVar19);
        cVar1 = FUN_140e491e0(uVar4);
        if (cVar1 != '\0') {
          local_888 = 0x509;
          uVar4 = FUN_140042490(param_1,DAT_141a57250);
          FUN_140e87440(uVar4,DAT_141a06668,0x80000000,&local_6c8,uVar6 & 0xffffffffffffff00,
                        (ulonglong)ppuVar19 & 0xffffffffffffff00);
          FUN_140041c60(local_778,&local_6c8);
          local_818 = local_778;
          FUN_140edd0e0(param_1,param_2,1,&local_818);
        }
        local_888 = 0x50b;
        uVar4 = FUN_1400419a0(param_1,DAT_141a1f230);
        FUN_140044220(uVar4,0);
        local_888 = 0x50c;
        uVar4 = FUN_1400419a0(param_1,DAT_141a1f500);
        FUN_140044220(uVar4,0xfffffffa);
        local_888 = 0x50e;
        uVar4 = FUN_1400441b0(&local_8a8,1);
        FUN_140041c60(&local_5c8,uVar4);
        FUN_140041b30(&local_8a8);
        FUN_140e86fa0(param_1,DAT_1419f61d8,0x80000000,&local_5c8);
        local_888 = 0x50f;
        FUN_140044220(&local_618,0xffffffff);
        FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_618);
        local_888 = 0x511;
        uVar4 = FUN_140042490(param_1,DAT_1419fd448);
        uVar5 = FUN_1400419a0(param_1,DAT_141a0a748);
        FUN_140e609c0(param_1);
        uVar4 = FUN_1400b46b0(&local_8a8,uVar4,0x3fe0000000000000);
        FUN_140041c60(uVar5,uVar4);
        FUN_140041b30(&local_8a8);
        FUN_140e60910(1);
        local_888 = 0x512;
        uVar4 = FUN_140042490(param_1,DAT_1419fd518);
        uVar5 = FUN_1400419a0(param_1,DAT_141a0a858);
        FUN_140e609c0(param_1);
        iVar2 = 2;
        uVar4 = FUN_140087a30(&local_8a8,uVar4,2);
        FUN_140041c60(uVar5,uVar4);
        FUN_140041b30(&local_8a8);
        FUN_140e60910(1);
        local_888 = 0x514;
        uVar4 = FUN_140042490(param_1,DAT_141a1f440);
        uVar5 = FUN_1400419a0(param_1,DAT_1419f5ef8);
        plVar17 = param_1;
        uVar6 = param_2;
        FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_688,param_1,param_2);
        FUN_1400ec6d0(local_880,param_1);
        ppuVar19 = (undefined1 **)(uVar6 & 0xffffffffffffff00);
        FUN_140e87440(local_880,DAT_1419fe0e8,0x80000000,&local_7d8,
                      (ulonglong)plVar17 & 0xffffffffffffff00,ppuVar19);
        FUN_140041b30(local_880);
        cVar1 = FUN_140046bc0(&local_688,&local_7d8);
        if (cVar1 == '\0') {
          uVar4 = FUN_140041c20(local_880,1);
        }
        else {
          uVar4 = FUN_140041c20(&local_8a8,0xffffffff);
        }
        FUN_140e609c0(param_1);
        FUN_140041c60(uVar5,uVar4);
        if (cVar1 == '\0') {
          FUN_140041b30(local_880);
        }
        else {
          FUN_140041b30(&local_8a8);
        }
        FUN_140e60910(1);
        local_888 = 0x516;
        if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_8b8);
        }
        local_8b8 = 0;
        local_8b0 = 0;
        local_8ac = 5;
        FUN_1400441d0(local_798,&DAT_1419e7d90);
        local_828 = local_798;
        FUN_1400441d0(local_788,&DAT_1419e7d80);
        local_820 = local_788;
        FUN_1400441d0(local_778,&DAT_1419e7cb0);
        local_818 = local_778;
        FUN_1400441d0(local_768,&DAT_1419df7c0);
        local_810 = local_768;
        ppuVar15 = &local_828;
        FUN_14044e5b0(param_1,param_2,&local_8b8,4,ppuVar15);
        iVar11 = 7;
        do {
          iVar11 = iVar11 + -1;
          local_888 = 0x51e;
          if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_8b8);
          }
          local_8b8 = 0;
          local_8b0 = 0;
          local_8ac = 5;
          if ((1 << ((byte)local_864 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_870);
          }
          local_870 = 0;
          local_868 = 0;
          local_864 = 5;
          if ((1 << ((byte)local_834 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_840);
          }
          local_840 = 0;
          local_838 = 0;
          local_834 = 5;
          if ((1 << ((byte)local_844 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_850);
          }
          local_850 = 0;
          local_848 = 0;
          local_844 = 5;
          if ((1 << ((byte)local_854 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_860);
          }
          local_860 = 0;
          local_858 = 0;
          local_854 = 5;
          FUN_1400ec6d0(local_880,param_1);
          uVar16 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
          uVar6 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
          FUN_140e87440(local_880,DAT_1419fe0e8,0x80000000,&local_7d8,uVar6,uVar16);
          FUN_140041b30(local_880);
          FUN_1400ec6d0(&local_8a8,param_1);
          uVar16 = uVar16 & 0xffffffffffffff00;
          FUN_140e87440(&local_8a8,DAT_1419fe158,0x80000000,&local_7b8,uVar6 & 0xffffffffffffff00,
                        uVar16);
          FUN_140041b30(&local_8a8);
          uVar4 = FUN_140e794b0(0xc038000000000000,0x4038000000000000);
          uVar4 = FUN_140162e10(&local_7a8,&local_7d8,uVar4);
          FUN_140041c60(local_798,uVar4);
          FUN_140041b30(&local_7a8);
          local_828 = local_798;
          uVar4 = FUN_140053820(local_6f8,&local_7b8,8);
          FUN_140041c60(local_788,uVar4);
          FUN_140041b30(local_6f8);
          local_820 = local_788;
          FUN_1400441d0(local_778,&DAT_1419df7a0);
          local_818 = local_778;
          ppuVar19 = &local_828;
          uVar4 = FUN_14040f420(param_1,param_2,&local_8b8,3,ppuVar19);
          FUN_140041c60(&local_578,uVar4);
          FUN_140e87440(&local_578,DAT_141a0a9f8,0x80000000,&local_2e8,
                        (ulonglong)ppuVar19 & 0xffffffffffffff00,uVar16 & 0xffffffffffffff00);
          uVar4 = FUN_140045f40(&local_6d8,0x10001d0,1);
          FUN_140041c60(local_768,uVar4);
          FUN_140041b30(&local_6d8);
          local_810 = local_768;
          uVar4 = FUN_140e794b0(0x3fe999999999999a,0x3ff3333333333333);
          FUN_140041cb0(local_758,uVar4);
          local_808 = local_758;
          uVar4 = FUN_140069500(&local_578);
          ppuVar19 = &local_810;
          puVar7 = &local_2e8;
          uVar4 = FUN_140e63610(uVar4,param_2,&local_870,2,puVar7,ppuVar19);
          FUN_140041c60(&local_588,uVar4);
          FUN_140e87440(&local_588,DAT_1419f5d48,0x80000000,&local_2f8,
                        (ulonglong)puVar7 & 0xffffffffffffff00,
                        (ulonglong)ppuVar19 & 0xffffffffffffff00);
          FUN_1400441d0(local_748,&DAT_1419df7a0);
          local_800 = local_748;
          uVar4 = FUN_140069500(&local_588);
          uVar4 = FUN_140e63610(uVar4,param_2,&local_840,1,&local_2f8,&local_800);
          FUN_140041c60(&local_598,uVar4);
          FUN_140e87170(&local_598,DAT_1419f57f8,0x80000000,&local_308,param_1,param_2);
          uVar4 = FUN_140e794b0(0x4000000000000000,0x4018000000000000);
          FUN_140041cb0(local_738,uVar4);
          local_7f8 = local_738;
          FUN_1400441d0(local_728,&DAT_141dc6950);
          local_7f0 = local_728;
          FUN_1400441d0(local_718,&DAT_1419e7d00);
          local_7e8 = local_718;
          uVar4 = FUN_140069500(&local_598);
          uVar4 = FUN_140e63610(uVar4,param_2,&local_850,3,&local_308,&local_7f8);
          FUN_140041c60(&local_5a8,uVar4);
          FUN_140e87170(&local_5a8,DAT_1419f5dc8,0x80000000,&local_318,param_1,param_2);
          uVar4 = FUN_140e794b0(0x4044000000000000,0x4061800000000000);
          FUN_140041cb0(local_708,uVar4);
          local_7e0 = local_708;
          uVar4 = FUN_140069500(&local_5a8);
          ppuVar19 = &local_7e0;
          ppuVar15 = &local_318;
          FUN_140e63610(uVar4,param_2,&local_860,1,ppuVar15,ppuVar19);
        } while (0 < iVar11);
        iVar11 = 4;
        do {
          iVar11 = iVar11 + -1;
          local_888 = 0x526;
          if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_8b8);
          }
          local_8b8 = 0;
          local_8b0 = 0;
          local_8ac = 5;
          if ((1 << ((byte)local_864 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_870);
          }
          local_870 = 0;
          local_868 = 0;
          local_864 = 5;
          if ((1 << ((byte)local_834 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_840);
          }
          local_840 = 0;
          local_838 = 0;
          local_834 = 5;
          if ((1 << ((byte)local_844 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_850);
          }
          local_850 = 0;
          local_848 = 0;
          local_844 = 5;
          if ((1 << ((byte)local_854 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_860);
          }
          local_860 = 0;
          local_858 = 0;
          local_854 = 5;
          FUN_1400ec6d0(local_880,param_1);
          uVar16 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
          uVar6 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
          FUN_140e87440(local_880,DAT_1419fe0e8,0x80000000,&local_7d8,uVar6,uVar16);
          FUN_140041b30(local_880);
          FUN_1400ec6d0(&local_8a8,param_1);
          uVar16 = uVar16 & 0xffffffffffffff00;
          FUN_140e87440(&local_8a8,DAT_1419fe158,0x80000000,&local_7b8,uVar6 & 0xffffffffffffff00,
                        uVar16);
          FUN_140041b30(&local_8a8);
          uVar4 = FUN_140e794b0(0xc038000000000000,0x4038000000000000);
          uVar4 = FUN_140162e10(&local_7a8,&local_7d8,uVar4);
          FUN_140041c60(local_798,uVar4);
          FUN_140041b30(&local_7a8);
          local_828 = local_798;
          uVar4 = FUN_140053820(local_6f8,&local_7b8,8);
          FUN_140041c60(local_788,uVar4);
          FUN_140041b30(local_6f8);
          local_820 = local_788;
          FUN_1400441d0(local_778,&DAT_1419df7a0);
          local_818 = local_778;
          ppuVar19 = &local_828;
          uVar4 = FUN_14040f420(param_1,param_2,&local_8b8,3,ppuVar19);
          FUN_140041c60(&local_5b8,uVar4);
          FUN_140e87440(&local_5b8,DAT_141a0a9f8,0x80000000,&local_328,
                        (ulonglong)ppuVar19 & 0xffffffffffffff00,uVar16 & 0xffffffffffffff00);
          uVar4 = FUN_140045f40(&local_6d8,0x1000135,1);
          FUN_140041c60(local_768,uVar4);
          FUN_140041b30(&local_6d8);
          local_810 = local_768;
          uVar4 = FUN_140e794b0(0x3fe999999999999a,0x3ff3333333333333);
          FUN_140041cb0(local_758,uVar4);
          local_808 = local_758;
          uVar4 = FUN_140069500(&local_5b8);
          ppuVar19 = &local_810;
          puVar7 = &local_328;
          uVar4 = FUN_140e63610(uVar4,param_2,&local_870,2,puVar7,ppuVar19);
          FUN_140041c60(&local_448,uVar4);
          FUN_140e87440(&local_448,DAT_1419f5d48,0x80000000,&local_338,
                        (ulonglong)puVar7 & 0xffffffffffffff00,
                        (ulonglong)ppuVar19 & 0xffffffffffffff00);
          FUN_1400441d0(local_748,&DAT_1419df7a0);
          local_800 = local_748;
          uVar4 = FUN_140069500(&local_448);
          uVar4 = FUN_140e63610(uVar4,param_2,&local_840,1,&local_338,&local_800);
          FUN_140041c60(&local_458,uVar4);
          FUN_140e87170(&local_458,DAT_1419f57f8,0x80000000,&local_348,param_1,param_2);
          uVar4 = FUN_140e794b0(0x3fe0000000000000,0x4008000000000000);
          FUN_140041cb0(local_738,uVar4);
          local_7f8 = local_738;
          FUN_1400441d0(local_728,&DAT_141dc6950);
          local_7f0 = local_728;
          FUN_1400441d0(local_718,&DAT_1419e7d00);
          local_7e8 = local_718;
          uVar4 = FUN_140069500(&local_458);
          uVar4 = FUN_140e63610(uVar4,param_2,&local_850,3,&local_348,&local_7f8);
          FUN_140041c60(&local_4b8,uVar4);
          FUN_140e87170(&local_4b8,DAT_1419f5dc8,0x80000000,&local_358,param_1,param_2);
          uVar4 = FUN_140e794b0(0x404e000000000000,0x405e000000000000);
          FUN_140041cb0(local_708,uVar4);
          local_7e0 = local_708;
          uVar4 = FUN_140069500(&local_4b8);
          ppuVar19 = &local_7e0;
          ppuVar15 = &local_358;
          FUN_140e63610(uVar4,param_2,&local_860,1,ppuVar15,ppuVar19);
        } while (0 < iVar11);
        local_888 = 0x529;
        FUN_140044220(&local_6b8,0xffffffff);
        do {
          iVar2 = iVar2 + -1;
          local_888 = 0x52c;
          if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_8b8);
          }
          local_8b8 = 0;
          local_8b0 = 0;
          local_8ac = 5;
          FUN_1400ec6d0(local_880,param_1);
          uVar16 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
          uVar6 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
          FUN_140e87440(local_880,DAT_1419fe0e8,0x80000000,&local_7d8,uVar6,uVar16);
          FUN_140041b30(local_880);
          FUN_1400ec6d0(&local_8a8,param_1);
          uVar6 = uVar6 & 0xffffffffffffff00;
          FUN_140e87440(&local_8a8,DAT_1419fe158,0x80000000,&local_7b8,uVar6,
                        uVar16 & 0xffffffffffffff00);
          uVar18 = (undefined4)(uVar6 >> 0x20);
          FUN_140041b30(&local_8a8);
          uVar4 = FUN_140046840(local_668,10,&local_6b8);
          uVar4 = FUN_140046230(&local_6d8,&local_7d8,uVar4);
          FUN_140041c60(local_798,uVar4);
          FUN_140041b30(&local_6d8);
          FUN_140041b30(local_668);
          local_828 = local_798;
          uVar4 = FUN_140053940(local_648,&local_7b8,0x10);
          FUN_140041c60(local_788,uVar4);
          FUN_140041b30(local_648);
          local_820 = local_788;
          FUN_140041c60(local_778,&DAT_141dd6168);
          local_818 = local_778;
          uVar4 = FUN_140045f40(&local_658,0x66,1);
          FUN_140041c60(local_768,uVar4);
          FUN_140041b30(&local_658);
          local_810 = local_768;
          ppuVar19 = &local_828;
          uVar6 = CONCAT44(uVar18,DAT_141a0a7c8);
          uVar4 = FUN_140e634e0(param_1,param_2,&local_8b8,4,uVar6,ppuVar19);
          FUN_140041c60(&local_6e8,uVar4);
          local_888 = 0x52d;
          uVar4 = FUN_1400426f0(&local_7c8,0x3fe0000000000000,&local_6b8);
          FUN_140041c60(&local_368,uVar4);
          FUN_140041b30(&local_7c8);
          FUN_140e87930(&local_6e8,DAT_141a1f230,0x80000000,&local_368);
          local_888 = 0x52e;
          FUN_140044220(&local_378,0xfffffffc);
          FUN_140e87930(&local_6e8,DAT_141a1f500,0x80000000,&local_378);
          local_888 = 0x52f;
          FUN_1400ec6d0(&local_7a8,param_1);
          ppuVar19 = (undefined1 **)((ulonglong)ppuVar19 & 0xffffffffffffff00);
          ppuVar15 = (undefined1 **)(uVar6 & 0xffffffffffffff00);
          FUN_140e87440(&local_7a8,DAT_141a0a828,0x80000000,&local_678,ppuVar15,ppuVar19);
          FUN_140041b30(&local_7a8);
          FUN_140041c60(&local_388,&local_678);
          FUN_140e87930(&local_6e8,DAT_141a1f0d0,0x80000000,&local_388);
          local_888 = 0x530;
          FUN_140044220(&local_398,8);
          FUN_140e87930(&local_6e8,DAT_141a0a7d8,0x80000000,&local_398);
          local_888 = 0x531;
          FUN_140044220(&local_3a8,8);
          FUN_140e87930(&local_6e8,DAT_1419f59c8,0x80000000,&local_3a8);
          local_888 = 0x532;
          FUN_140041c20(local_6f8,0xffffffff);
          FUN_140042560(&local_6b8,local_6f8);
          FUN_140041b30(local_6f8);
        } while (0 < iVar2);
        local_888 = 0x535;
        if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_8b8);
        }
        local_8b8 = 0;
        local_8b0 = 0;
        local_8ac = 5;
        uVar4 = FUN_140042490(param_1,DAT_141a57250);
        uVar6 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
        FUN_140e87440(uVar4,DAT_141a06238,0x80000000,&local_3b8,uVar6,
                      (ulonglong)ppuVar19 & 0xffffffffffffff00);
        uVar18 = (undefined4)(uVar6 >> 0x20);
        FUN_140041c60(local_798,&local_3b8);
        local_828 = local_798;
        ppuVar19 = &local_828;
        uVar6 = CONCAT44(uVar18,DAT_141a07788);
        FUN_140e634e0(param_1,param_2,&local_8b8,1,uVar6,ppuVar19);
        local_888 = 0x536;
        if ((1 << ((byte)local_8ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_8b8);
        }
        local_8b8 = 0;
        local_8b0 = 0;
        local_8ac = 5;
        uVar4 = FUN_140042490(param_1,DAT_141a06518);
        FUN_140e87440(uVar4,DAT_1419f4a98,0x80000000,&local_3c8,uVar6 & 0xffffffffffffff00,
                      (ulonglong)ppuVar19 & 0xffffffffffffff00);
        uVar4 = FUN_140069500(uVar4);
        ppuVar19 = (undefined1 **)0x0;
        puVar7 = &local_3c8;
        FUN_140e63610(uVar4,param_2,&local_8b8,0,puVar7,0);
        local_888 = 0x538;
        uVar4 = FUN_140042490(param_1,DAT_141a57250);
        FUN_140041c60(&local_698,&DAT_141dd5ff8);
        FUN_140e87930(uVar4,DAT_141a0ab48,0x80000000,&local_698);
      }
    }
  }
  local_888 = 0x566;
  uVar4 = FUN_140042490(param_1,DAT_141a57250);
  FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_628,(ulonglong)puVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar19 & 0xffffffffffffff00);
  FUN_1400460e0(&local_628,local_e8);
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_628);
LAB_140720998:
  FUN_140041b30(&local_860);
  FUN_140041b30(&local_850);
  FUN_140041b30(&local_840);
  FUN_140041b30(&local_870);
  FUN_140041b30(&local_8b8);
  FUN_140041b30(&local_128);
  FUN_140041b30(&local_118);
  FUN_140041b30(&local_478);
  FUN_140041b30(&local_108);
  FUN_140041b30(&local_488);
  FUN_140041b30(&local_428);
  FUN_140041b30(&local_498);
  FUN_140041b30(&local_418);
  FUN_140041b30(&local_4d8);
  FUN_140041b30(&local_408);
  FUN_140041b30(&local_518);
  FUN_140041b30(&local_3f8);
  FUN_140041b30(&local_468);
  FUN_140041b30(&local_3e8);
  FUN_140041b30(&local_4a8);
  FUN_140041b30(&local_3d8);
  FUN_140041b30(&local_4c8);
  FUN_140041b30(&local_3c8);
  FUN_140041b30(&local_3b8);
  FUN_140041b30(&local_3a8);
  FUN_140041b30(&local_398);
  FUN_140041b30(&local_388);
  FUN_140041b30(&local_378);
  FUN_140041b30(&local_368);
  FUN_140041b30(&local_358);
  FUN_140041b30(&local_4b8);
  FUN_140041b30(&local_348);
  FUN_140041b30(&local_458);
  FUN_140041b30(&local_338);
  FUN_140041b30(&local_448);
  FUN_140041b30(&local_328);
  FUN_140041b30(&local_5b8);
  FUN_140041b30(&local_318);
  FUN_140041b30(&local_5a8);
  FUN_140041b30(&local_308);
  FUN_140041b30(&local_598);
  FUN_140041b30(&local_2f8);
  FUN_140041b30(&local_588);
  FUN_140041b30(&local_2e8);
  FUN_140041b30(&local_578);
  FUN_140041b30(&local_2d8);
  FUN_140041b30(&local_2c8);
  FUN_140041b30(&local_6c8);
  FUN_140041b30(&local_2b8);
  FUN_140041b30(&local_1d8);
  FUN_140041b30(&local_2a8);
  FUN_140041b30(&local_568);
  FUN_140041b30(&local_298);
  FUN_140041b30(&local_608);
  FUN_140041b30(&local_5f8);
  FUN_140041b30(&local_688);
  FUN_140041b30(&local_638);
  FUN_140041b30(&local_288);
  FUN_140041b30(&local_278);
  FUN_140041b30(&local_268);
  FUN_140041b30(&local_258);
  FUN_140041b30(&local_248);
  FUN_140041b30(&local_238);
  FUN_140041b30(&local_6b8);
  FUN_140041b30(&local_228);
  FUN_140041b30(&local_558);
  FUN_140041b30(&local_218);
  FUN_140041b30(&local_548);
  FUN_140041b30(&local_208);
  FUN_140041b30(&local_538);
  FUN_140041b30(&local_1f8);
  FUN_140041b30(&local_528);
  FUN_140041b30(&local_1e8);
  FUN_140041b30(&local_438);
  FUN_140041b30(&local_f8);
  FUN_140041b30(&local_508);
  FUN_140041b30(&local_1c8);
  FUN_140041b30(&local_4f8);
  FUN_140041b30(&local_1b8);
  FUN_140041b30(&local_4e8);
  FUN_140041b30(&local_618);
  FUN_140041b30(&local_5c8);
  FUN_140041b30(&local_1a8);
  FUN_140041b30(&local_198);
  FUN_140041b30(&local_188);
  FUN_140041b30(&local_678);
  FUN_140041b30(&local_178);
  FUN_140041b30(&local_168);
  FUN_140041b30(&local_6e8);
  FUN_140041b30(&local_5d8);
  FUN_140041b30(&local_158);
  FUN_140041b30(&local_148);
  FUN_140041b30(&local_628);
  FUN_140041b30(&local_7b8);
  FUN_140041b30(&local_7d8);
  FUN_140041b30(&local_138);
  FUN_140041b30(&local_698);
  FUN_140041b30(&local_5e8);
  FUN_140041b30(&local_6a8);
  _eh_vector_destructor_iterator_(local_798,0x10,10,FUN_140041b30);
  FUN_140041970(&local_898);
  return param_3;
}

