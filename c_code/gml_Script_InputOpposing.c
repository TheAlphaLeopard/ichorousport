// gml_Script_InputOpposing @ 0x14033e5d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputOpposing
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong uVar11;
  undefined4 uVar15;
  undefined8 uVar12;
  undefined1 **ppuVar13;
  undefined8 **ppuVar14;
  ulonglong in_stack_fffffffffffffdf0;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  double local_1e8;
  uint local_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 *local_148;
  undefined4 local_13c;
  longlong local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  uint local_98 [2];
  undefined8 *local_90;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_1d0 = "gml_Script_InputOldest";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 0xb;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_98,param_4,2,param_5);
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_198,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_13c = 0xffffff;
  local_148 = (undefined1 *)0x0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  local_1b4 = 0;
  local_1c0 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde460) &&
     (_Init_thread_header(&DAT_141dde460), DAT_141dde460 == -1)) {
    DAT_141dde458 = (longlong *)FUN_140e63aa0(DAT_1419f2068);
    _Init_thread_footer(&DAT_141dde460);
  }
  local_1c8 = 0xb;
  uVar10 = (ulonglong)local_98[0];
  if ((int)local_98[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_90;
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_1c8 = 0xb;
    if ((int)local_98[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_90;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = &DAT_bff0000000000000;
  }
  if ((int)local_98[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[1];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if ((int)local_98[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_90[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if (DAT_141ddc104 == '\0') {
    FUN_140e64380(DAT_141dde458,"gml_Script_InputOldest");
    FUN_140e64380(local_res8,"gml_Script_InputOldest");
  }
  local_1c8 = 0xd;
  if (DAT_141ddc104 == '\0') {
    DAT_141ddc104 = '\x01';
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde458 + 0x10))(DAT_141dde458,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde458);
    puVar7 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_1f8,0,0);
    if (puVar7 != puVar6) {
      local_208 = (undefined1 *)*puVar7;
      uStack_200 = *(undefined4 *)(puVar7 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_208);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b4 = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde458 + 0x10))(DAT_141dde458,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde458);
    uVar11 = 0;
    puVar7 = (undefined8 *)gml_Script___InputTrace(local_res8,local_res10,&local_1c0,0,0);
    if (puVar7 != puVar6) {
      local_208 = (undefined1 *)*puVar7;
      uStack_200 = *(undefined4 *)(puVar7 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_208);
    }
    FUN_140e60910(1);
    uVar8 = (**(code **)(*DAT_141dde458 + 8))(DAT_141dde458,DAT_1419fcb48);
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde458 + 0x10))(DAT_141dde458,DAT_1419efbd8);
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_141a02e78,0x80000000,&local_b8,uVar11,
                  in_stack_fffffffffffffdf0 & 0xffffffffffffff00);
    uVar15 = (undefined4)(uVar11 >> 0x20);
    FUN_140e609c0(DAT_141dde458);
    if (&local_b8 != puVar6) {
      local_208 = (undefined1 *)local_b8;
      uStack_200 = uStack_b0;
      uStack_1fc = uStack_ac;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_208);
    }
    FUN_140e60910(1);
  }
  local_1c8 = 4;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  if ((int)local_98[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_14033eacd:
    local_208 = (undefined1 *)*puVar6;
    uStack_200 = *(undefined4 *)(puVar6 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_208);
  }
  else {
    puVar6 = (undefined8 *)local_90[1];
    if (puVar6 != &local_198) goto LAB_14033eacd;
  }
  local_e8 = &local_198;
  uVar12 = CONCAT44(uVar15,DAT_141a014a8);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1f8,1,uVar12,&local_e8);
  uVar15 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar2 = FUN_140e491e0(uVar8);
  if (cVar2 == '\0') {
    local_1c8 = 5;
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b4 = 5;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((int)local_98[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_14033ebba:
      local_208 = (undefined1 *)*puVar6;
      uStack_200 = *(undefined4 *)(puVar6 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_208);
    }
    else {
      puVar6 = (undefined8 *)local_90[1];
      if (puVar6 != &local_188) goto LAB_14033ebba;
    }
    local_e0 = &local_188;
    local_208 = (undefined1 *)CONCAT44(uRam0000000141dd08dc,_DAT_141dd08d8);
    uStack_200 = uRam0000000141dd08e0;
    uStack_1fc = DAT_141dd08e4;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_208);
    local_d8 = local_178;
    puVar6 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_128,1,CONCAT44(uVar15,DAT_1419fdc58),
                           &local_e0);
    if (puVar6 != &local_168) {
      local_208 = (undefined1 *)*puVar6;
      uStack_200 = *(undefined4 *)(puVar6 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_208);
    }
    local_d0 = &local_168;
    local_208 = (undefined1 *)CONCAT44(uRam0000000141dd08ec,_DAT_141dd08e8);
    uStack_200 = uRam0000000141dd08f0;
    uStack_1fc = DAT_141dd08f4;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_208);
    local_c8 = local_158;
    ppuVar13 = &local_d8;
    FUN_14008e020(local_res8,local_res10,&local_1c0,3,ppuVar13);
    uVar15 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
  }
  local_1c8 = 9;
  if ((int)local_98[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[1];
  }
  uStack_1fc = 0;
  local_208 = (undefined1 *)0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar6,&local_208,DAT_141955260,1);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if (uVar4 < 0x80000000) {
    local_1c8 = 0xd;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    local_208 = (undefined1 *)CONCAT44(uRam0000000141dd08cc,_DAT_141dd08c8);
    uStack_200 = uRam0000000141dd08d0;
    uStack_1fc = DAT_141dd08d4;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_208);
    local_e8 = &local_198;
    if ((int)local_98[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_14033ee00:
      local_208 = (undefined1 *)*puVar6;
      uStack_200 = *(undefined4 *)(puVar6 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_208);
    }
    else {
      puVar6 = (undefined8 *)local_90[1];
      if (puVar6 != &local_188) goto LAB_14033ee00;
    }
    local_e0 = &local_188;
    local_208 = (undefined1 *)CONCAT44(uRam0000000141dd091c,_DAT_141dd0918);
    uStack_200 = uRam0000000141dd0920;
    uStack_1fc = DAT_141dd0924;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_208);
    local_d8 = local_178;
    local_208 = (undefined1 *)CONCAT44(uRam00000001419e4194,_DAT_1419e4190);
    uStack_200 = uRam00000001419e4198;
    uStack_1fc = uRam00000001419e419c;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_208);
    local_d0 = &local_168;
    local_208 = (undefined1 *)CONCAT44(uRam0000000141dd090c,_DAT_141dd0908);
    uStack_200 = uRam0000000141dd0910;
    uStack_1fc = DAT_141dd0914;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_208);
    local_c8 = local_158;
    ppuVar14 = &local_e8;
    FUN_14008e020(local_res8,local_res10,&local_1f8,5,ppuVar14);
    uVar15 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
  }
  local_1c8 = 0x13;
  if ((int)local_98[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[1];
  }
  uStack_1fc = 0;
  local_208 = (undefined1 *)0x0;
  iVar3 = FUN_140e851f0(puVar6,&local_208,DAT_141955260,1);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if (iVar3 != -2 && iVar3 < 0) {
    local_1c8 = 0x15;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    local_208 = (undefined1 *)CONCAT44(uRam0000000141dd08cc,_DAT_141dd08c8);
    uStack_200 = uRam0000000141dd08d0;
    uStack_1fc = DAT_141dd08d4;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_208);
    local_e8 = &local_198;
    if ((int)local_98[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_14033f007:
      local_208 = (undefined1 *)*puVar6;
      uStack_200 = *(undefined4 *)(puVar6 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_208);
    }
    else {
      puVar6 = (undefined8 *)local_90[1];
      if (puVar6 != &local_188) goto LAB_14033f007;
    }
    local_e0 = &local_188;
    local_208 = (undefined1 *)CONCAT44(uRam0000000141dd08fc,_DAT_141dd08f8);
    uStack_200 = uRam0000000141dd0900;
    uStack_1fc = DAT_141dd0904;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_208);
    local_d8 = local_178;
    ppuVar14 = &local_e8;
    FUN_14008e020(local_res8,local_res10,&local_1f8,3,ppuVar14);
    uVar15 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
  }
  local_1c8 = 0x14;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  if ((int)local_98[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_90;
    if (puVar6 == &local_198) goto LAB_14033f11e;
  }
  local_208 = (undefined1 *)*puVar6;
  uStack_200 = *(undefined4 *)(puVar6 + 1);
  uStack_1fc = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_208);
LAB_14033f11e:
  local_e8 = &local_198;
  ppuVar14 = &local_e8;
  uVar11 = CONCAT44(uVar15,DAT_141a014a8);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1f8,1,uVar11,ppuVar14);
  cVar2 = FUN_140e491e0(uVar8);
  if (cVar2 != '\0') {
    if ((int)local_98[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_90;
    }
    uStack_1fc = 0;
    local_208 = &DAT_bff0000000000000;
    iVar3 = FUN_140e851f0(puVar6,&local_208,DAT_141955260,0);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if (iVar3 == 0) {
      local_1c8 = 0x16;
      puVar6 = (undefined8 *)(**(code **)(*DAT_141dde458 + 8))(DAT_141dde458,DAT_1419efbd8);
      if ((int)local_98[0] < 1) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)*local_90;
      }
      if (puVar6 != puVar7) {
        local_1a8 = *(undefined4 *)puVar6;
        uStack_1a4 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_1a0 = *(undefined4 *)(puVar6 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_1a8);
      }
    }
  }
  local_1c8 = 0x19;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde458 + 8))(DAT_141dde458,DAT_141a026b8);
  if ((int)local_98[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[1];
  }
  iVar3 = FUN_140e4a740(puVar6);
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar3 = FUN_140e63cb0(local_88,&local_res8,&local_res10,plVar9);
  if (iVar3 < 1) {
    FUN_140e63970(local_88,&local_res8,&local_res10);
  }
  else {
    local_1c8 = 0x1b;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_13c = 0;
    local_148 = &DAT_bff0000000000000;
    local_1c8 = 0x1c;
    local_1a8 = (undefined4)DAT_1419df7b0;
    uStack_1a4 = DAT_1419df7b0._4_4_;
    uStack_1a0 = DAT_1419df7b8;
    uStack_19c = DAT_1419df7bc;
    FUN_140041b80(&local_108,&local_1a8);
    local_1c8 = 0x1e;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1dc = 0;
    local_1e8 = 0.0;
    if ((int)local_98[0] < 1) {
      plVar9 = &DAT_1419df7b0;
    }
    else {
      plVar9 = (longlong *)*local_90;
    }
    iVar3 = 0;
    if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
      iVar3 = *(int *)(*plVar9 + 0x24);
    }
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      local_1c8 = 0x21;
      iVar5 = FUN_140e4a740(&local_1e8);
      if ((int)local_98[0] < 1) {
        plVar9 = &DAT_1419df7b0;
      }
      else {
        plVar9 = (longlong *)*local_90;
      }
      if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar9 != &local_118) {
        local_1a8 = (undefined4)*plVar9;
        uStack_1a4 = *(undefined4 *)((longlong)plVar9 + 4);
        uStack_1a0 = (undefined4)plVar9[1];
        uStack_19c = *(undefined4 *)((longlong)plVar9 + 0xc);
        if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_1a8);
      }
      local_1c8 = 0x23;
      plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6e8);
      iVar5 = FUN_140e4a740(&local_118);
      if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar9 != &local_138) {
        local_1a8 = (undefined4)*plVar9;
        uStack_1a4 = *(undefined4 *)((longlong)plVar9 + 4);
        uStack_1a0 = (undefined4)plVar9[1];
        uStack_19c = *(undefined4 *)((longlong)plVar9 + 0xc);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_1a8);
      }
      local_1c8 = 0x24;
      ppuVar14 = (undefined8 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_138,DAT_1419fd828,0x80000000,&local_a8,uVar11,ppuVar14);
      cVar2 = FUN_140e491e0(&local_a8);
      if (cVar2 != '\0') {
        ppuVar14 = (undefined8 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_138,DAT_1419fd758,0x80000000,&local_f8,uVar11,ppuVar14);
        iVar5 = FUN_140e851f0(&local_f8,&local_148,DAT_141955260,1);
        if ((iVar5 != -2) && (iVar5 < 0)) {
          local_1c8 = 0x26;
          ppuVar14 = (undefined8 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
          uVar11 = uVar11 & 0xffffffffffffff00;
          FUN_140e87440(&local_138,DAT_1419fd758,0x80000000,&local_f8,uVar11,ppuVar14);
          local_1a8 = (undefined4)local_f8;
          uStack_1a4 = local_f8._4_4_;
          uStack_1a0 = uStack_f0;
          uStack_19c = uStack_ec;
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          FUN_140041b80(&local_148,&local_1a8);
          local_1c8 = 0x27;
          local_1a8 = (undefined4)local_118;
          uStack_1a4 = local_118._4_4_;
          uStack_1a0 = uStack_110;
          uStack_19c = uStack_10c;
          if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_1a8);
        }
      }
      local_1c8 = 0x2a;
      uVar4 = local_1dc & 0xffffff;
      if (uVar4 == 0) {
LAB_14033f641:
        local_1e8 = local_1e8 + 1.0;
      }
      else {
        if (uVar4 == 1) {
          local_1e8 = (double)FUN_140e4b060(&local_1e8);
          local_1dc = 0;
          goto LAB_14033f641;
        }
        if (uVar4 == 7) {
          local_1e8 = (double)CONCAT44(local_1e8._4_4_,local_1e8._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_1e8 = (double)((longlong)local_1e8 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_1dc = 0;
            goto LAB_14033f641;
          }
          FUN_140042910(&DAT_14172c3d8,&local_1e8,&local_1e8);
        }
      }
    }
    local_1c8 = 0x2d;
    if (&local_108 != param_3) {
      local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
      local_1a8 = (undefined4)local_108;
      uStack_1a4 = local_108._4_4_;
      uStack_1a0 = uStack_100;
      uStack_19c = uStack_fc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_1a8);
    }
  }
  if (local_78 != 0) {
    FUN_140e4cd60();
    local_78 = 0;
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_198,0x10,5,FUN_140041b30);
  if (0 < (int)local_98[0]) {
    puVar6 = local_90;
    do {
      puVar7 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_90);
  DAT_141dc7a50 = (undefined8 *)local_1d8;
  return param_3;
}

