// gml_Object_oDevTools_Create_0 @ 0x1408f9110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oDevTools_Create_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar6;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 **ppuVar7;
  ulonglong uVar8;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
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
  undefined4 uStack_190;
  undefined4 uStack_18c;
  ulonglong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_150 = "gml_Object_oDescriptionBubble_Draw_73";
  local_148 = 0;
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_118,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_148 = 2;
  FUN_140e9c1f0(0x3f800000);
  local_148 = 4;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419eedf8);
  uStack_1dc = 0;
  local_1e8 = 0x4010000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_1e8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (0 < iVar1) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419eee28);
    uStack_1dc = 0;
    local_1e8 = 0x4010000000000000;
    iVar1 = FUN_140e851f0(uVar2,&local_1e8,DAT_141955260,1);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    if (0 < iVar1) {
      local_148 = 6;
      FUN_140e9c240(0x1100a8);
      local_148 = 7;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419eed38);
      FUN_140e85f80(param_1,DAT_141a00d08,0,&local_188);
      local_1f8 = (longlong *)local_188;
      uStack_1f0 = uStack_180;
      uStack_1ec = uStack_17c;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_1f8);
      local_88 = local_118;
      local_1f8 = (longlong *)local_188;
      uStack_1f0 = uStack_180;
      uStack_1ec = uStack_17c;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_1f8);
      local_80 = local_108;
      local_1ac = *(undefined4 *)((longlong)puVar3 + 0xc);
      local_1b0 = *(undefined4 *)(puVar3 + 1);
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
        local_1b8 = *puVar3;
      }
      else {
        FUN_1400419b0(&local_1b8,puVar3);
      }
      uStack_1ec = 7;
      local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,0x40);
      FUN_1400462a0(&local_1b8,&local_1f8);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1bc = local_1ac;
      local_1c0 = local_1b0;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
        local_1c8 = local_1b8;
      }
      else {
        FUN_1400419b0(&local_1c8,&local_1b8);
      }
      uStack_1ec = 0;
      local_1f8 = (longlong *)0x4076000000000000;
      FUN_140046500(&local_1c8,&local_1f8);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      uVar4 = CONCAT44(uVar6,DAT_141a00c98);
      uVar2 = FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar4,&local_80);
      uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_1dc = local_1bc;
      uStack_1e0 = local_1c0;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
        local_1e8 = local_1c8;
      }
      else {
        FUN_1400419b0(&local_1e8,&local_1c8);
      }
      FUN_140042560(&local_1e8,uVar2);
      uVar2 = CONCAT44(uVar6,DAT_141a00e38);
      puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar2,&local_88);
      uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_18c = *(undefined4 *)((longlong)puVar3 + 0xc);
      uStack_190 = *(undefined4 *)(puVar3 + 1);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
        local_198 = *puVar3;
      }
      else {
        FUN_1400419b0(&local_198,puVar3);
      }
      FUN_1400460e0(&local_198,&local_1e8);
      local_1f8 = (longlong *)local_198;
      uStack_1f0 = uStack_190;
      uStack_1ec = uStack_18c;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1f8);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_148 = 8;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419eed78);
      FUN_140e85f80(param_1,DAT_141a00d08,0,&local_188);
      local_1f8 = (longlong *)local_188;
      uStack_1f0 = uStack_180;
      uStack_1ec = uStack_17c;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_1f8);
      local_88 = local_118;
      local_1f8 = (longlong *)local_188;
      uStack_1f0 = uStack_180;
      uStack_1ec = uStack_17c;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_1f8);
      local_80 = local_108;
      local_1bc = *(undefined4 *)((longlong)puVar3 + 0xc);
      local_1c0 = *(undefined4 *)(puVar3 + 1);
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
        local_1c8 = *puVar3;
      }
      else {
        FUN_1400419b0(&local_1c8,puVar3);
      }
      uStack_1ec = 7;
      local_1f8 = (longlong *)((ulonglong)local_1f8 & 0xffffffff00000000);
      FUN_1400462a0(&local_1c8,&local_1f8);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1ac = local_1bc;
      local_1b0 = local_1c0;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
        local_1b8 = local_1c8;
      }
      else {
        FUN_1400419b0(&local_1b8,&local_1c8);
      }
      uStack_1ec = 0;
      local_1f8 = (longlong *)0x4070e00000000000;
      FUN_140046500(&local_1b8,&local_1f8);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      uVar4 = CONCAT44(uVar6,DAT_141a00d58);
      uVar2 = FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar4,&local_80);
      uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_18c = local_1ac;
      uStack_190 = local_1b0;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
        local_198 = local_1b8;
      }
      else {
        FUN_1400419b0(&local_198,&local_1b8);
      }
      FUN_140042560(&local_198,uVar2);
      ppuVar7 = &local_88;
      uVar5 = CONCAT44(uVar6,DAT_141a00dd8);
      puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar5,ppuVar7);
      uStack_1dc = *(undefined4 *)((longlong)puVar3 + 0xc);
      uStack_1e0 = *(undefined4 *)(puVar3 + 1);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
        local_1e8 = *puVar3;
      }
      else {
        FUN_1400419b0(&local_1e8,puVar3);
      }
      FUN_1400460e0(&local_1e8,&local_198);
      local_1f8 = (longlong *)local_1e8;
      uStack_1f0 = uStack_1e0;
      uStack_1ec = uStack_1dc;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1f8);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_148 = 9;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      uStack_1ec = 6;
      uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
      uVar5 = uVar5 & 0xffffffffffffff00;
      local_1f8 = param_1;
      FUN_140e87440(&local_1f8,DAT_1419fe0e8,0x80000000,&local_128,uVar5,uVar8);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      uStack_1ec = 6;
      local_1f8 = param_1;
      FUN_140e87440(&local_1f8,DAT_1419fe158,0x80000000,&local_138,uVar5 & 0xffffffffffffff00,
                    uVar8 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = (longlong *)local_128;
      uStack_1f0 = uStack_120;
      uStack_1ec = uStack_11c;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_1f8);
      local_88 = local_118;
      local_1f8 = (longlong *)local_138;
      uStack_1f0 = uStack_130;
      uStack_1ec = uStack_12c;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_1f8);
      local_80 = local_108;
      local_78 = &local_168;
      local_70 = &local_178;
      local_1f8 = (longlong *)CONCAT44(uRam00000001419e9f14,_DAT_1419e9f10);
      uStack_1f0 = uRam00000001419e9f18;
      uStack_1ec = uRam00000001419e9f1c;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_1f8);
      local_68 = local_d8;
      local_1f8 = (longlong *)CONCAT44(uRam00000001419e9f04,_DAT_1419e9f00);
      uStack_1f0 = uRam00000001419e9f08;
      uStack_1ec = uRam00000001419e9f0c;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_1f8);
      local_60 = local_c8;
      local_1f8 = (longlong *)CONCAT44(uRam00000001419e9ef4,_DAT_1419e9ef0);
      uStack_1f0 = uRam00000001419e9ef8;
      uStack_1ec = uRam00000001419e9efc;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_1f8);
      local_58 = local_b8;
      local_1f8 = (longlong *)CONCAT44(uRam00000001419e9f24,_DAT_1419e9f20);
      uStack_1f0 = uRam00000001419e9f28;
      uStack_1ec = uRam00000001419e9f2c;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_1f8);
      local_50 = local_a8;
      local_1f8 = (longlong *)CONCAT44(uRam00000001419e9f34,_DAT_1419e9f30);
      uStack_1f0 = uRam00000001419e9f38;
      uStack_1ec = uRam00000001419e9f3c;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_1f8);
      local_48 = local_98;
      gml_Script_find_target(param_1,param_2,&local_1d8,9,&local_88);
      local_148 = 0x12;
      FUN_140e9c240(0xffffff);
    }
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return;
}

