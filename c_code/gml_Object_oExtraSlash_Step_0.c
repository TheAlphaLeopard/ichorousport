// gml_Object_oExtraSlash_Step_0 @ 0x140ac9b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oExtraSlash_Step_0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar9;
  ulonglong uVar6;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40 [3];
  
  local_140 = "gml_Object_oExitButton_Step_0";
  local_138 = 0;
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_108,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_138 = 3;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_158);
  local_1e8 = local_158;
  uStack_1e0 = uStack_150;
  uStack_1dc = uStack_14c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1e8);
  local_78 = local_108;
  local_1e8 = local_158;
  uStack_1e0 = uStack_150;
  uStack_1dc = uStack_14c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1e8);
  local_70 = local_f8;
  uVar4 = CONCAT44(uVar9,DAT_141a00c98);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b8,1,uVar4,&local_70);
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_18c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_190 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
    local_198 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_198,puVar3);
  }
  local_17c = 0;
  local_188 = 0x4000000000000000;
  FUN_140046500(&local_198,&local_188);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uVar4 = CONCAT44(uVar9,DAT_141a00e38);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar4,&local_78);
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_1bc = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_1c0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
    local_1c8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_1c8,puVar3);
  }
  FUN_1400460e0(&local_1c8,&local_198);
  local_1e8 = local_1c8;
  uStack_1e0 = uStack_1c0;
  uStack_1dc = uStack_1bc;
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  FUN_140041b80(&local_120,&local_1e8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_120);
  local_138 = 4;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_158);
  local_1e8 = local_158;
  uStack_1e0 = uStack_150;
  uStack_1dc = uStack_14c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1e8);
  local_78 = local_108;
  local_1e8 = local_158;
  uStack_1e0 = uStack_150;
  uStack_1dc = uStack_14c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1e8);
  local_70 = local_f8;
  uVar4 = CONCAT44(uVar9,DAT_141a00d58);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b8,1,uVar4,&local_70);
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_17c = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_180 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_188,puVar3);
  }
  uStack_1dc = 0;
  local_1e8 = 0x4000000000000000;
  FUN_140046500(&local_188,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  ppuVar7 = &local_78;
  uVar6 = CONCAT44(uVar9,DAT_141a00dd8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar6,ppuVar7);
  uStack_1bc = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_1c0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
    local_1c8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_1c8,puVar3);
  }
  FUN_1400460e0(&local_1c8,&local_188);
  uStack_18c = uStack_1bc;
  uStack_190 = uStack_1c0;
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
    local_198 = local_1c8;
  }
  else {
    FUN_1400419b0(&local_198,&local_1c8);
  }
  uStack_1dc = 7;
  local_1e8 = CONCAT44(local_1e8._4_4_,0x20);
  FUN_1400460e0(&local_198,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = local_198;
  uStack_1e0 = uStack_190;
  uStack_1dc = uStack_18c;
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  FUN_140041b80(&local_130,&local_1e8);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_130);
  local_138 = 7;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_1e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1e0 = DAT_1419df7b8;
  uStack_1dc = DAT_1419df7bc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1e8);
  local_78 = local_108;
  local_1e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1e0 = DAT_1419df7b8;
  uStack_1dc = DAT_1419df7bc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1e8);
  local_70 = local_f8;
  local_1e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1e0 = DAT_1419df7b8;
  uStack_1dc = DAT_1419df7bc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1e8);
  local_68 = local_e8;
  local_1e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1e0 = DAT_1419df7b8;
  uStack_1dc = DAT_1419df7bc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1e8);
  local_60 = local_d8;
  uStack_1dc = 6;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_141a0a828,0x80000000,&local_88,uVar6 & 0xffffffffffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  puVar3 = (undefined8 *)gml_Script_InputCursorY(param_1,param_2,&local_1b8,2,&local_78);
  if (puVar3 != &local_c8) {
    local_1e8 = *puVar3;
    uStack_1e0 = *(undefined4 *)(puVar3 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1e8);
  }
  local_58 = &local_c8;
  ppuVar7 = &local_68;
  puVar3 = (undefined8 *)gml_Script_InputDefineCluster(param_1,param_2,&local_168,2,ppuVar7);
  uVar9 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
  if (puVar3 != &local_b8) {
    local_1e8 = *puVar3;
    uStack_1e0 = *(undefined4 *)(puVar3 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_1e8);
  }
  local_50 = &local_b8;
  local_1e8 = local_88;
  uStack_1e0 = uStack_80;
  uStack_1dc = uStack_7c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_1e8);
  local_48 = local_a8;
  uVar8 = CONCAT44(uVar9,DAT_141a10408);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_1a8,3,uVar8,&local_58);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_138 = 0x18;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uVar5 = 0;
  }
  else {
    local_138 = 9;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_1e8 = CONCAT44(uRam00000001419eb414,_DAT_1419eb410);
    uStack_1e0 = uRam00000001419eb418;
    uStack_1dc = uRam00000001419eb41c;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_1e8);
    local_40[0] = local_98;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_178,1,CONCAT44(uVar9,DAT_141a44e08),local_40);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_138 = 0xb;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1cc = 0;
      local_1d8 = 0x4000000000000000;
      FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_1d8);
      local_138 = 0xc;
      FUN_140edce70(0,0);
      local_138 = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *puVar2 = 0x3ff0000000000000;
      goto LAB_140aca5f5;
    }
    local_138 = 0x11;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uVar5 = 0x3ff00000;
  }
  local_1cc = 0;
  local_1d8 = (ulonglong)uVar5 << 0x20;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_1d8);
LAB_140aca5f5:
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return;
}

