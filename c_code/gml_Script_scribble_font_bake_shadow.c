// gml_Script_scribble_font_bake_shadow @ 0x140464540

undefined8 *
gml_Script_scribble_font_bake_shadow
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar15;
  undefined8 uVar13;
  undefined1 **ppuVar14;
  ulonglong in_stack_fffffffffffff920;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong **ppuVar18;
  undefined8 **ppuVar19;
  undefined8 local_6d8;
  undefined4 local_6d0;
  undefined4 local_6cc;
  undefined8 local_6c8;
  char *local_6c0;
  undefined4 local_6b8;
  undefined8 local_6b0;
  undefined4 local_6a8;
  undefined4 local_6a4;
  ulonglong *local_698;
  ulonglong *local_690;
  ulonglong *local_688;
  ulonglong *local_680;
  ulonglong *local_678;
  undefined8 *local_670;
  undefined1 *local_668;
  undefined1 *local_660;
  undefined1 *local_658;
  undefined1 local_638 [16];
  ulonglong local_628;
  undefined4 local_61c;
  ulonglong local_618 [2];
  ulonglong local_608 [2];
  ulonglong local_5f8 [2];
  ulonglong local_5e8 [2];
  ulonglong local_5d8 [2];
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  undefined1 local_598 [64];
  undefined8 local_558;
  undefined4 local_550;
  undefined4 local_54c;
  ulonglong local_548;
  undefined4 local_53c;
  undefined8 local_538;
  undefined4 local_52c;
  ulonglong local_528;
  undefined4 local_51c;
  ulonglong local_518;
  undefined4 local_50c;
  ulonglong local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  ulonglong local_4f8;
  undefined4 local_4ec;
  ulonglong local_4e8;
  undefined4 local_4dc;
  ulonglong local_4d8;
  undefined4 local_4cc;
  undefined8 local_4c8;
  undefined4 local_4bc;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined8 local_4a8;
  undefined4 local_49c;
  undefined8 local_498;
  undefined4 local_48c;
  ulonglong local_488;
  undefined4 local_47c;
  undefined8 local_478;
  undefined4 local_46c;
  ulonglong local_468;
  undefined4 local_45c;
  ulonglong local_458;
  undefined4 local_44c;
  undefined8 local_448;
  undefined4 local_43c;
  undefined8 local_438;
  undefined4 local_42c;
  longlong local_428;
  int local_41c;
  undefined8 local_418;
  undefined4 local_40c;
  undefined8 local_408;
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
  ulonglong local_378;
  undefined4 local_36c;
  ulonglong local_368;
  undefined4 local_35c;
  undefined1 local_358 [16];
  undefined8 local_348;
  undefined4 local_33c;
  ulonglong local_338;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_31c;
  undefined8 local_318;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 local_2dc;
  ulonglong local_2d8;
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
  undefined8 local_228;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  int local_198 [2];
  undefined8 *local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [64];
  
  local_6c0 = "gml_Script_scribble_font_bake_shader";
  local_6c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_6c8;
  local_6b8 = 0x11;
  FUN_140041df0(local_198,param_4,0xc,param_5);
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_618,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_50c = 0xffffff;
  local_518 = 0;
  local_38c = 0xffffff;
  local_398 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_4cc = 0xffffff;
  local_4d8 = 0;
  local_51c = 0xffffff;
  local_528 = 0;
  local_4dc = 0xffffff;
  local_4e8 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_53c = 0xffffff;
  local_548 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_44c = 0xffffff;
  local_458 = 0;
  local_4bc = 0xffffff;
  local_4c8 = 0;
  local_48c = 0xffffff;
  local_498 = 0;
  local_45c = 0xffffff;
  local_468 = 0;
  local_52c = 0xffffff;
  local_538 = 0;
  local_39c = 0xffffff;
  local_3a8 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_4ec = 0xffffff;
  local_4f8 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_3ac = 0xffffff;
  local_3b8 = 0;
  local_37c = 0xffffff;
  local_388 = 0;
  local_3bc = 0xffffff;
  local_3c8 = 0;
  local_3cc = 0xffffff;
  local_3d8 = 0;
  local_3dc = 0xffffff;
  local_3e8 = 0;
  local_3ec = 0xffffff;
  local_3f8 = 0;
  local_31c = 0xffffff;
  local_328 = 0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_61c = 0xffffff;
  local_628 = 0;
  local_49c = 0xffffff;
  local_4a8 = 0;
  local_1a0 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f83d8);
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_46c = 0xffffff;
  local_478 = 0;
  local_43c = 0xffffff;
  local_448 = 0;
  local_3fc = 0xffffff;
  local_408 = 0;
  local_40c = 0xffffff;
  local_418 = 0;
  local_47c = 0xffffff;
  local_488 = 0;
  local_41c = 0xffffff;
  local_428 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_35c = 0xffffff;
  local_368 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_36c = 0xffffff;
  local_378 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_2fc = 0xffffff;
  local_308 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_42c = 0xffffff;
  local_438 = 0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_6cc = 0;
  local_6d8 = 0;
  local_6a4 = 0;
  local_6b0 = 0;
  local_54c = 0;
  local_558 = 0;
  local_4ac = 0;
  local_4b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf044) &&
     (_Init_thread_header(&DAT_141ddf044), DAT_141ddf044 == -1)) {
    DAT_141ddf048 = (longlong *)FUN_140e63aa0(DAT_1419f84d8);
    _Init_thread_footer(&DAT_141ddf044);
  }
  local_6b8 = 0x11;
  puVar12 = &DAT_1419df7b0;
  if (local_198[0] < 0xb) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)local_190[10];
  }
  iVar5 = FUN_140e851f0(puVar11,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    local_6b8 = 0x11;
    if (local_198[0] < 0xb) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (undefined8 *)local_190[10];
    }
    FUN_140044220(puVar11,0x800);
  }
  if (local_198[0] < 0xc) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)local_190[0xb];
  }
  iVar5 = FUN_140e851f0(puVar11,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    uStack_4fc = 0xd;
    local_508 = 0;
    if (local_198[0] < 0xc) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (undefined8 *)local_190[0xb];
    }
    FUN_140041c60(puVar11,&local_508);
    if ((1 << ((byte)uStack_4fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_508);
    }
  }
  if (DAT_141ddc18f == '\0') {
    FUN_140e64380(DAT_141ddf048,"gml_Script_scribble_font_bake_shader");
    FUN_140e64380(param_1,"gml_Script_scribble_font_bake_shader");
  }
  local_6b8 = 0x25;
  if (DAT_141ddc18f == '\0') {
    DAT_141ddc18f = '\x01';
    uVar7 = (**(code **)(*DAT_141ddf048 + 0x10))(DAT_141ddf048,DAT_141a06458);
    if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_6d8);
    }
    local_6d8 = 0;
    local_6d0 = 0;
    local_6cc = 5;
    FUN_140041c60(local_618,&DAT_1419df7b0);
    local_698 = local_618;
    ppuVar18 = &local_698;
    uVar8 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_6d8,1,ppuVar18);
    uVar16 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_141a06198,0x80000000,&local_1e8,uVar16,
                  in_stack_fffffffffffff920 & 0xffffffffffffff00);
    uVar6 = (undefined4)(uVar16 >> 0x20);
    FUN_140e609c0(DAT_141ddf048);
    FUN_140041c60(uVar7,&local_1e8);
    FUN_140e60910(1);
    uVar7 = (**(code **)(*DAT_141ddf048 + 0x10))(DAT_141ddf048,DAT_141a070e8);
    FUN_140e609c0(DAT_141ddf048);
    FUN_140041c60(uVar7,&DAT_1419df7b0);
    FUN_140e60910(1);
  }
  local_6b8 = 0x13;
  if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_6d8);
  }
  local_6d8 = 0;
  local_6d0 = 0;
  local_6cc = 5;
  if (local_198[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*local_190;
  }
  FUN_140041c60(local_618,puVar11);
  local_698 = local_618;
  uVar8 = CONCAT44(uVar6,DAT_1419fdbf8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar8,&local_698);
  uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar4 = FUN_140e491e0(uVar7);
  if (cVar4 == '\0') {
    local_6b8 = 0x15;
    if ((1 << ((byte)local_6a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_6b0);
    }
    local_6b0 = 0;
    local_6a8 = 0;
    local_6a4 = 5;
    FUN_140041c60(local_608,&DAT_141dd3018);
    local_690 = local_608;
    FUN_1401ef7f0(param_1,param_2,&local_6b0,1,&local_690);
    local_6b8 = 0x16;
    goto LAB_140468de0;
  }
  local_6b8 = 0x19;
  if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_6d8);
  }
  local_6d8 = 0;
  local_6d0 = 0;
  local_6cc = 5;
  if (local_198[0] < 2) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)local_190[1];
  }
  FUN_140041c60(local_618,puVar11);
  local_698 = local_618;
  uVar8 = CONCAT44(uVar6,DAT_1419fdbf8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar8,&local_698);
  uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar4 = FUN_140e491e0(uVar7);
  if (cVar4 == '\0') {
    local_6b8 = 0x1b;
    if ((1 << ((byte)local_6a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_6b0);
    }
    local_6b0 = 0;
    local_6a8 = 0;
    local_6a4 = 5;
    FUN_140041c60(local_608,&DAT_141dd3018);
    local_690 = local_608;
    FUN_1401ef7f0(param_1,param_2,&local_6b0,1,&local_690);
    local_6b8 = 0x1c;
    goto LAB_140468de0;
  }
  local_6b8 = 0x1f;
  if (local_198[0] < 2) {
    puVar11 = &DAT_1419df7b0;
    if (local_198[0] < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_190;
    }
  }
  else {
    puVar11 = (undefined8 *)local_190[1];
    puVar10 = (undefined8 *)*local_190;
  }
  iVar5 = FUN_140e851f0(puVar10,puVar11,DAT_141955260,0);
  if (iVar5 == 0) {
    local_6b8 = 0x21;
    if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_6d8);
    }
    local_6d8 = 0;
    local_6d0 = 0;
    local_6cc = 5;
    FUN_140041c60(local_618,&DAT_141dd3028);
    local_698 = local_618;
    FUN_1401ef7f0(param_1,param_2,&local_6d8,1,&local_698);
    local_6b8 = 0x22;
    FUN_140041c60(param_3,&DAT_1419df7b0);
    goto LAB_140468de0;
  }
  local_6b8 = 0x26;
  if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_6d8);
  }
  local_6d8 = 0;
  local_6d0 = 0;
  local_6cc = 5;
  uVar7 = (**(code **)(*DAT_141ddf048 + 8))(DAT_141ddf048,DAT_141a06458);
  FUN_140041c60(local_618,uVar7);
  local_698 = local_618;
  if (local_198[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*local_190;
  }
  FUN_140041c60(local_608,puVar11);
  uVar8 = CONCAT44(uVar6,DAT_1419ff4f8);
  local_690 = local_608;
  uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,2,uVar8,&local_698);
  uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_140041c60(&local_518,uVar7);
  local_6b8 = 0x27;
  if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_6d8);
  }
  local_6d8 = 0;
  local_6d0 = 0;
  local_6cc = 5;
  local_698 = &local_518;
  ppuVar18 = &local_698;
  uVar16 = CONCAT44(uVar6,DAT_1419fcb88);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar16,ppuVar18);
  cVar4 = FUN_140e491e0(uVar7);
  if (cVar4 != '\0') {
    local_6b8 = 0x2d;
    uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(&local_518,DAT_141a062b8,0x80000000,&local_398,uVar16,uVar17);
    cVar4 = FUN_140041d90(&local_398,1);
    if (cVar4 == '\0') {
      local_6b8 = 0x33;
      uVar17 = uVar17 & 0xffffffffffffff00;
      uVar16 = uVar16 & 0xffffffffffffff00;
      FUN_140e87440(&local_518,DAT_141a062b8,0x80000000,&local_398,uVar16,uVar17);
      cVar4 = FUN_140041d90(&local_398,2);
      if (cVar4 == '\0') {
        local_6b8 = 0x39;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        FUN_140e87440(&local_518,DAT_141a063d8,0x80000000,&local_1f8,uVar16 & 0xffffffffffffff00,
                      uVar17 & 0xffffffffffffff00);
        uVar7 = FUN_140069500(&local_518);
        uVar16 = 0;
        puVar11 = &local_1f8;
        FUN_140e63610(uVar7,param_2,&local_6d8,0,puVar11,0);
        local_6b8 = 0x3a;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        FUN_140e87440(&local_518,DAT_141a063b8,0x80000000,&local_208,
                      (ulonglong)puVar11 & 0xffffffffffffff00,uVar16 & 0xffffffffffffff00);
        uVar7 = FUN_140069500(&local_518);
        uVar17 = 0;
        puVar11 = &local_208;
        FUN_140e63610(uVar7,param_2,&local_6d8,0,puVar11,0);
        local_6b8 = 0x3c;
        uVar16 = (ulonglong)puVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_518,DAT_141a06328,0x80000000,&local_218,uVar16,
                      uVar17 & 0xffffffffffffff00);
        uVar6 = (undefined4)(uVar16 >> 0x20);
        FUN_140041c60(&local_4d8,&local_218);
        local_6b8 = 0x3d;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_4d8;
        uVar8 = CONCAT44(uVar6,DAT_141a064d8);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar8,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(&local_528,uVar7);
        local_6b8 = 0x40;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        uVar7 = FUN_140045f40(&local_508,DAT_141a06218 | 0x5000000,1);
        FUN_140041c60(local_618,uVar7);
        FUN_140041b30(&local_508);
        local_698 = local_618;
        if (local_198[0] < 2) {
          puVar11 = &DAT_1419df7b0;
        }
        else {
          puVar11 = (undefined8 *)local_190[1];
        }
        FUN_140041c60(local_608,puVar11);
        local_688 = &local_528;
        local_690 = local_608;
        FUN_140041c60(local_5e8,&DAT_1419df7b0);
        local_680 = local_5e8;
        FUN_1400441d0(local_5d8,&DAT_1419df7a0);
        local_678 = local_5d8;
        FUN_1400441d0(local_5c8,&DAT_1419df7c0);
        local_670 = (undefined8 *)local_5c8;
        ppuVar18 = &local_698;
        uVar16 = CONCAT44(uVar6,DAT_1419fd6d8);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,6,uVar16,ppuVar18);
        FUN_140041c60(&local_4e8,uVar7);
        local_6b8 = 0x41;
        if (local_198[0] < 10) {
          puVar11 = &DAT_1419df7b0;
        }
        else {
          puVar11 = (undefined8 *)local_190[9];
        }
        FUN_140041c60(&local_228,puVar11);
        FUN_140e87930(&local_4e8,DAT_141a063e8,0x80000000,&local_228);
        local_6b8 = 0x42;
        uVar7 = FUN_1400441b0(&local_508,1);
        FUN_140041c60(&local_238,uVar7);
        FUN_140041b30(&local_508);
        FUN_140e87930(&local_4e8,DAT_141a06348,0x80000000,&local_238);
        local_6b8 = 0x43;
        uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
        uVar16 = uVar16 & 0xffffffffffffff00;
        FUN_140e87440(&local_4e8,DAT_141a06328,0x80000000,&local_248,uVar16,uVar17);
        FUN_140041c60(&local_548,&local_248);
        local_6b8 = 0x46;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        FUN_140e87440(&local_518,DAT_141a06378,0x80000000,&local_258,uVar16 & 0xffffffffffffff00,
                      uVar17 & 0xffffffffffffff00);
        local_698 = &local_4e8;
        FUN_1400441d0(local_608,&DAT_1419df7a0);
        local_690 = local_608;
        uVar7 = FUN_140069500(&local_518);
        puVar11 = &local_258;
        FUN_140e63610(uVar7,param_2,&local_6d8,2,puVar11,&local_698);
        uVar6 = (undefined4)((ulonglong)puVar11 >> 0x20);
        local_6b8 = 0x48;
        if (local_198[0] < 0xc) {
          puVar11 = &DAT_1419df7b0;
        }
        else {
          puVar11 = (undefined8 *)local_190[0xb];
        }
        cVar4 = FUN_140e491e0(puVar11);
        if (cVar4 != '\0') {
          local_6b8 = 0x48;
          FUN_140044220(&local_268,1);
          FUN_140e87930(&local_4e8,DAT_141a062b8,0x80000000,&local_268);
        }
        local_6b8 = 0x4d;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        ppuVar18 = (ulonglong **)0x0;
        ppuVar14 = (undefined1 **)CONCAT44(uVar6,DAT_1419ff3e8);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,0,ppuVar14,0);
        FUN_140041c60(&local_458,uVar7);
        local_6b8 = 0x4f;
        FUN_140044220(&local_4c8,0);
        local_6b8 = 0x50;
        FUN_140044220(&local_498,0);
        local_6b8 = 0x51;
        FUN_140044220(&local_468,0);
        local_6b8 = 0x53;
        FUN_140044220(&local_538,0);
        local_6b8 = 0x54;
        dVar1 = (double)FUN_140041980(&local_528);
        iVar5 = (int)(longlong)dVar1;
        uVar16 = (longlong)dVar1;
        while (0 < iVar5) {
          local_508 = (ulonglong)((int)uVar16 - 1);
          local_6b8 = 0x56;
          if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_6d8);
          }
          local_6d8 = 0;
          local_6d0 = 0;
          local_6cc = 5;
          dVar1 = (double)FUN_140041980(&local_538);
          uVar6 = thunk_FUN_140e4a740(&local_4d8);
          uVar7 = FUN_140ea8b20(&local_6d8,uVar6,(longlong)dVar1 & 0xffffffff,0xb);
          FUN_140041c60(&local_3a8,uVar7);
          local_6b8 = 0x57;
          uVar16 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
          FUN_140e87440(&local_3a8,DAT_141a06448,0x80000000,&local_278,uVar16,
                        (ulonglong)ppuVar18 & 0xffffffffffffff00);
          uVar6 = (undefined4)(uVar16 >> 0x20);
          FUN_140041c60(&local_4f8,&local_278);
          local_6b8 = 0x59;
          if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_6d8);
          }
          local_6d8 = 0;
          local_6d0 = 0;
          local_6cc = 5;
          local_698 = &local_4f8;
          ppuVar18 = &local_698;
          ppuVar14 = (undefined1 **)CONCAT44(uVar6,DAT_141a06498);
          uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,1,ppuVar14,ppuVar18);
          cVar4 = FUN_140e491e0(uVar7);
          if (cVar4 == '\0') {
            local_6b8 = 0x5b;
            if ((1 << ((byte)local_6a4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_6b0);
            }
            local_6b0 = 0;
            local_6a8 = 0;
            local_6a4 = 5;
            if ((1 << ((byte)local_54c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_558);
            }
            local_558 = 0;
            local_550 = 0;
            local_54c = 5;
            if ((1 << ((byte)local_4ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_4b8);
            }
            local_4b8 = 0;
            local_4b0 = 0;
            local_4ac = 5;
            local_690 = &local_4f8;
            uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
            uVar16 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
            FUN_140e87440(&local_3a8,DAT_141a06948,0x80000000,&local_288,uVar16,uVar17);
            uVar16 = uVar16 & 0xffffffffffffff00;
            FUN_140e87440(&local_3a8,DAT_141a06958,0x80000000,&local_298,uVar16,
                          uVar17 & 0xffffffffffffff00);
            uVar6 = (undefined4)(uVar16 >> 0x20);
            uVar7 = FUN_1400424f0(local_98,&DAT_141dd3058);
            FUN_140041c60(local_5f8,uVar7);
            FUN_140041b30(local_98);
            local_688 = local_5f8;
            if (local_198[0] < 1) {
              puVar11 = &DAT_1419df7b0;
            }
            else {
              puVar11 = (undefined8 *)*local_190;
            }
            FUN_140041c60(local_5e8,puVar11);
            local_680 = local_5e8;
            ppuVar18 = &local_690;
            uVar7 = FUN_140e634e0(param_1,param_2,&local_4b8,1,CONCAT44(uVar6,DAT_1419fcb18),
                                  ppuVar18);
            FUN_140041c60(local_5d8,uVar7);
            local_678 = local_5d8;
            FUN_140041c60(local_5c8,&local_288);
            local_670 = (undefined8 *)local_5c8;
            FUN_140041c60(local_5b8,&local_298);
            local_668 = local_5b8;
            uVar7 = FUN_140e64420(param_1,param_2,&local_558,5,&local_688);
            FUN_140041c60(local_5a8,uVar7);
            local_660 = local_5a8;
            ppuVar14 = &local_660;
            FUN_1401ef7f0(param_1,param_2,&local_6b0,1,ppuVar14);
          }
          local_6b8 = 0x5f;
          cVar4 = FUN_140041d70(&local_4f8,&DAT_1419df7b0);
          if (cVar4 == '\0') {
            local_6b8 = 0x65;
            if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_6d8);
            }
            uVar15 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
            local_6d8 = 0;
            local_6d0 = 0;
            local_6cc = 5;
            dVar1 = (double)FUN_140041980(&local_538);
            uVar6 = thunk_FUN_140e4a740(&local_4d8);
            uVar7 = FUN_140ea8b20(&local_6d8,uVar6,(longlong)dVar1 & 0xffffffff,5);
            FUN_140041c60(&local_3b8,uVar7);
            local_6b8 = 0x66;
            if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_6d8);
            }
            local_6d8 = 0;
            local_6d0 = 0;
            local_6cc = 5;
            dVar1 = (double)FUN_140041980(&local_538);
            uVar6 = thunk_FUN_140e4a740(&local_4d8);
            uVar7 = FUN_140ea8b20(&local_6d8,uVar6,(longlong)dVar1 & 0xffffffff,6);
            FUN_140041c60(&local_388,uVar7);
            local_6b8 = 0x67;
            if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_6d8);
            }
            local_6d8 = 0;
            local_6d0 = 0;
            local_6cc = 5;
            dVar1 = (double)FUN_140041980(&local_538);
            uVar6 = thunk_FUN_140e4a740(&local_4d8);
            uVar7 = FUN_140ea8b20(&local_6d8,uVar6,(longlong)dVar1 & 0xffffffff,0xc);
            FUN_140041c60(&local_3c8,uVar7);
            local_6b8 = 0x68;
            if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_6d8);
            }
            local_6d8 = 0;
            local_6d0 = 0;
            local_6cc = 5;
            dVar1 = (double)FUN_140041980(&local_538);
            uVar6 = thunk_FUN_140e4a740(&local_4d8);
            uVar7 = FUN_140ea8b20(&local_6d8,uVar6,(longlong)dVar1 & 0xffffffff,0xe);
            FUN_140041c60(&local_3d8,uVar7);
            local_6b8 = 0x69;
            if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_6d8);
            }
            local_6d8 = 0;
            local_6d0 = 0;
            local_6cc = 5;
            dVar1 = (double)FUN_140041980(&local_538);
            uVar6 = thunk_FUN_140e4a740(&local_4d8);
            uVar7 = FUN_140ea8b20(&local_6d8,uVar6,(longlong)dVar1 & 0xffffffff,0xd);
            FUN_140041c60(&local_3e8,uVar7);
            local_6b8 = 0x6a;
            if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_6d8);
            }
            local_6d8 = 0;
            local_6d0 = 0;
            local_6cc = 5;
            dVar1 = (double)FUN_140041980(&local_538);
            uVar6 = thunk_FUN_140e4a740(&local_4d8);
            uVar7 = FUN_140ea8b20(&local_6d8,uVar6,(longlong)dVar1 & 0xffffffff,0xf);
            FUN_140041c60(&local_3f8,uVar7);
            local_6b8 = 0x6c;
            if (local_198[0] < 4) {
              puVar11 = &DAT_1419df7b0;
            }
            else {
              puVar11 = (undefined8 *)local_190[3];
            }
            uVar7 = FUN_140046230(local_188,&local_3b8,puVar11);
            if (local_198[0] < 5) {
              puVar11 = &DAT_1419df7b0;
            }
            else {
              puVar11 = (undefined8 *)local_190[4];
            }
            uVar7 = FUN_140046230(local_f8,uVar7,puVar11);
            if (local_198[0] < 7) {
              puVar11 = &DAT_1419df7b0;
            }
            else {
              puVar11 = (undefined8 *)local_190[6];
            }
            uVar7 = FUN_140046230(local_88,uVar7,puVar11);
            FUN_140041c60(&local_328,uVar7);
            FUN_140041b30(local_88);
            FUN_140041b30(local_f8);
            FUN_140041b30(local_188);
            local_6b8 = 0x6d;
            if (local_198[0] < 4) {
              puVar11 = &DAT_1419df7b0;
            }
            else {
              puVar11 = (undefined8 *)local_190[3];
            }
            uVar7 = FUN_140046230(local_158,&local_388,puVar11);
            if (local_198[0] < 6) {
              puVar11 = &DAT_1419df7b0;
            }
            else {
              puVar11 = (undefined8 *)local_190[5];
            }
            uVar7 = FUN_140046230(local_168,uVar7,puVar11);
            if (local_198[0] < 8) {
              puVar11 = &DAT_1419df7b0;
            }
            else {
              puVar11 = (undefined8 *)local_190[7];
            }
            uVar7 = FUN_140046230(local_178,uVar7,puVar11);
            FUN_140041c60(&local_338,uVar7);
            FUN_140041b30(local_178);
            FUN_140041b30(local_168);
            FUN_140041b30(local_158);
            local_6b8 = 0x70;
            uVar7 = FUN_140046230(local_148,&local_498,&local_338);
            if (local_198[0] < 0xb) {
              puVar11 = &DAT_1419df7b0;
            }
            else {
              puVar11 = (undefined8 *)local_190[10];
            }
            cVar4 = FUN_140046da0(uVar7,puVar11);
            FUN_140041b30(local_148);
            if (cVar4 != '\0') {
              local_6b8 = 0x72;
              if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_6d8);
              }
              local_6d8 = 0;
              local_6d0 = 0;
              local_6cc = 5;
              FUN_140041c60(local_618,&DAT_141dd3038);
              local_698 = local_618;
              if (local_198[0] < 0xb) {
                FUN_140041c60(local_608,&DAT_1419df7b0);
                local_690 = local_608;
                FUN_140041c60(local_5f8,&DAT_141dd2fa8);
              }
              else {
                FUN_140041c60(local_608,local_190[10]);
                local_690 = local_608;
                FUN_140041c60(local_5f8,&DAT_141dd2fa8);
                puVar12 = (undefined8 *)local_190[10];
              }
              local_688 = local_5f8;
              FUN_140041c60(local_5e8,puVar12);
              local_680 = local_5e8;
              FUN_140041c60(local_5d8,&DAT_141dd3048);
              local_678 = local_5d8;
              ppuVar18 = &local_698;
              FUN_1401ef7f0(param_1,param_2,&local_6d8,5,ppuVar18);
              uVar6 = (undefined4)((ulonglong)ppuVar18 >> 0x20);
              local_6b8 = 0x73;
              dVar1 = (double)FUN_140041980(&local_628);
              FUN_140ed2220((longlong)dVar1);
              local_6b8 = 0x74;
              if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_6d8);
              }
              local_6d8 = 0;
              local_6d0 = 0;
              local_6cc = 5;
              local_698 = &local_628;
              FUN_140e634e0(param_1,param_2,&local_6d8,1,CONCAT44(uVar6,DAT_141a073c8),&local_698);
              local_6b8 = 0x75;
              goto LAB_140468de0;
            }
            local_6b8 = 0x79;
            uVar7 = FUN_140046230(local_138,&local_4c8,&local_328);
            if (local_198[0] < 0xb) {
              puVar11 = &DAT_1419df7b0;
            }
            else {
              puVar11 = (undefined8 *)local_190[10];
            }
            cVar4 = FUN_140046da0(uVar7,puVar11);
            FUN_140041b30(local_138);
            if (cVar4 != '\0') {
              local_6b8 = 0x7b;
              FUN_140044220(&local_4c8,0);
              local_6b8 = 0x7c;
              FUN_1400460e0(&local_498,&local_468);
              local_6b8 = 0x7d;
              FUN_140044220(&local_468,0);
            }
            local_6b8 = 0x81;
            if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_6d8);
            }
            local_6d8 = 0;
            local_6d0 = 0;
            local_6cc = 5;
            if ((1 << ((byte)local_6a4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_6b0);
            }
            local_6b0 = 0;
            local_6a8 = 0;
            local_6a4 = 5;
            local_698 = &local_4f8;
            local_690 = &local_458;
            uVar8 = CONCAT44(uVar15,DAT_1419fcb18);
            uVar7 = FUN_140e634e0(param_1,param_2,&local_6b0,1,uVar8,&local_698);
            uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
            FUN_140041c60(local_5f8,uVar7);
            local_688 = local_5f8;
            ppuVar19 = &local_690;
            uVar16 = CONCAT44(uVar6,DAT_1419ff4f8);
            uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,2,uVar16,ppuVar19);
            FUN_140041c60(&local_4a8,uVar7);
            local_6b8 = 0x82;
            cVar4 = FUN_140041d70(&local_4a8,&DAT_1419df7b0);
            if (cVar4 == '\0') {
              local_6b8 = 0x99;
              ppuVar18 = (ulonglong **)((ulonglong)ppuVar19 & 0xffffffffffffff00);
              ppuVar14 = (undefined1 **)(uVar16 & 0xffffffffffffff00);
              FUN_140e87440(&local_4a8,DAT_141a07248,0x80000000,&local_2a8,ppuVar14,ppuVar18);
              FUN_140041c60(&local_628,&local_2a8);
            }
            else {
              local_6b8 = 0x85;
              uVar7 = FUN_140042490(DAT_141ddf048,DAT_141a070e8);
              uVar6 = (undefined4)(uVar16 >> 0x20);
              local_1a8 = uVar7;
              cVar4 = FUN_140041d70(uVar7,&DAT_1419df7b0);
              if (cVar4 != '\0') {
                local_6b8 = 0x87;
                if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_6d8);
                }
                local_6d8 = 0;
                local_6d0 = 0;
                local_6cc = 5;
                uVar7 = CONCAT44(uVar6,DAT_141a07308);
                FUN_140e634e0(param_1,param_2,&local_6d8,0,uVar7,0);
                uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
                local_6b8 = 0x88;
                if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_6d8);
                }
                local_6d8 = 0;
                local_6d0 = 0;
                local_6cc = 5;
                uVar7 = CONCAT44(uVar6,DAT_141a59240);
                FUN_140e634e0(param_1,param_2,&local_6d8,0,uVar7,0);
                uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
                local_6b8 = 0x89;
                if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_6d8);
                }
                local_6d8 = 0;
                local_6d0 = 0;
                local_6cc = 5;
                uVar7 = CONCAT44(uVar6,DAT_141a586f0);
                FUN_140e634e0(param_1,param_2,&local_6d8,0,uVar7,0);
                uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
                local_6b8 = 0x8a;
                if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_6d8);
                }
                local_6d8 = 0;
                local_6d0 = 0;
                local_6cc = 5;
                uVar7 = CONCAT44(uVar6,DAT_141a07148);
                FUN_140e634e0(param_1,param_2,&local_6d8,0,uVar7,0);
                uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
                local_6b8 = 0x8b;
                if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_6d8);
                }
                local_6d8 = 0;
                local_6d0 = 0;
                local_6cc = 5;
                uVar7 = FUN_1400419a0(DAT_141ddf048,DAT_141a070e8);
                FUN_140e609c0(DAT_141ddf048);
                uVar13 = CONCAT44(uVar6,DAT_141a07528);
                uVar8 = FUN_140e634e0(param_1,param_2,&local_6d8,0,uVar13,0);
                uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
                FUN_140041c60(uVar7,uVar8);
                FUN_140e60910(1);
                uVar7 = local_1a8;
              }
              local_6b8 = 0x8f;
              if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_6d8);
              }
              local_6d8 = 0;
              local_6d0 = 0;
              local_6cc = 5;
              uVar13 = CONCAT44(uVar6,DAT_141a071e8);
              uVar8 = FUN_140e634e0(param_1,param_2,&local_6d8,0,uVar13,0);
              uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
              FUN_140041c60(&local_628,uVar8);
              local_6b8 = 0x90;
              dVar1 = (double)FUN_140041980(uVar7);
              dVar2 = (double)FUN_140041980(&local_628);
              FUN_140ed20c0((longlong)dVar2,(longlong)dVar1 & 0xffffffff);
              local_6b8 = 0x92;
              if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_6d8);
              }
              local_6d8 = 0;
              local_6d0 = 0;
              local_6cc = 5;
              if ((1 << ((byte)local_6a4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_6b0);
              }
              local_6b0 = 0;
              local_6a8 = 0;
              local_6a4 = 5;
              if ((1 << ((byte)local_54c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_558);
              }
              local_558 = 0;
              local_550 = 0;
              local_54c = 5;
              local_698 = &local_4f8;
              FUN_140e609c0(DAT_141a729d8);
              uVar7 = FUN_140041c40(local_128,gml_GlobalScript_scribble_font_bake_shadow,0);
              FUN_140041c60(local_1a0,uVar7);
              FUN_140e60910(1);
              FUN_140041c60(local_608,local_1a0);
              FUN_140041b30(local_128);
              local_688 = &local_628;
              local_680 = &local_4f8;
              local_678 = &local_458;
              uVar8 = CONCAT44(uVar6,DAT_1419fcb18);
              local_690 = local_608;
              uVar7 = FUN_140e634e0(param_1,param_2,&local_6b0,1,uVar8,&local_698);
              uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
              FUN_140041c60(local_5c8,uVar7);
              local_670 = (undefined8 *)local_5c8;
              uVar8 = CONCAT44(uVar6,DAT_1419fd6d8);
              uVar7 = FUN_140e634e0(param_1,param_2,&local_558,3,uVar8,&local_690);
              uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
              FUN_140041c60(local_5b8,uVar7);
              local_668 = local_5b8;
              ppuVar18 = &local_678;
              ppuVar14 = (undefined1 **)CONCAT44(uVar6,DAT_1419ff3d8);
              FUN_140e634e0(param_1,param_2,&local_6d8,3,ppuVar14,ppuVar18);
            }
            local_6b8 = 0x9c;
            if (local_198[0] < 5) {
              puVar11 = &DAT_1419df7b0;
            }
            else {
              puVar11 = (undefined8 *)local_190[4];
            }
            uVar7 = FUN_140046230(local_118,puVar11,&local_4c8);
            FUN_140041c60(&local_478,uVar7);
            FUN_140041b30(local_118);
            local_6b8 = 0x9d;
            if (local_198[0] < 6) {
              puVar11 = &DAT_1419df7b0;
            }
            else {
              puVar11 = (undefined8 *)local_190[5];
            }
            uVar7 = FUN_140046230(local_108,puVar11,&local_498);
            FUN_140041c60(&local_448,uVar7);
            FUN_140041b30(local_108);
            local_6b8 = 0x9e;
            uVar7 = FUN_140046230(local_78,&local_478,&local_3b8);
            FUN_140041c60(&local_408,uVar7);
            FUN_140041b30(local_78);
            local_6b8 = 0x9f;
            uVar7 = FUN_140046230(local_e8,&local_448,&local_388);
            FUN_140041c60(&local_418,uVar7);
            FUN_140041b30(local_e8);
            local_6b8 = 0xa1;
            dVar1 = (double)FUN_140041980(&local_448);
            dVar2 = (double)FUN_140041980(&local_478);
            dVar3 = (double)FUN_140041980(&local_628);
            FUN_140ed2410((longlong)dVar3,(float)dVar2,(float)dVar1);
            dVar1 = (double)FUN_140041980(&local_628);
            FUN_140ed2140((longlong)dVar1,0xffffff,0x3f800000);
            dVar1 = (double)FUN_140041980(&local_3d8);
            dVar2 = (double)FUN_140041980(&local_3c8);
            dVar3 = (double)FUN_140041980(&local_628);
            FUN_140ed25a0((longlong)dVar3,(float)dVar2,(float)dVar1);
            local_6b8 = 0xa2;
            dVar1 = (double)FUN_140041980(&local_448);
            dVar2 = (double)FUN_140041980(&local_408);
            dVar3 = (double)FUN_140041980(&local_628);
            FUN_140ed2410((longlong)dVar3,(float)dVar2,(float)dVar1);
            dVar1 = (double)FUN_140041980(&local_628);
            FUN_140ed2140((longlong)dVar1,0xffffff,0x3f800000);
            dVar1 = (double)FUN_140041980(&local_3d8);
            dVar2 = (double)FUN_140041980(&local_3e8);
            dVar3 = (double)FUN_140041980(&local_628);
            FUN_140ed25a0((longlong)dVar3,(float)dVar2,(float)dVar1);
            local_6b8 = 0xa3;
            dVar1 = (double)FUN_140041980(&local_418);
            dVar2 = (double)FUN_140041980(&local_478);
            dVar3 = (double)FUN_140041980(&local_628);
            FUN_140ed2410((longlong)dVar3,(float)dVar2,(float)dVar1);
            dVar1 = (double)FUN_140041980(&local_628);
            FUN_140ed2140((longlong)dVar1,0xffffff,0x3f800000);
            dVar1 = (double)FUN_140041980(&local_3f8);
            dVar2 = (double)FUN_140041980(&local_3c8);
            dVar3 = (double)FUN_140041980(&local_628);
            FUN_140ed25a0((longlong)dVar3,(float)dVar2,(float)dVar1);
            local_6b8 = 0xa5;
            dVar1 = (double)FUN_140041980(&local_448);
            dVar2 = (double)FUN_140041980(&local_408);
            dVar3 = (double)FUN_140041980(&local_628);
            FUN_140ed2410((longlong)dVar3,(float)dVar2,(float)dVar1);
            dVar1 = (double)FUN_140041980(&local_628);
            FUN_140ed2140((longlong)dVar1,0xffffff,0x3f800000);
            dVar1 = (double)FUN_140041980(&local_3d8);
            dVar2 = (double)FUN_140041980(&local_3e8);
            dVar3 = (double)FUN_140041980(&local_628);
            FUN_140ed25a0((longlong)dVar3,(float)dVar2,(float)dVar1);
            local_6b8 = 0xa6;
            dVar1 = (double)FUN_140041980(&local_418);
            dVar2 = (double)FUN_140041980(&local_408);
            dVar3 = (double)FUN_140041980(&local_628);
            FUN_140ed2410((longlong)dVar3,(float)dVar2,(float)dVar1);
            dVar1 = (double)FUN_140041980(&local_628);
            FUN_140ed2140((longlong)dVar1,0xffffff,0x3f800000);
            dVar1 = (double)FUN_140041980(&local_3f8);
            dVar2 = (double)FUN_140041980(&local_3e8);
            dVar3 = (double)FUN_140041980(&local_628);
            FUN_140ed25a0((longlong)dVar3,(float)dVar2,(float)dVar1);
            local_6b8 = 0xa7;
            dVar1 = (double)FUN_140041980(&local_418);
            dVar2 = (double)FUN_140041980(&local_478);
            dVar3 = (double)FUN_140041980(&local_628);
            FUN_140ed2410((longlong)dVar3,(float)dVar2,(float)dVar1);
            dVar1 = (double)FUN_140041980(&local_628);
            FUN_140ed2140((longlong)dVar1,0xffffff,0x3f800000);
            dVar1 = (double)FUN_140041980(&local_3f8);
            dVar2 = (double)FUN_140041980(&local_3c8);
            dVar3 = (double)FUN_140041980(&local_628);
            FUN_140ed25a0((longlong)dVar3,(float)dVar2,(float)dVar1);
            local_6b8 = 0xa9;
            dVar1 = (double)FUN_140041980(&local_538);
            dVar2 = (double)FUN_140041980(&local_548);
            FUN_140ea8d00((longlong)dVar2,(longlong)dVar1 & 0xffffffff,0xc,&local_4c8);
            local_6b8 = 0xaa;
            dVar1 = (double)FUN_140041980(&local_538);
            dVar2 = (double)FUN_140041980(&local_548);
            FUN_140ea8d00((longlong)dVar2,(longlong)dVar1 & 0xffffffff,0xe,&local_498);
            local_6b8 = 0xab;
            uVar7 = FUN_140046230(local_b8,&local_4c8,&local_3b8);
            if (local_198[0] < 5) {
              puVar11 = &DAT_1419df7b0;
            }
            else {
              puVar11 = (undefined8 *)local_190[4];
            }
            uVar7 = FUN_140046230(local_c8,uVar7,puVar11);
            if (local_198[0] < 7) {
              puVar11 = &DAT_1419df7b0;
            }
            else {
              puVar11 = (undefined8 *)local_190[6];
            }
            uVar7 = FUN_140046230(local_d8,uVar7,puVar11);
            dVar1 = (double)FUN_140041980(&local_538);
            dVar2 = (double)FUN_140041980(&local_548);
            FUN_140ea8d00((longlong)dVar2,(longlong)dVar1 & 0xffffffff,0xd,uVar7);
            FUN_140041b30(local_d8);
            FUN_140041b30(local_c8);
            FUN_140041b30(local_b8);
            local_6b8 = 0xac;
            uVar7 = FUN_140046230(local_638,&local_498,&local_388);
            if (local_198[0] < 6) {
              puVar11 = &DAT_1419df7b0;
            }
            else {
              puVar11 = (undefined8 *)local_190[5];
            }
            uVar7 = FUN_140046230(local_358,uVar7,puVar11);
            if (local_198[0] < 8) {
              puVar11 = &DAT_1419df7b0;
            }
            else {
              puVar11 = (undefined8 *)local_190[7];
            }
            uVar7 = FUN_140046230(local_a8,uVar7,puVar11);
            dVar1 = (double)FUN_140041980(&local_538);
            dVar2 = (double)FUN_140041980(&local_548);
            FUN_140ea8d00((longlong)dVar2,(longlong)dVar1 & 0xffffffff,0xf,uVar7);
            FUN_140041b30(local_a8);
            FUN_140041b30(local_358);
            FUN_140041b30(local_638);
            local_6b8 = 0xae;
            FUN_1400460e0(&local_4c8,&local_328);
            local_6b8 = 0xaf;
            if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_6d8);
            }
            local_6d8 = 0;
            local_6d0 = 0;
            local_6cc = 5;
            local_698 = &local_468;
            local_690 = &local_338;
            uVar7 = FUN_140e79090(&local_6d8,2,&local_698);
            FUN_140041c60(&local_468,uVar7);
            local_6b8 = 0xb1;
            FUN_140046040(&local_538);
          }
          else {
            local_6b8 = 0x61;
            FUN_140046040(&local_538);
          }
          uVar16 = local_508;
          iVar5 = (int)local_508;
        }
        uVar6 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
        iVar5 = 0;
        local_6b8 = 0xb5;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        if (local_198[0] < 0xb) {
          FUN_140041c60(local_618,&DAT_1419df7b0);
          puVar11 = &DAT_1419df7b0;
        }
        else {
          FUN_140041c60(local_618,local_190[10]);
          puVar11 = (undefined8 *)local_190[10];
        }
        local_698 = local_618;
        FUN_140041c60(local_608,puVar11);
        uVar8 = CONCAT44(uVar6,DAT_141a04a78);
        local_690 = local_608;
        uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,2,uVar8,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(&local_488,uVar7);
        local_6b8 = 0xb8;
        dVar1 = (double)FUN_140041980(&local_488);
        FUN_140ec60c0((longlong)dVar1,0xffffffff);
        local_6b8 = 0xb9;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        FUN_1400441d0(local_618,&DAT_1419e5d90);
        local_698 = local_618;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        uVar7 = CONCAT44(uVar6,DAT_141a04558);
        local_690 = local_608;
        FUN_140e634e0(param_1,param_2,&local_6d8,2,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xba;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        FUN_1400441d0(local_618,&DAT_1419df7a0);
        local_698 = local_618;
        uVar7 = CONCAT44(uVar6,DAT_1419f5148);
        FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xbd;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_458;
        ppuVar18 = &local_698;
        uVar16 = CONCAT44(uVar6,DAT_1419f83a8);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar16,ppuVar18);
        FUN_140041c60(&local_428,uVar7);
        local_6b8 = 0xbe;
        FUN_140044220(&local_538,0);
        if ((local_41c == 2) && (local_428 != 0)) {
          iVar5 = *(int *)(local_428 + 0x24);
        }
        while (0 < iVar5) {
          iVar5 = iVar5 + -1;
          local_6b8 = 0xc1;
          uVar6 = thunk_FUN_140e4a740(&local_538);
          uVar7 = FUN_140044270(&local_428,uVar6);
          FUN_140041c60(&local_4a8,uVar7);
          local_6b8 = 0xc2;
          uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
          uVar16 = uVar16 & 0xffffffffffffff00;
          FUN_140e87440(&local_4a8,DAT_141a07248,0x80000000,&local_2b8,uVar16,uVar17);
          FUN_140041c60(&local_628,&local_2b8);
          local_6b8 = 0xc4;
          dVar1 = (double)FUN_140041980(&local_628);
          FUN_140ed2220((longlong)dVar1);
          local_6b8 = 0xc5;
          FUN_140e87440(&local_4a8,DAT_141a06448,0x80000000,&local_2c8,uVar16 & 0xffffffffffffff00,
                        uVar17 & 0xffffffffffffff00);
          dVar1 = (double)FUN_140041980(&local_628);
          uVar6 = 0xffffffff;
          FUN_140ed1ce0((longlong)dVar1,4,&local_2c8,0,0xffffffffffffffff);
          local_6b8 = 0xc6;
          if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_6d8);
          }
          local_6d8 = 0;
          local_6d0 = 0;
          local_6cc = 5;
          local_698 = &local_628;
          ppuVar18 = &local_698;
          uVar16 = CONCAT44(uVar6,DAT_141a073c8);
          FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar16,ppuVar18);
          local_6b8 = 200;
          FUN_140046040(&local_538);
        }
        local_6b8 = 0xcb;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_458;
        uVar7 = CONCAT44((int)(uVar16 >> 0x20),DAT_141a01ab8);
        FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xcc;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        if (local_198[0] < 0xb) {
          FUN_140041c60(local_618,&DAT_1419df7b0);
          puVar11 = &DAT_1419df7b0;
        }
        else {
          FUN_140041c60(local_618,local_190[10]);
          puVar11 = (undefined8 *)local_190[10];
        }
        local_698 = local_618;
        FUN_140041c60(local_608,puVar11);
        uVar8 = CONCAT44(uVar6,DAT_141a04a78);
        local_690 = local_608;
        uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,2,uVar8,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(&local_368,uVar7);
        local_6b8 = 0xce;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        FUN_1400441d0(local_618,&DAT_1419df7c0);
        local_698 = local_618;
        uVar7 = CONCAT44(uVar6,DAT_1419f5148);
        FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xcf;
        FUN_140ec7870();
        local_6b8 = 0xd1;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_488;
        uVar8 = CONCAT44(uVar6,DAT_141a04b28);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar8,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(&local_4f8,uVar7);
        local_6b8 = 0xd4;
        dVar1 = (double)FUN_140041980(&local_368);
        FUN_140ec60c0((longlong)dVar1,0xffffffff);
        local_6b8 = 0xd5;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        FUN_1400441d0(local_618,&DAT_1419e5d90);
        local_698 = local_618;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        uVar7 = CONCAT44(uVar6,DAT_141a04558);
        local_690 = local_608;
        FUN_140e634e0(param_1,param_2,&local_6d8,2,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xd7;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        uVar8 = CONCAT44(uVar6,DAT_141a07358);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,0,uVar8,0);
        uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(&local_2d8,uVar7);
        local_6b8 = 0xd8;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        if (local_198[0] < 10) {
          puVar11 = &DAT_1419df7b0;
        }
        else {
          puVar11 = (undefined8 *)local_190[9];
        }
        FUN_140041c60(local_618,puVar11);
        local_698 = local_618;
        uVar7 = CONCAT44(uVar6,DAT_141a07438);
        FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xd9;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        FUN_1400441d0(local_618,&DAT_1419df7a0);
        local_698 = local_618;
        uVar7 = CONCAT44(uVar6,DAT_1419f5148);
        FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xdb;
        if (local_198[0] < 3) {
          puVar11 = &DAT_1419df7b0;
        }
        else {
          puVar11 = (undefined8 *)local_190[2];
        }
        dVar1 = (double)FUN_140041980(puVar11);
        FUN_140ec9e10((longlong)dVar1);
        local_6b8 = 0xdc;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        if ((1 << ((byte)local_6a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6b0);
        }
        local_6b0 = 0;
        local_6a8 = 0;
        local_6a4 = 5;
        if ((1 << ((byte)local_54c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_558);
        }
        local_558 = 0;
        local_550 = 0;
        local_54c = 5;
        if (local_198[0] < 3) {
          puVar11 = &DAT_1419df7b0;
        }
        else {
          puVar11 = (undefined8 *)local_190[2];
        }
        FUN_140041c60(local_618,puVar11);
        local_698 = local_618;
        FUN_140041c60(local_608,&DAT_141dd3008);
        local_688 = &local_4f8;
        local_680 = &local_4f8;
        uVar8 = CONCAT44(uVar6,DAT_141a04778);
        local_690 = local_608;
        uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,2,uVar8,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(local_5d8,uVar7);
        local_678 = local_5d8;
        uVar8 = CONCAT44(uVar6,DAT_141a04658);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_6b0,1,uVar8,&local_688);
        uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(local_5c8,uVar7);
        local_670 = (undefined8 *)local_5c8;
        uVar8 = CONCAT44(uVar6,DAT_141a04668);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_558,1,uVar8,&local_680);
        uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(local_5b8,uVar7);
        local_668 = local_5b8;
        FUN_140ec9ea0(3,&local_678);
        local_6b8 = 0xdd;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_488;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        local_690 = local_608;
        FUN_1400441d0(local_5f8,&DAT_141dc6610);
        local_688 = local_5f8;
        uVar7 = CONCAT44(uVar6,DAT_141a049d8);
        FUN_140e634e0(param_1,param_2,&local_6d8,3,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xde;
        FUN_140ec9dc0();
        local_6b8 = 0xe0;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_2d8;
        uVar7 = CONCAT44(uVar6,DAT_141a07438);
        FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xe1;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        FUN_1400441d0(local_618,&DAT_1419df7c0);
        local_698 = local_618;
        uVar7 = CONCAT44(uVar6,DAT_1419f5148);
        FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xe2;
        FUN_140ec7870();
        local_6b8 = 0xe4;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_488;
        uVar7 = CONCAT44(uVar6,DAT_141a04918);
        FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xe7;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_368;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        local_690 = local_608;
        FUN_1400441d0(local_5f8,&DAT_141dc6610);
        local_688 = local_5f8;
        if (local_198[0] < 0xb) {
          FUN_140041c60(local_5e8,&DAT_1419df7b0);
          puVar11 = &DAT_1419df7b0;
        }
        else {
          FUN_140041c60(local_5e8,local_190[10]);
          puVar11 = (undefined8 *)local_190[10];
        }
        local_680 = local_5e8;
        FUN_140041c60(local_5d8,puVar11);
        local_678 = local_5d8;
        FUN_1400441d0(local_5c8,&DAT_1419df7a0);
        local_670 = (undefined8 *)local_5c8;
        FUN_1400441d0(local_5b8,&DAT_1419df7a0);
        local_668 = local_5b8;
        FUN_1400441d0(local_5a8,&DAT_141dc6610);
        local_660 = local_5a8;
        FUN_1400441d0(local_598,&DAT_141dc6610);
        local_658 = local_598;
        uVar8 = CONCAT44(uVar6,DAT_141a04ad8);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,9,uVar8,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(&local_378,uVar7);
        local_6b8 = 0xe8;
        FUN_140041c60(&local_2e8,&local_378);
        FUN_140e87930(&local_4e8,DAT_141a06468,0x80000000,&local_2e8);
        local_6b8 = 0xe9;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_368;
        ppuVar18 = &local_698;
        uVar16 = CONCAT44(uVar6,DAT_141a04918);
        FUN_140e634e0(param_1,param_2,&local_6d8,1,uVar16,ppuVar18);
        local_6b8 = 0xec;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        if ((1 << ((byte)local_6a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6b0);
        }
        local_6b0 = 0;
        local_6a8 = 0;
        local_6a4 = 5;
        local_698 = &local_378;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
        uVar16 = uVar16 & 0xffffffffffffff00;
        local_690 = local_608;
        FUN_140e87440(&local_4e8,DAT_141a062b8,0x80000000,&local_2f8,uVar16,uVar17);
        FUN_140e87440(&local_4e8,DAT_141a063e8,0x80000000,&local_308,uVar16 & 0xffffffffffffff00,
                      uVar17 & 0xffffffffffffff00);
        if (local_198[0] < 2) {
          puVar11 = &DAT_1419df7b0;
        }
        else {
          puVar11 = (undefined8 *)local_190[1];
        }
        FUN_140041c60(local_5f8,puVar11);
        local_688 = local_5f8;
        uVar7 = gml_Script___scribble_surface_get_material(param_1,param_2,&local_6b0,2,&local_698);
        FUN_140041c60(local_5e8,uVar7);
        local_680 = local_5e8;
        FUN_140041c60(local_5d8,&local_2f8);
        local_678 = local_5d8;
        FUN_140041c60(local_5c8,&DAT_1419df7b0);
        local_670 = (undefined8 *)local_5c8;
        FUN_140041c60(local_5b8,&DAT_1419df7b0);
        local_668 = local_5b8;
        FUN_140041c60(local_5a8,&local_308);
        local_660 = local_5a8;
        ppuVar18 = &local_688;
        uVar7 = gml_Script____struct___60___scribble_glyph_data_initialize___scribble_glyph_data_initialize
                          (param_1,param_2,&local_6d8,6,ppuVar18);
        uVar6 = (undefined4)((ulonglong)ppuVar18 >> 0x20);
        FUN_140041c60(&local_1b8,uVar7);
        local_6b8 = 0xef;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_548;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        local_690 = local_608;
        FUN_1400441d0(local_5f8,&DAT_1419e5db0);
        local_688 = local_5f8;
        uVar7 = FUN_140053940(local_638,&local_528,1);
        FUN_140041c60(local_5e8,uVar7);
        FUN_140041b30(local_638);
        local_680 = local_5e8;
        FUN_1400441d0(local_5d8,&DAT_1419e5db0);
        local_678 = local_5d8;
        if (local_198[0] < 5) {
          puVar11 = &DAT_1419df7b0;
        }
        else {
          puVar11 = (undefined8 *)local_190[4];
        }
        uVar16 = FUN_140041980(puVar11);
        uVar7 = FUN_140042540(local_638,uVar16 ^ 0x8000000000000000);
        FUN_140041c60(local_5c8,uVar7);
        FUN_140041b30(local_638);
        local_670 = (undefined8 *)local_5c8;
        uVar7 = CONCAT44(uVar6,DAT_141a08eb8);
        FUN_140e634e0(param_1,param_2,&local_6d8,6,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xf0;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_548;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        local_690 = local_608;
        FUN_1400441d0(local_5f8,&DAT_1419e5de0);
        local_688 = local_5f8;
        uVar7 = FUN_140053940(local_638,&local_528,1);
        FUN_140041c60(local_5e8,uVar7);
        FUN_140041b30(local_638);
        local_680 = local_5e8;
        FUN_1400441d0(local_5d8,&DAT_1419e5de0);
        local_678 = local_5d8;
        if (local_198[0] < 6) {
          puVar11 = &DAT_1419df7b0;
        }
        else {
          puVar11 = (undefined8 *)local_190[5];
        }
        uVar16 = FUN_140041980(puVar11);
        uVar7 = FUN_140042540(local_638,uVar16 ^ 0x8000000000000000);
        FUN_140041c60(local_5c8,uVar7);
        FUN_140041b30(local_638);
        local_670 = (undefined8 *)local_5c8;
        uVar7 = CONCAT44(uVar6,DAT_141a08eb8);
        FUN_140e634e0(param_1,param_2,&local_6d8,6,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xf1;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_548;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        local_690 = local_608;
        FUN_1400441d0(local_5f8,&DAT_1419e5e00);
        local_688 = local_5f8;
        uVar7 = FUN_140053940(local_638,&local_528,1);
        FUN_140041c60(local_5e8,uVar7);
        FUN_140041b30(local_638);
        local_680 = local_5e8;
        FUN_1400441d0(local_5d8,&DAT_1419e5e00);
        local_678 = local_5d8;
        if (local_198[0] < 7) {
          puVar11 = &DAT_1419df7b0;
          if (local_198[0] < 5) {
            puVar10 = &DAT_1419df7b0;
          }
          else {
            puVar10 = (undefined8 *)local_190[4];
          }
        }
        else {
          puVar11 = (undefined8 *)local_190[6];
          puVar10 = (undefined8 *)local_190[4];
        }
        uVar7 = FUN_140046230(local_638,puVar10,puVar11);
        FUN_140041c60(local_5c8,uVar7);
        FUN_140041b30(local_638);
        local_670 = (undefined8 *)local_5c8;
        uVar7 = CONCAT44(uVar6,DAT_141a08eb8);
        FUN_140e634e0(param_1,param_2,&local_6d8,6,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xf2;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_548;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        local_690 = local_608;
        FUN_1400441d0(local_5f8,&DAT_1419e5dd0);
        local_688 = local_5f8;
        uVar7 = FUN_140053940(local_638,&local_528,1);
        FUN_140041c60(local_5e8,uVar7);
        FUN_140041b30(local_638);
        local_680 = local_5e8;
        FUN_1400441d0(local_5d8,&DAT_1419e5dd0);
        local_678 = local_5d8;
        if (local_198[0] < 8) {
          puVar11 = &DAT_1419df7b0;
          if (local_198[0] < 6) {
            puVar10 = &DAT_1419df7b0;
          }
          else {
            puVar10 = (undefined8 *)local_190[5];
          }
        }
        else {
          puVar11 = (undefined8 *)local_190[7];
          puVar10 = (undefined8 *)local_190[5];
        }
        uVar7 = FUN_140046230(local_638,puVar10,puVar11);
        FUN_140041c60(local_5c8,uVar7);
        FUN_140041b30(local_638);
        local_670 = (undefined8 *)local_5c8;
        uVar7 = CONCAT44(uVar6,DAT_141a08eb8);
        FUN_140e634e0(param_1,param_2,&local_6d8,6,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xf3;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_548;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        local_690 = local_608;
        FUN_1400441d0(local_5f8,&DAT_1419e5e30);
        local_688 = local_5f8;
        uVar7 = FUN_140053940(local_638,&local_528,1);
        FUN_140041c60(local_5e8,uVar7);
        FUN_140041b30(local_638);
        local_680 = local_5e8;
        FUN_1400441d0(local_5d8,&DAT_1419e5e30);
        local_678 = local_5d8;
        if (local_198[0] < 8) {
          puVar11 = &DAT_1419df7b0;
          if (local_198[0] < 6) {
            puVar10 = &DAT_1419df7b0;
          }
          else {
            puVar10 = (undefined8 *)local_190[5];
          }
        }
        else {
          puVar11 = (undefined8 *)local_190[7];
          puVar10 = (undefined8 *)local_190[5];
        }
        uVar7 = FUN_140046230(local_638,puVar10,puVar11);
        FUN_140041c60(local_5c8,uVar7);
        FUN_140041b30(local_638);
        local_670 = (undefined8 *)local_5c8;
        uVar7 = CONCAT44(uVar6,DAT_141a08eb8);
        FUN_140e634e0(param_1,param_2,&local_6d8,6,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xf4;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_548;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        local_690 = local_608;
        FUN_1400441d0(local_5f8,&DAT_1419e5e50);
        local_688 = local_5f8;
        uVar7 = FUN_140053940(local_638,&local_528,1);
        FUN_140041c60(local_5e8,uVar7);
        FUN_140041b30(local_638);
        local_680 = local_5e8;
        FUN_1400441d0(local_5d8,&DAT_1419e5e50);
        local_678 = local_5d8;
        if (local_198[0] < 9) {
          puVar11 = &DAT_1419df7b0;
        }
        else {
          puVar11 = (undefined8 *)local_190[8];
        }
        FUN_140041c60(local_5c8,puVar11);
        local_670 = (undefined8 *)local_5c8;
        uVar7 = CONCAT44(uVar6,DAT_141a08eb8);
        FUN_140e634e0(param_1,param_2,&local_6d8,6,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xf5;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_548;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        local_690 = local_608;
        FUN_1400441d0(local_5f8,&DAT_1419e5e40);
        local_688 = local_5f8;
        uVar7 = FUN_140053940(local_638,&local_528,1);
        FUN_140041c60(local_5e8,uVar7);
        FUN_140041b30(local_638);
        local_680 = local_5e8;
        FUN_1400441d0(local_5d8,&DAT_1419e5e40);
        local_678 = local_5d8;
        local_670 = &local_1b8;
        uVar7 = CONCAT44(uVar6,DAT_141a08858);
        FUN_140e634e0(param_1,param_2,&local_6d8,6,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xf8;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_378;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        uVar8 = CONCAT44(uVar6,DAT_141a04898);
        local_690 = local_608;
        uVar7 = FUN_140e634e0(param_1,param_2,&local_6d8,2,uVar8,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(&local_438,uVar7);
        local_6b8 = 0xf9;
        uVar7 = FUN_140044270(&local_438,0);
        FUN_140041c60(&local_318,uVar7);
        local_6b8 = 0xfa;
        uVar7 = FUN_140044270(&local_438,1);
        FUN_140041c60(&local_348,uVar7);
        local_6b8 = 0xfb;
        uVar7 = FUN_140044270(&local_438,2);
        FUN_140041c60(&local_1c8,uVar7);
        local_6b8 = 0xfc;
        uVar7 = FUN_140044270(&local_438,3);
        FUN_140041c60(&local_1d8,uVar7);
        local_6b8 = 0xfe;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_548;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        local_690 = local_608;
        FUN_1400441d0(local_5f8,&DAT_1419e5e10);
        local_688 = local_5f8;
        uVar7 = FUN_140053940(local_638,&local_528,1);
        FUN_140041c60(local_5e8,uVar7);
        FUN_140041b30(local_638);
        local_680 = local_5e8;
        FUN_1400441d0(local_5d8,&DAT_1419e5df0);
        local_678 = local_5d8;
        if (10 < local_198[0]) {
          puVar12 = (undefined8 *)local_190[10];
        }
        uVar7 = FUN_1400539e0(local_638,0x3ff0000000000000,puVar12);
        FUN_140041c60(local_5c8,uVar7);
        FUN_140041b30(local_638);
        local_670 = (undefined8 *)local_5c8;
        uVar7 = CONCAT44(uVar6,DAT_141a08fe8);
        FUN_140e634e0(param_1,param_2,&local_6d8,6,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0xff;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_548;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        local_690 = local_608;
        FUN_1400441d0(local_5f8,&DAT_1419e5e10);
        local_688 = local_5f8;
        uVar7 = FUN_140053940(local_638,&local_528,1);
        FUN_140041c60(local_5e8,uVar7);
        FUN_140041b30(local_638);
        local_680 = local_5e8;
        FUN_1400441d0(local_5d8,&DAT_1419e5e20);
        local_678 = local_5d8;
        uVar7 = FUN_140046450(local_358,&local_1c8,&local_318);
        FUN_140041c60(local_5c8,uVar7);
        FUN_140041b30(local_358);
        local_670 = (undefined8 *)local_5c8;
        uVar7 = CONCAT44(uVar6,DAT_141a08fe8);
        FUN_140e634e0(param_1,param_2,&local_6d8,6,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0x100;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_548;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        local_690 = local_608;
        FUN_1400441d0(local_5f8,&DAT_1419e5dc0);
        local_688 = local_5f8;
        uVar7 = FUN_140053940(local_638,&local_528,1);
        FUN_140041c60(local_5e8,uVar7);
        FUN_140041b30(local_638);
        local_680 = local_5e8;
        FUN_1400441d0(local_5d8,&DAT_1419e5df0);
        local_678 = local_5d8;
        uVar7 = FUN_140046450(local_358,&local_1d8,&local_348);
        FUN_140041c60(local_5c8,uVar7);
        FUN_140041b30(local_358);
        local_670 = (undefined8 *)local_5c8;
        uVar7 = CONCAT44(uVar6,DAT_141a08fe8);
        FUN_140e634e0(param_1,param_2,&local_6d8,6,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0x101;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_548;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        local_690 = local_608;
        FUN_1400441d0(local_5f8,&DAT_1419e5e10);
        local_688 = local_5f8;
        uVar7 = FUN_140053940(local_638,&local_528,1);
        FUN_140041c60(local_5e8,uVar7);
        FUN_140041b30(local_638);
        local_680 = local_5e8;
        FUN_1400441d0(local_5d8,&DAT_1419e5e20);
        local_678 = local_5d8;
        local_670 = &local_318;
        uVar7 = CONCAT44(uVar6,DAT_141a08eb8);
        FUN_140e634e0(param_1,param_2,&local_6d8,6,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0x102;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_548;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        local_690 = local_608;
        FUN_1400441d0(local_5f8,&DAT_1419e5dc0);
        local_688 = local_5f8;
        uVar7 = FUN_140053940(local_638,&local_528,1);
        FUN_140041c60(local_5e8,uVar7);
        FUN_140041b30(local_638);
        local_680 = local_5e8;
        FUN_1400441d0(local_5d8,&DAT_1419e5df0);
        local_678 = local_5d8;
        local_670 = &local_348;
        uVar7 = CONCAT44(uVar6,DAT_141a08eb8);
        FUN_140e634e0(param_1,param_2,&local_6d8,6,uVar7,&local_698);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_6b8 = 0x105;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        local_698 = &local_548;
        FUN_1400441d0(local_608,&DAT_141dc6610);
        local_690 = local_608;
        FUN_1400441d0(local_5f8,&DAT_1419e5da0);
        local_688 = local_5f8;
        uVar7 = FUN_140053940(local_638,&local_528,1);
        FUN_140041c60(local_5e8,uVar7);
        FUN_140041b30(local_638);
        local_680 = local_5e8;
        FUN_1400441d0(local_5d8,&DAT_1419e5da0);
        local_678 = local_5d8;
        FUN_1400441d0(local_5c8,&DAT_1419df7c0);
        local_670 = (undefined8 *)local_5c8;
        FUN_140e634e0(param_1,param_2,&local_6d8,6,CONCAT44(uVar6,DAT_141a08858),&local_698);
      }
      else {
        local_6b8 = 0x35;
        if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_6d8);
        }
        local_6d8 = 0;
        local_6d0 = 0;
        local_6cc = 5;
        FUN_140041c60(local_618,&DAT_141dd2ff8);
        local_698 = local_618;
        FUN_1401ef7f0(param_1,param_2,&local_6d8,1,&local_698);
        local_6b8 = 0x36;
        FUN_140041c60(param_3,&DAT_1419df7b0);
      }
    }
    else {
      local_6b8 = 0x2f;
      if ((1 << ((byte)local_6cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_6d8);
      }
      local_6d8 = 0;
      local_6d0 = 0;
      local_6cc = 5;
      FUN_140041c60(local_618,&DAT_141dd2fb8);
      local_698 = local_618;
      FUN_1401ef7f0(param_1,param_2,&local_6d8,1,&local_698);
      local_6b8 = 0x30;
      FUN_140041c60(param_3,&DAT_1419df7b0);
    }
    goto LAB_140468de0;
  }
  local_6b8 = 0x29;
  if ((1 << ((byte)local_6a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_6b0);
  }
  local_6b0 = 0;
  local_6a8 = 0;
  local_6a4 = 5;
  FUN_140041c60(local_608,&DAT_141dd2fd8);
  if (local_198[0] < 1) {
    puVar9 = &DAT_1419df7b0;
LAB_14046509f:
    local_508 = *puVar9;
    uStack_500 = (undefined4)puVar9[1];
    uStack_4fc = *(undefined4 *)((longlong)puVar9 + 0xc);
    local_690 = local_608;
    FUN_140041b60(local_5f8);
    FUN_140041b80(local_5f8,&local_508);
  }
  else {
    puVar9 = (ulonglong *)*local_190;
    local_690 = local_608;
    if (puVar9 != local_5f8) goto LAB_14046509f;
  }
  local_688 = local_5f8;
  FUN_140041c60(local_5e8,&DAT_141dd2fc8);
  local_680 = local_5e8;
  if (local_198[0] < 2) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)local_190[1];
  }
  FUN_140041c60(local_5d8,puVar12);
  local_678 = local_5d8;
  FUN_140041c60(local_5c8,&DAT_141dd2fe8);
  local_670 = (undefined8 *)local_5c8;
  FUN_1401ef7f0(param_1,param_2,&local_6b0,5,&local_690);
  local_6b8 = 0x2a;
  FUN_140041c60(param_3,&DAT_1419df7b0);
LAB_140468de0:
  FUN_140041b30(&local_4b8);
  FUN_140041b30(&local_558);
  FUN_140041b30(&local_6b0);
  FUN_140041b30(&local_6d8);
  FUN_140041b30(&local_1d8);
  FUN_140041b30(&local_1c8);
  FUN_140041b30(&local_348);
  FUN_140041b30(&local_318);
  FUN_140041b30(&local_438);
  FUN_140041b30(&local_1b8);
  FUN_140041b30(&local_308);
  FUN_140041b30(&local_2f8);
  FUN_140041b30(&local_2e8);
  FUN_140041b30(&local_378);
  FUN_140041b30(&local_2d8);
  FUN_140041b30(&local_368);
  FUN_140041b30(&local_2c8);
  FUN_140041b30(&local_2b8);
  FUN_140041b30(&local_428);
  FUN_140041b30(&local_488);
  FUN_140041b30(&local_418);
  FUN_140041b30(&local_408);
  FUN_140041b30(&local_448);
  FUN_140041b30(&local_478);
  FUN_140041b30(&local_2a8);
  FUN_140041b30(&local_4a8);
  FUN_140041b30(&local_628);
  FUN_140041b30(&local_338);
  FUN_140041b30(&local_328);
  FUN_140041b30(&local_3f8);
  FUN_140041b30(&local_3e8);
  FUN_140041b30(&local_3d8);
  FUN_140041b30(&local_3c8);
  FUN_140041b30(&local_388);
  FUN_140041b30(&local_3b8);
  FUN_140041b30(&local_298);
  FUN_140041b30(&local_288);
  FUN_140041b30(&local_4f8);
  FUN_140041b30(&local_278);
  FUN_140041b30(&local_3a8);
  FUN_140041b30(&local_538);
  FUN_140041b30(&local_468);
  FUN_140041b30(&local_498);
  FUN_140041b30(&local_4c8);
  FUN_140041b30(&local_458);
  FUN_140041b30(&local_268);
  FUN_140041b30(&local_258);
  FUN_140041b30(&local_548);
  FUN_140041b30(&local_248);
  FUN_140041b30(&local_238);
  FUN_140041b30(&local_228);
  FUN_140041b30(&local_4e8);
  FUN_140041b30(&local_528);
  FUN_140041b30(&local_4d8);
  FUN_140041b30(&local_218);
  FUN_140041b30(&local_208);
  FUN_140041b30(&local_1f8);
  FUN_140041b30(&local_398);
  FUN_140041b30(&local_518);
  FUN_140041b30(&local_1e8);
  _eh_vector_destructor_iterator_(local_618,0x10,0xc,FUN_140041b30);
  FUN_140041f30(local_198);
  FUN_140041970(&local_6c8);
  return param_3;
}

