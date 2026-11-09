// gml_Script____struct___97_WindowSetMode_GameViewRect @ 0x14028c690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___97_WindowSetMode_GameViewRect
          (ulonglong param_1,ulonglong param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffe00;
  ulonglong uVar9;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  uint local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined4 *local_78;
  uint local_70 [2];
  undefined8 *local_68;
  
  local_110 = "gml_Script_WindowSetScaled";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x3f;
  FUN_140041df0(local_70,param_4,1,param_5);
  _eh_vector_constructor_iterator_(local_f8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_15c = 0;
  local_168 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x41;
  uVar7 = 0;
  puVar1 = (undefined8 *)gml_Script_WindowGetMode(param_1,param_2,&local_1c8,0,0);
  if (puVar1 != &local_198) {
    local_1d8 = *(undefined4 *)puVar1;
    uStack_1d4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_1d0 = *(undefined4 *)(puVar1 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1d8);
  }
  local_108 = 0x42;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  in_stack_fffffffffffffe00 = in_stack_fffffffffffffe00 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_141a00fd8,0x80000000,&local_1a8,uVar7,in_stack_fffffffffffffe00);
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_141a01058,0x80000000,&local_1b8,uVar7,
                in_stack_fffffffffffffe00 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar7 >> 0x20);
  uStack_1dc = local_19c;
  uStack_1e0 = local_1a0;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_1a8;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_1a8);
  }
  uStack_1ec = 0;
  local_1f8 = 0x407e000000000000;
  FUN_140046500(&local_1e8,&local_1f8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1d8 = (undefined4)local_1e8;
  uStack_1d4 = local_1e8._4_4_;
  uStack_1d0 = uStack_1e0;
  uStack_1cc = uStack_1dc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1d8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_98 = local_f8;
  uStack_1dc = local_1ac;
  uStack_1e0 = local_1b0;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_1b8;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_1b8);
  }
  uStack_1ec = 0;
  local_1f8 = 0x4070e00000000000;
  FUN_140046500(&local_1e8,&local_1f8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1d8 = (undefined4)local_1e8;
  uStack_1d4 = local_1e8._4_4_;
  uStack_1d0 = uStack_1e0;
  uStack_1cc = uStack_1dc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1d8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_90 = local_e8;
  puVar1 = (undefined8 *)FUN_140e79230(&local_178,2,&local_98);
  if (puVar1 != &local_d8) {
    local_1d8 = *(undefined4 *)puVar1;
    uStack_1d4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_1d0 = *(undefined4 *)(puVar1 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1d8);
  }
  local_88 = &local_d8;
  local_1d8 = _DAT_1419e3a00;
  uStack_1d4 = uRam00000001419e3a04;
  uStack_1d0 = uRam00000001419e3a08;
  uStack_1cc = uRam00000001419e3a0c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_1d8);
  local_80 = &local_c8;
  puVar2 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_168,1,CONCAT44(uVar5,DAT_1419fe728),&local_88);
  if (puVar2 != local_b8) {
    local_1d8 = *puVar2;
    uStack_1d4 = puVar2[1];
    uStack_1d0 = puVar2[2];
    uStack_1cc = puVar2[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1d8);
  }
  local_78 = local_b8;
  puVar1 = (undefined8 *)FUN_140e79090(&local_1c8,2,&local_80);
  if (puVar1 != &local_188) {
    local_1d8 = *(undefined4 *)puVar1;
    uStack_1d4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_1d0 = *(undefined4 *)(puVar1 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1d8);
  }
  local_108 = 0x44;
  if ((local_17c & 0xffffff) == 0) {
    uVar5 = (undefined4)local_188;
  }
  else {
    uVar5 = FUN_140e4b060(&local_188);
  }
  puVar1 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_70[0];
  if ((int)local_70[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_68;
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar6 = (undefined4)*puVar4;
  }
  else {
    uVar6 = FUN_140e4b060();
  }
  if ((int)local_70[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_68;
  }
  uVar3 = FUN_140e78ec0(uVar6,0x3ff0000000000000,uVar5);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = uVar3;
  local_108 = 0x45;
  if ((int)local_70[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_68;
  }
  uStack_1ec = 0;
  local_1f8 = 0x407e000000000000;
  FUN_140042560(&local_1f8,puVar4);
  local_1d8 = (undefined4)local_1f8;
  uStack_1d4 = local_1f8._4_4_;
  uStack_1d0 = uStack_1f0;
  uStack_1cc = uStack_1ec;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_1d8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_108 = 0x46;
  if ((int)local_70[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_68;
  }
  uStack_1ec = 0;
  local_1f8 = 0x4070e00000000000;
  FUN_140042560(&local_1f8,puVar4);
  local_1d8 = (undefined4)local_1f8;
  uStack_1d4 = local_1f8._4_4_;
  uStack_1d0 = uStack_1f0;
  uStack_1cc = uStack_1ec;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1d8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_108 = 0x47;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uVar8 = param_1;
  uVar9 = param_2;
  FUN_140e87170(&local_198,DAT_1419fe0e8,0x80000000,&local_148,param_1,param_2);
  FUN_140e87440(&local_198,DAT_141a00fd8,0x80000000,&local_1a8,uVar8 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  uVar8 = param_1;
  uVar9 = param_2;
  FUN_140e87170(&local_198,DAT_1419fe158,0x80000000,&local_158,param_1,param_2);
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_141a01058,0x80000000,&local_1b8,uVar8,uVar9 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar8 >> 0x20);
  uStack_1ec = local_19c;
  uStack_1f0 = local_1a0;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
    local_1f8 = local_1a8;
  }
  else {
    FUN_1400419b0(&local_1f8,&local_1a8);
  }
  FUN_1400462a0(&local_1f8,&local_128);
  uVar3 = FUN_14018a720(&local_1d8,&local_1f8,2);
  uStack_1dc = local_13c;
  uStack_1e0 = local_140;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_148;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_148);
  }
  FUN_1400460e0(&local_1e8,uVar3);
  local_a8 = (undefined4)local_1e8;
  uStack_a4 = local_1e8._4_4_;
  uStack_a0 = uStack_1e0;
  uStack_9c = uStack_1dc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_a8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_98 = local_f8;
  uStack_1dc = local_1ac;
  uStack_1e0 = local_1b0;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_1b8;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_1b8);
  }
  FUN_1400462a0(&local_1e8,&local_138);
  uVar3 = FUN_14018a720(&local_1d8,&local_1e8,2);
  uStack_1ec = local_14c;
  uStack_1f0 = local_150;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_1f8 = local_158;
  }
  else {
    FUN_1400419b0(&local_1f8,&local_158);
  }
  FUN_1400460e0(&local_1f8,uVar3);
  local_a8 = (undefined4)local_1f8;
  uStack_a4 = local_1f8._4_4_;
  uStack_a0 = uStack_1f0;
  uStack_9c = uStack_1ec;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_a8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_90 = local_e8;
  local_80 = &local_138;
  local_88 = &local_128;
  FUN_140e634e0(param_1,param_2,&local_1c8,4,CONCAT44(uVar5,DAT_141a57e90),&local_98);
  local_108 = 0x48;
  if (0 < (int)local_70[0]) {
    puVar1 = (undefined8 *)*local_68;
  }
  if (puVar1 != param_3) {
    local_a8 = *(undefined4 *)puVar1;
    uStack_a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_a0 = *(undefined4 *)(puVar1 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_a8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,5,FUN_140041b30);
  if (0 < (int)local_70[0]) {
    puVar1 = local_68;
    do {
      puVar4 = (undefined8 *)*puVar1;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar1 = puVar1 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_68);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

