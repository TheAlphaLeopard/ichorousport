// gml_Script_anon_7875____struct___825_gml_Object_oUIManager_Create_0 @ 0x140e05930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_7875____struct___825_gml_Object_oUIManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 **ppuVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [12];
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined4 local_f8 [3];
  byte local_ec;
  undefined4 local_e8 [3];
  byte local_dc;
  undefined4 local_d8 [3];
  byte local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined4 *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined4 local_a0;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  
  local_a8 = "gml_Script_anon@6920@___struct___825@gml_Object_oUIManager_Create_0";
  local_b0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b0;
  local_a0 = 0x191;
  _eh_vector_constructor_iterator_(local_158,0x10,10,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a03288);
  local_15c = 0;
  local_168 = 0;
  local_16c = 0;
  local_178 = 0;
  local_17c = 0;
  local_188 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a0 = 0x192;
  local_b8 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a8e8);
  local_19c = DAT_141ddbdf4;
  local_1a0 = DAT_141ddbdf0;
  if ((1 << ((byte)DAT_141ddbdf4 & 0x1f) & 0x46U) == 0) {
    local_1a8 = DAT_141ddbde8;
  }
  else {
    FUN_1400419b0(&local_1a8,&DAT_141ddbde8);
  }
  uStack_1dc = DAT_141ddbde4;
  uStack_1e0 = DAT_141ddbde0;
  if ((1 << ((byte)DAT_141ddbde4 & 0x1f) & 0x46U) == 0) {
    local_1e8 = DAT_141ddbdd8;
  }
  else {
    FUN_1400419b0(&local_1e8,&DAT_141ddbdd8);
  }
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  uVar4 = 1 << ((byte)uStack_1dc & 0x1f) & 0x46;
  local_1d0 = uStack_1e0;
  local_1cc = uStack_1dc;
  if (uVar4 == 0) {
    local_1d8 = local_1e8;
  }
  else {
    FUN_1400419b0(&local_1d8,&local_1e8);
  }
  FUN_1400460e0(&local_1d8,puVar2);
  uStack_1ac = local_1cc;
  uStack_1b0 = local_1d0;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
    local_1b8 = local_1d8;
  }
  else {
    FUN_1400419b0(&local_1b8,&local_1d8);
  }
  FUN_1400460e0(&local_1b8,&local_1a8);
  local_1c8 = (undefined4)local_1b8;
  uStack_1c4 = local_1b8._4_4_;
  uStack_1c0 = uStack_1b0;
  uStack_1bc = uStack_1ac;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1c8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (uVar4 != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_90 = local_148;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 == &local_138) goto LAB_140e05c47;
  }
  local_1c8 = *(undefined4 *)puVar2;
  uStack_1c4 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_1c0 = *(undefined4 *)(puVar2 + 1);
  uStack_1bc = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1c8);
LAB_140e05c47:
  local_88 = &local_138;
  local_19c = DAT_141ddbdb4;
  local_1a0 = DAT_141ddbdb0;
  if ((1 << ((byte)DAT_141ddbdb4 & 0x1f) & 0x46U) == 0) {
    local_1a8 = DAT_141ddbda8;
  }
  else {
    FUN_1400419b0(&local_1a8,&DAT_141ddbda8);
  }
  uStack_1dc = DAT_141ddbde4;
  uStack_1e0 = DAT_141ddbde0;
  if ((1 << ((byte)DAT_141ddbde4 & 0x1f) & 0x46U) == 0) {
    local_1e8 = DAT_141ddbdd8;
  }
  else {
    FUN_1400419b0(&local_1e8,&DAT_141ddbdd8);
  }
  if (0 < param_4) {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar4 = 1 << ((byte)uStack_1dc & 0x1f) & 0x46;
  local_1d0 = uStack_1e0;
  local_1cc = uStack_1dc;
  if (uVar4 == 0) {
    local_1d8 = local_1e8;
  }
  else {
    FUN_1400419b0(&local_1d8,&local_1e8);
  }
  FUN_1400460e0(&local_1d8,puVar5);
  uStack_1ac = local_1cc;
  uStack_1b0 = local_1d0;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
    local_1b8 = local_1d8;
  }
  else {
    FUN_1400419b0(&local_1b8,&local_1d8);
  }
  FUN_1400460e0(&local_1b8,&local_1a8);
  local_1c8 = (undefined4)local_1b8;
  uStack_1c4 = local_1b8._4_4_;
  uStack_1c0 = uStack_1b0;
  uStack_1bc = uStack_1ac;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1c8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (uVar4 != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_80 = local_128;
  local_1c8 = _DAT_141ddbe18;
  uStack_1c4 = uRam0000000141ddbe1c;
  uStack_1c0 = uRam0000000141ddbe20;
  uStack_1bc = DAT_141ddbe24;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1c8);
  local_78 = local_118;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_1e8,gml_Script_anon_7113____struct___825_gml_Object_oUIManager_Create_0,0);
  if (&local_1e8 != puVar1) {
    local_1c8 = (undefined4)local_1e8;
    uStack_1c4 = local_1e8._4_4_;
    uStack_1c0 = uStack_1e0;
    uStack_1bc = uStack_1dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_1c8);
  }
  FUN_140e60910(1);
  if (puVar1 != &local_108) {
    local_1c8 = *(undefined4 *)puVar1;
    uStack_1c4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_1c0 = *(undefined4 *)(puVar1 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1c8);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_70 = &local_108;
  puVar3 = (undefined4 *)gml_Script_worldwide_get_dialogue(param_1,param_2,&local_188,2,&local_90);
  if (puVar3 != local_f8) {
    local_1c8 = *puVar3;
    uStack_1c4 = puVar3[1];
    uStack_1c0 = puVar3[2];
    uStack_1bc = puVar3[3];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1c8);
  }
  local_68 = local_f8;
  ppuVar6 = &local_80;
  puVar3 = (undefined4 *)gml_Script_worldwide_get_dialogue(param_1,param_2,&local_198,2,ppuVar6);
  uVar8 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
  if (puVar3 != local_e8) {
    local_1c8 = *puVar3;
    uStack_1c4 = puVar3[1];
    uStack_1c0 = puVar3[2];
    uStack_1bc = puVar3[3];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1c8);
  }
  local_60 = local_e8;
  if (local_b8 != local_d8) {
    local_1c8 = *local_b8;
    uStack_1c4 = local_b8[1];
    uStack_1c0 = local_b8[2];
    uStack_1bc = local_b8[3];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1c8);
  }
  local_58 = local_d8;
  uVar7 = CONCAT44(uVar8,DAT_1419fd6d8);
  puVar3 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_178,3,uVar7,&local_70);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar3 != local_c8) {
    local_1c8 = *puVar3;
    uStack_1c4 = puVar3[1];
    uStack_1c0 = puVar3[2];
    uStack_1bc = puVar3[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1c8);
  }
  local_50 = local_c8;
  FUN_140e634e0(param_1,param_2,&local_168,2,CONCAT44(uVar8,DAT_1419fe568),&local_58);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(local_158,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b0;
  return param_3;
}

