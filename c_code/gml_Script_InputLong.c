// gml_Script_InputLong @ 0x140330120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputLong
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
  ulonglong in_stack_fffffffffffffe00;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  double local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 *local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98 [2];
  undefined8 *local_90;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_1c0 = "gml_Script_InputLast";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 0xb;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_98,param_4,2,param_5);
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_188,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_12c = 0xffffff;
  local_138 = (undefined1 *)0x0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_1a4 = 0;
  local_1b0 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde2e4) &&
     (_Init_thread_header(&DAT_141dde2e4), DAT_141dde2e4 == -1)) {
    DAT_141dde2e8 = (longlong *)FUN_140e63aa0(DAT_1419f1858);
    _Init_thread_footer(&DAT_141dde2e4);
  }
  local_1b8 = 0xb;
  uVar10 = (ulonglong)local_98[0];
  if ((int)local_98[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_90;
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_1b8 = 0xb;
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
  if (DAT_141ddc0ee == '\0') {
    FUN_140e64380(DAT_141dde2e8,"gml_Script_InputLast");
    FUN_140e64380(local_res8,"gml_Script_InputLast");
  }
  local_1b8 = 0xd;
  if (DAT_141ddc0ee == '\0') {
    DAT_141ddc0ee = '\x01';
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde2e8 + 0x10))(DAT_141dde2e8,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde2e8);
    puVar7 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_1e8,0,0);
    if (puVar7 != puVar6) {
      local_1f8 = (undefined1 *)*puVar7;
      uStack_1f0 = *(undefined4 *)(puVar7 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1f8);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b0);
    }
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a4 = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde2e8 + 0x10))(DAT_141dde2e8,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde2e8);
    uVar11 = 0;
    puVar7 = (undefined8 *)gml_Script___InputTrace(local_res8,local_res10,&local_1b0,0,0);
    if (puVar7 != puVar6) {
      local_1f8 = (undefined1 *)*puVar7;
      uStack_1f0 = *(undefined4 *)(puVar7 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1f8);
    }
    FUN_140e60910(1);
    uVar8 = (**(code **)(*DAT_141dde2e8 + 8))(DAT_141dde2e8,DAT_1419fcb48);
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde2e8 + 0x10))(DAT_141dde2e8,DAT_1419efbd8);
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_141a02e78,0x80000000,&local_a8,uVar11,
                  in_stack_fffffffffffffe00 & 0xffffffffffffff00);
    uVar15 = (undefined4)(uVar11 >> 0x20);
    FUN_140e609c0(DAT_141dde2e8);
    if (&local_a8 != puVar6) {
      local_1f8 = (undefined1 *)local_a8;
      uStack_1f0 = uStack_a0;
      uStack_1ec = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1f8);
    }
    FUN_140e60910(1);
  }
  local_1b8 = 4;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((int)local_98[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_14033060c:
    local_1f8 = (undefined1 *)*puVar6;
    uStack_1f0 = *(undefined4 *)(puVar6 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1f8);
  }
  else {
    puVar6 = (undefined8 *)local_90[1];
    if (puVar6 != &local_188) goto LAB_14033060c;
  }
  local_d8 = &local_188;
  uVar12 = CONCAT44(uVar15,DAT_141a014a8);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1e8,1,uVar12,&local_d8);
  uVar15 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar2 = FUN_140e491e0(uVar8);
  if (cVar2 == '\0') {
    local_1b8 = 5;
    if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b0);
    }
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a4 = 5;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((int)local_98[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_1403306f9:
      local_1f8 = (undefined1 *)*puVar6;
      uStack_1f0 = *(undefined4 *)(puVar6 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1f8);
    }
    else {
      puVar6 = (undefined8 *)local_90[1];
      if (puVar6 != &local_178) goto LAB_1403306f9;
    }
    local_d0 = &local_178;
    local_1f8 = (undefined1 *)CONCAT44(uRam0000000141dd050c,_DAT_141dd0508);
    uStack_1f0 = uRam0000000141dd0510;
    uStack_1ec = DAT_141dd0514;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1f8);
    local_c8 = local_168;
    puVar6 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_128,1,CONCAT44(uVar15,DAT_1419fdc58),
                           &local_d0);
    if (puVar6 != &local_158) {
      local_1f8 = (undefined1 *)*puVar6;
      uStack_1f0 = *(undefined4 *)(puVar6 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1f8);
    }
    local_c0 = &local_158;
    local_1f8 = (undefined1 *)CONCAT44(uRam0000000141dd04fc,_DAT_141dd04f8);
    uStack_1f0 = uRam0000000141dd0500;
    uStack_1ec = DAT_141dd0504;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1f8);
    local_b8 = local_148;
    ppuVar13 = &local_c8;
    FUN_14008e020(local_res8,local_res10,&local_1b0,3,ppuVar13);
    uVar15 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
  }
  local_1b8 = 9;
  if ((int)local_98[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[1];
  }
  uStack_1ec = 0;
  local_1f8 = (undefined1 *)0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar6,&local_1f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (uVar4 < 0x80000000) {
    local_1b8 = 0xd;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_1f8 = (undefined1 *)CONCAT44(uRam0000000141dd04dc,_DAT_141dd04d8);
    uStack_1f0 = uRam0000000141dd04e0;
    uStack_1ec = DAT_141dd04e4;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1f8);
    local_d8 = &local_188;
    if ((int)local_98[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_14033093f:
      local_1f8 = (undefined1 *)*puVar6;
      uStack_1f0 = *(undefined4 *)(puVar6 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1f8);
    }
    else {
      puVar6 = (undefined8 *)local_90[1];
      if (puVar6 != &local_178) goto LAB_14033093f;
    }
    local_d0 = &local_178;
    local_1f8 = (undefined1 *)CONCAT44(uRam0000000141dd051c,_DAT_141dd0518);
    uStack_1f0 = uRam0000000141dd0520;
    uStack_1ec = DAT_141dd0524;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1f8);
    local_c8 = local_168;
    local_1f8 = (undefined1 *)CONCAT44(uRam00000001419e4084,_DAT_1419e4080);
    uStack_1f0 = uRam00000001419e4088;
    uStack_1ec = uRam00000001419e408c;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1f8);
    local_c0 = &local_158;
    local_1f8 = (undefined1 *)CONCAT44(uRam0000000141dd04cc,_DAT_141dd04c8);
    uStack_1f0 = uRam0000000141dd04d0;
    uStack_1ec = DAT_141dd04d4;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1f8);
    local_b8 = local_148;
    ppuVar14 = &local_d8;
    FUN_14008e020(local_res8,local_res10,&local_1e8,5,ppuVar14);
    uVar15 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
  }
  local_1b8 = 0x13;
  if ((int)local_98[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[1];
  }
  uStack_1ec = 0;
  local_1f8 = (undefined1 *)0x0;
  iVar3 = FUN_140e851f0(puVar6,&local_1f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (iVar3 != -2 && iVar3 < 0) {
    local_1b8 = 0x16;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_1f8 = (undefined1 *)CONCAT44(uRam0000000141dd04dc,_DAT_141dd04d8);
    uStack_1f0 = uRam0000000141dd04e0;
    uStack_1ec = DAT_141dd04e4;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1f8);
    local_d8 = &local_188;
    if ((int)local_98[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140330b46:
      local_1f8 = (undefined1 *)*puVar6;
      uStack_1f0 = *(undefined4 *)(puVar6 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1f8);
    }
    else {
      puVar6 = (undefined8 *)local_90[1];
      if (puVar6 != &local_178) goto LAB_140330b46;
    }
    local_d0 = &local_178;
    local_1f8 = (undefined1 *)CONCAT44(uRam0000000141dd04ec,_DAT_141dd04e8);
    uStack_1f0 = uRam0000000141dd04f0;
    uStack_1ec = DAT_141dd04f4;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1f8);
    local_c8 = local_168;
    ppuVar14 = &local_d8;
    FUN_14008e020(local_res8,local_res10,&local_1e8,3,ppuVar14);
    uVar15 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
  }
  local_1b8 = 0x14;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((int)local_98[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_90;
    if (puVar6 == &local_188) goto LAB_140330c5d;
  }
  local_1f8 = (undefined1 *)*puVar6;
  uStack_1f0 = *(undefined4 *)(puVar6 + 1);
  uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_1f8);
LAB_140330c5d:
  local_d8 = &local_188;
  ppuVar14 = &local_d8;
  uVar11 = CONCAT44(uVar15,DAT_141a014a8);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1e8,1,uVar11,ppuVar14);
  cVar2 = FUN_140e491e0(uVar8);
  if (cVar2 != '\0') {
    if ((int)local_98[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_90;
    }
    uStack_1ec = 0;
    local_1f8 = &DAT_bff0000000000000;
    iVar3 = FUN_140e851f0(puVar6,&local_1f8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (iVar3 == 0) {
      local_1b8 = 0x16;
      puVar6 = (undefined8 *)(**(code **)(*DAT_141dde2e8 + 8))(DAT_141dde2e8,DAT_1419efbd8);
      if ((int)local_98[0] < 1) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)*local_90;
      }
      if (puVar6 != puVar7) {
        local_198 = *(undefined4 *)puVar6;
        uStack_194 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_190 = *(undefined4 *)(puVar6 + 1);
        uStack_18c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_198);
      }
    }
  }
  local_1b8 = 0x19;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde2e8 + 8))(DAT_141dde2e8,DAT_141a026b8);
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
    local_1b8 = 0x1b;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_12c = 0;
    local_138 = &DAT_bff0000000000000;
    local_1b8 = 0x1c;
    local_198 = (undefined4)DAT_1419df7b0;
    uStack_194 = DAT_1419df7b0._4_4_;
    uStack_190 = DAT_1419df7b8;
    uStack_18c = DAT_1419df7bc;
    FUN_140041b80(&local_f8,&local_198);
    local_1b8 = 0x1e;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1cc = 0;
    local_1d8 = 0.0;
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
      local_1b8 = 0x21;
      iVar5 = FUN_140e4a740(&local_1d8);
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
      if (plVar9 != &local_108) {
        local_198 = (undefined4)*plVar9;
        uStack_194 = *(undefined4 *)((longlong)plVar9 + 4);
        uStack_190 = (undefined4)plVar9[1];
        uStack_18c = *(undefined4 *)((longlong)plVar9 + 0xc);
        if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_198);
      }
      local_1b8 = 0x23;
      plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6e8);
      iVar5 = FUN_140e4a740(&local_108);
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
      if (plVar9 != &local_118) {
        local_198 = (undefined4)*plVar9;
        uStack_194 = *(undefined4 *)((longlong)plVar9 + 4);
        uStack_190 = (undefined4)plVar9[1];
        uStack_18c = *(undefined4 *)((longlong)plVar9 + 0xc);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_198);
      }
      local_1b8 = 0x24;
      ppuVar14 = (undefined8 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_118,DAT_1419fd758,0x80000000,&local_e8,uVar11,ppuVar14);
      iVar5 = FUN_140e851f0(&local_e8,&local_138,DAT_141955260,1);
      if (0 < iVar5) {
        local_1b8 = 0x26;
        ppuVar14 = (undefined8 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_118,DAT_1419fd758,0x80000000,&local_e8,uVar11,ppuVar14);
        local_198 = (undefined4)local_e8;
        uStack_194 = local_e8._4_4_;
        uStack_190 = uStack_e0;
        uStack_18c = uStack_dc;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_198);
        local_1b8 = 0x27;
        local_198 = (undefined4)local_108;
        uStack_194 = local_108._4_4_;
        uStack_190 = uStack_100;
        uStack_18c = uStack_fc;
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_198);
      }
      local_1b8 = 0x2a;
      uVar4 = local_1cc & 0xffffff;
      if (uVar4 == 0) {
LAB_14033114d:
        local_1d8 = local_1d8 + 1.0;
      }
      else {
        if (uVar4 == 1) {
          local_1d8 = (double)FUN_140e4b060(&local_1d8);
          local_1cc = 0;
          goto LAB_14033114d;
        }
        if (uVar4 == 7) {
          local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_1d8 = (double)((longlong)local_1d8 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_1cc = 0;
            goto LAB_14033114d;
          }
          FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
        }
      }
    }
    local_1b8 = 0x2d;
    if (&local_f8 != param_3) {
      local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
      local_198 = (undefined4)local_f8;
      uStack_194 = local_f8._4_4_;
      uStack_190 = uStack_f0;
      uStack_18c = uStack_ec;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_198);
    }
  }
  if (local_78 != 0) {
    FUN_140e4cd60();
    local_78 = 0;
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,5,FUN_140041b30);
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
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return param_3;
}

