// gml_Script____struct___304_gml_Object_oBloodBlob_Create_0 @ 0x1406a2e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script____struct___304_gml_Object_oBloodBlob_Create_0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  double dVar9;
  code *pcVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong in_stack_fffffffffffffe00;
  ulonglong uVar13;
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
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined4 *local_30;
  
  local_130 = "gml_Object_objExample_Draw_64";
  local_128 = 0;
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  if (DAT_141dc7a60 == 0) {
    DAT_141dc7a60 = FUN_140e63aa0(DAT_141a57070);
  }
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_118,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_128 = 1;
  uStack_1ec = 6;
  local_1f8 = DAT_141dc7a60;
  FUN_140e87440(&local_1f8,DAT_141a583b0,0x80000000,&local_148,
                (ulonglong)pcVar10 & 0xffffffffffffff00,
                in_stack_fffffffffffffe00 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  uVar13 = 0;
  puVar7 = &local_148;
  FUN_140e63610(DAT_141dc7a60,param_2,&local_1d8,0,puVar7,0);
  bVar2 = false;
  bVar1 = true;
  local_128 = 2;
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
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02848);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02938);
  FUN_140e85f80(param_1,DAT_141a02d38,0x80000000,&local_158);
  FUN_140e85f80(param_1,DAT_141a02d58,0x80000000,&local_168);
  uStack_1dc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_1e0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_1e8,puVar4);
  }
  uStack_1ec = 0;
  local_1f8 = 0x408f400000000000;
  FUN_140046500(&local_1e8,&local_1f8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = local_1e8;
  uStack_1f0 = uStack_1e0;
  uStack_1ec = uStack_1dc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1f8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_78 = local_118;
  uStack_1ec = 6;
  local_1f8 = DAT_141dc7a60;
  uVar11 = (ulonglong)puVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_141a58830,0x80000000,&local_178,uVar11,uVar13 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar11 >> 0x20);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = CONCAT44(uRam0000000141dd5bdc,_DAT_141dd5bd8);
  uStack_1f0 = uRam0000000141dd5be0;
  uStack_1ec = DAT_141dd5be4;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1f8);
  local_70 = local_108;
  local_1f8 = local_158;
  uStack_1f0 = uStack_150;
  uStack_1ec = uStack_14c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1f8);
  local_68 = local_f8;
  local_1f8 = local_168;
  uStack_1f0 = uStack_160;
  uStack_1ec = uStack_15c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1f8);
  local_60 = local_e8;
  uStack_1dc = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_1e0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_1e8,puVar3);
  }
  uStack_1ec = 0;
  local_1f8 = 0x412e848000000000;
  FUN_140046500(&local_1e8,&local_1f8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = local_1e8;
  uStack_1f0 = uStack_1e0;
  uStack_1ec = uStack_1dc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1f8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_58 = local_d8;
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar8 = (undefined4)*puVar4;
  }
  else {
    uVar8 = FUN_140e4b060(puVar4);
  }
  dVar9 = (double)FUN_140e79500(uVar8);
  if (dVar9 <= 0.5) {
    local_17c = DAT_141dd5bd4;
    local_180 = DAT_141dd5bd0;
    if ((1 << ((byte)DAT_141dd5bd4 & 0x1f) & 0x46U) == 0) {
      local_188 = DAT_141dd5bc8;
    }
    else {
      FUN_1400419b0(&local_188,&DAT_141dd5bc8);
    }
    puVar7 = &local_188;
  }
  else {
    uStack_1ec = DAT_141dd5bf4;
    uStack_1f0 = DAT_141dd5bf0;
    if ((1 << ((byte)DAT_141dd5bf4 & 0x1f) & 0x46U) == 0) {
      local_1f8 = DAT_141dd5be8;
    }
    else {
      FUN_1400419b0(&local_1f8,&DAT_141dd5be8);
    }
    puVar7 = &local_1f8;
    bVar2 = true;
    bVar1 = false;
  }
  uVar5 = FUN_140e634e0(param_1,param_2,&local_1b8,1,CONCAT44(uVar12,DAT_1419fcb18),&local_78);
  uStack_1dc = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_1e0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_1e8 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_1e8,puVar7);
  }
  FUN_1400460e0(&local_1e8,uVar5);
  local_198 = (undefined4)local_1e8;
  uStack_194 = local_1e8._4_4_;
  uStack_190 = uStack_1e0;
  uStack_18c = uStack_1dc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_198);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (bVar1) {
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
  }
  if ((bVar2) && ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1f8);
  }
  local_50 = local_c8;
  puVar7 = &local_178;
  puVar6 = (undefined4 *)FUN_140e63610(DAT_141dc7a60,param_2,&local_1c8,0,puVar7,0);
  uVar12 = (undefined4)((ulonglong)puVar7 >> 0x20);
  if (puVar6 != local_b8) {
    local_198 = *puVar6;
    uStack_194 = puVar6[1];
    uStack_190 = puVar6[2];
    uStack_18c = puVar6[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_198);
  }
  local_48 = local_b8;
  local_198 = _DAT_1419e75d0;
  uStack_194 = uRam00000001419e75d4;
  uStack_190 = uRam00000001419e75d8;
  uStack_18c = uRam00000001419e75dc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_198);
  local_40 = local_a8;
  local_198 = _DAT_1419e75e0;
  uStack_194 = uRam00000001419e75e4;
  uStack_190 = uRam00000001419e75e8;
  uStack_18c = uRam00000001419e75ec;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_198);
  local_38 = local_98;
  uVar5 = CONCAT44(uVar12,DAT_1419fcb18);
  puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1a8,6,uVar5,&local_70);
  uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar6 != local_88) {
    local_198 = *puVar6;
    uStack_194 = puVar6[1];
    uStack_190 = puVar6[2];
    uStack_18c = puVar6[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_198);
  }
  local_30 = local_88;
  FUN_140e634e0(param_1,param_2,&local_1d8,3,CONCAT44(uVar12,DAT_141a04598),&local_40);
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
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
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return;
}

