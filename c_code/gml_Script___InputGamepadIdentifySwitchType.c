// gml_Script___InputGamepadIdentifySwitchType @ 0x140091c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputGamepadIdentifySwitchType
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  byte local_19c;
  undefined8 local_198;
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
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
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_c0 = "gml_Script___InputGamepadIdentifyDescriptionType";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 5;
  FUN_140041df0(local_38,param_4,1,param_5);
  _eh_vector_constructor_iterator_(&local_1a8,0x10,0xe,FUN_1400424d0,FUN_140041b30);
  local_1ac = 0;
  local_1b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 7;
  uVar5 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140091d1d:
    local_1c8 = *(undefined4 *)puVar4;
    uStack_1c4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1c0 = *(undefined4 *)(puVar4 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1c8);
  }
  else {
    puVar4 = (undefined8 *)*local_30;
    if (puVar4 != &local_198) goto LAB_140091d1d;
  }
  local_a0 = &local_198;
  if ((int)local_38[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_30;
  }
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b8,1,DAT_141a01298,&local_a0);
  if (puVar2 != puVar4) {
    local_1c8 = *(undefined4 *)puVar2;
    uStack_1c4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_1c0 = *(undefined4 *)(puVar2 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1c8);
  }
  local_b8 = 9;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((int)local_38[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140091e1c:
    local_1c8 = *(undefined4 *)puVar4;
    uStack_1c4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1c0 = *(undefined4 *)(puVar4 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1c8);
  }
  else {
    puVar4 = (undefined8 *)*local_30;
    if (puVar4 != &local_1a8) goto LAB_140091e1c;
  }
  local_a8 = &local_1a8;
  local_1c8 = _DAT_141dc9f18;
  uStack_1c4 = uRam0000000141dc9f1c;
  uStack_1c0 = uRam0000000141dc9f20;
  uStack_1bc = DAT_141dc9f24;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_1c8);
  local_a0 = &local_198;
  local_1c8 = _DAT_141dc9ef8;
  uStack_1c4 = uRam0000000141dc9efc;
  uStack_1c0 = uRam0000000141dc9f00;
  uStack_1bc = DAT_141dc9f04;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_1c8);
  local_98 = local_188;
  uVar3 = gml_Script___InputStringMatches(param_1,param_2,&local_1b8,3,&local_a8);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_b8 = 0xb;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0x4018000000000000;
    goto LAB_140092cae;
  }
  local_b8 = 0xd;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((int)local_38[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140091f7f:
    local_1c8 = *(undefined4 *)puVar4;
    uStack_1c4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1c0 = *(undefined4 *)(puVar4 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1c8);
  }
  else {
    puVar4 = (undefined8 *)*local_30;
    if (puVar4 != &local_1a8) goto LAB_140091f7f;
  }
  local_a8 = &local_1a8;
  local_1c8 = _DAT_141dc9e98;
  uStack_1c4 = uRam0000000141dc9e9c;
  uStack_1c0 = uRam0000000141dc9ea0;
  uStack_1bc = DAT_141dc9ea4;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_1c8);
  local_a0 = &local_198;
  local_1c8 = _DAT_141dc9d38;
  uStack_1c4 = uRam0000000141dc9d3c;
  uStack_1c0 = uRam0000000141dc9d40;
  uStack_1bc = DAT_141dc9d44;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_1c8);
  local_98 = local_188;
  uVar3 = gml_Script___InputStringMatches(param_1,param_2,&local_1b8,3,&local_a8);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_b8 = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0x401c000000000000;
    goto LAB_140092cae;
  }
  local_b8 = 0x11;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((int)local_38[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_1400920e2:
    local_1c8 = *(undefined4 *)puVar4;
    uStack_1c4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1c0 = *(undefined4 *)(puVar4 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1c8);
  }
  else {
    puVar4 = (undefined8 *)*local_30;
    if (puVar4 != &local_1a8) goto LAB_1400920e2;
  }
  local_a8 = &local_1a8;
  local_1c8 = _DAT_141dc9d08;
  uStack_1c4 = uRam0000000141dc9d0c;
  uStack_1c0 = uRam0000000141dc9d10;
  uStack_1bc = DAT_141dc9d14;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_1c8);
  local_a0 = &local_198;
  local_1c8 = _DAT_141dc9e48;
  uStack_1c4 = uRam0000000141dc9e4c;
  uStack_1c0 = uRam0000000141dc9e50;
  uStack_1bc = DAT_141dc9e54;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_1c8);
  local_98 = local_188;
  local_1c8 = _DAT_141dc9f48;
  uStack_1c4 = uRam0000000141dc9f4c;
  uStack_1c0 = uRam0000000141dc9f50;
  uStack_1bc = DAT_141dc9f54;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1c8);
  local_90 = local_178;
  uVar3 = gml_Script___InputStringMatches(param_1,param_2,&local_1b8,4,&local_a8);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_b8 = 0x13;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0x4010000000000000;
    goto LAB_140092cae;
  }
  local_b8 = 0x15;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((int)local_38[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140092281:
    local_1c8 = *(undefined4 *)puVar4;
    uStack_1c4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1c0 = *(undefined4 *)(puVar4 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1c8);
  }
  else {
    puVar4 = (undefined8 *)*local_30;
    if (puVar4 != &local_1a8) goto LAB_140092281;
  }
  local_a8 = &local_1a8;
  local_1c8 = _DAT_141dc9d78;
  uStack_1c4 = uRam0000000141dc9d7c;
  uStack_1c0 = uRam0000000141dc9d80;
  uStack_1bc = DAT_141dc9d84;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_1c8);
  local_a0 = &local_198;
  local_1c8 = _DAT_141dc9da8;
  uStack_1c4 = uRam0000000141dc9dac;
  uStack_1c0 = uRam0000000141dc9db0;
  uStack_1bc = DAT_141dc9db4;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_1c8);
  local_98 = local_188;
  local_1c8 = _DAT_141dc9f08;
  uStack_1c4 = uRam0000000141dc9f0c;
  uStack_1c0 = uRam0000000141dc9f10;
  uStack_1bc = DAT_141dc9f14;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1c8);
  local_90 = local_178;
  local_1c8 = _DAT_141dc9e88;
  uStack_1c4 = uRam0000000141dc9e8c;
  uStack_1c0 = uRam0000000141dc9e90;
  uStack_1bc = DAT_141dc9e94;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_1c8);
  local_88 = local_168;
  local_1c8 = _DAT_141dc9e08;
  uStack_1c4 = uRam0000000141dc9e0c;
  uStack_1c0 = uRam0000000141dc9e10;
  uStack_1bc = DAT_141dc9e14;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1c8);
  local_80 = local_158;
  local_1c8 = _DAT_141dc9ee8;
  uStack_1c4 = uRam0000000141dc9eec;
  uStack_1c0 = uRam0000000141dc9ef0;
  uStack_1bc = DAT_141dc9ef4;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1c8);
  local_78 = local_148;
  local_1c8 = _DAT_141dc9cf8;
  uStack_1c4 = uRam0000000141dc9cfc;
  uStack_1c0 = uRam0000000141dc9d00;
  uStack_1bc = DAT_141dc9d04;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1c8);
  local_70 = local_138;
  local_1c8 = _DAT_141dc9ed8;
  uStack_1c4 = uRam0000000141dc9edc;
  uStack_1c0 = uRam0000000141dc9ee0;
  uStack_1bc = DAT_141dc9ee4;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1c8);
  local_68 = local_128;
  local_1c8 = _DAT_141dc9ea8;
  uStack_1c4 = uRam0000000141dc9eac;
  uStack_1c0 = uRam0000000141dc9eb0;
  uStack_1bc = DAT_141dc9eb4;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1c8);
  local_60 = local_118;
  uVar3 = gml_Script___InputStringMatches(param_1,param_2,&local_1b8,10,&local_a8);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_b8 = 0x17;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0x4008000000000000;
    goto LAB_140092cae;
  }
  local_b8 = 0x19;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((int)local_38[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140092595:
    local_1c8 = *(undefined4 *)puVar4;
    uStack_1c4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1c0 = *(undefined4 *)(puVar4 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1c8);
  }
  else {
    puVar4 = (undefined8 *)*local_30;
    if (puVar4 != &local_1a8) goto LAB_140092595;
  }
  local_a8 = &local_1a8;
  local_1c8 = _DAT_141dc9d68;
  uStack_1c4 = uRam0000000141dc9d6c;
  uStack_1c0 = uRam0000000141dc9d70;
  uStack_1bc = DAT_141dc9d74;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_1c8);
  local_a0 = &local_198;
  local_1c8 = _DAT_141dc9d88;
  uStack_1c4 = uRam0000000141dc9d8c;
  uStack_1c0 = uRam0000000141dc9d90;
  uStack_1bc = DAT_141dc9d94;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_1c8);
  local_98 = local_188;
  local_1c8 = _DAT_141dc9e18;
  uStack_1c4 = uRam0000000141dc9e1c;
  uStack_1c0 = uRam0000000141dc9e20;
  uStack_1bc = DAT_141dc9e24;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1c8);
  local_90 = local_178;
  local_1c8 = _DAT_141dc9e58;
  uStack_1c4 = uRam0000000141dc9e5c;
  uStack_1c0 = uRam0000000141dc9e60;
  uStack_1bc = DAT_141dc9e64;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_1c8);
  local_88 = local_168;
  local_1c8 = _DAT_141dc9d18;
  uStack_1c4 = uRam0000000141dc9d1c;
  uStack_1c0 = uRam0000000141dc9d20;
  uStack_1bc = DAT_141dc9d24;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1c8);
  local_80 = local_158;
  local_1c8 = _DAT_141dc9db8;
  uStack_1c4 = uRam0000000141dc9dbc;
  uStack_1c0 = uRam0000000141dc9dc0;
  uStack_1bc = DAT_141dc9dc4;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1c8);
  local_78 = local_148;
  local_1c8 = _DAT_141dc9d48;
  uStack_1c4 = uRam0000000141dc9d4c;
  uStack_1c0 = uRam0000000141dc9d50;
  uStack_1bc = DAT_141dc9d54;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1c8);
  local_70 = local_138;
  local_1c8 = _DAT_141dc9dc8;
  uStack_1c4 = uRam0000000141dc9dcc;
  uStack_1c0 = uRam0000000141dc9dd0;
  uStack_1bc = DAT_141dc9dd4;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1c8);
  local_68 = local_128;
  local_1c8 = _DAT_141dc9df8;
  uStack_1c4 = uRam0000000141dc9dfc;
  uStack_1c0 = uRam0000000141dc9e00;
  uStack_1bc = DAT_141dc9e04;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1c8);
  local_60 = local_118;
  uVar3 = gml_Script___InputStringMatches(param_1,param_2,&local_1b8,10,&local_a8);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_b8 = 0x1b;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0x4000000000000000;
    goto LAB_140092cae;
  }
  local_b8 = 0x1d;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((int)local_38[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_1400928a9:
    local_1c8 = *(undefined4 *)puVar4;
    uStack_1c4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1c0 = *(undefined4 *)(puVar4 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1c8);
  }
  else {
    puVar4 = (undefined8 *)*local_30;
    if (puVar4 != &local_1a8) goto LAB_1400928a9;
  }
  local_a8 = &local_1a8;
  local_1c8 = _DAT_141dc9e68;
  uStack_1c4 = uRam0000000141dc9e6c;
  uStack_1c0 = uRam0000000141dc9e70;
  uStack_1bc = DAT_141dc9e74;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_1c8);
  local_a0 = &local_198;
  local_1c8 = _DAT_141dc9ec8;
  uStack_1c4 = uRam0000000141dc9ecc;
  uStack_1c0 = uRam0000000141dc9ed0;
  uStack_1bc = DAT_141dc9ed4;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_1c8);
  local_98 = local_188;
  local_1c8 = _DAT_141dc9de8;
  uStack_1c4 = uRam0000000141dc9dec;
  uStack_1c0 = uRam0000000141dc9df0;
  uStack_1bc = DAT_141dc9df4;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1c8);
  local_90 = local_178;
  local_1c8 = _DAT_141dc9eb8;
  uStack_1c4 = uRam0000000141dc9ebc;
  uStack_1c0 = uRam0000000141dc9ec0;
  uStack_1bc = DAT_141dc9ec4;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_1c8);
  local_88 = local_168;
  local_1c8 = _DAT_141dc9e28;
  uStack_1c4 = uRam0000000141dc9e2c;
  uStack_1c0 = uRam0000000141dc9e30;
  uStack_1bc = DAT_141dc9e34;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1c8);
  local_80 = local_158;
  local_1c8 = _DAT_141dc9e38;
  uStack_1c4 = uRam0000000141dc9e3c;
  uStack_1c0 = uRam0000000141dc9e40;
  uStack_1bc = DAT_141dc9e44;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1c8);
  local_78 = local_148;
  local_1c8 = _DAT_141dc9e78;
  uStack_1c4 = uRam0000000141dc9e7c;
  uStack_1c0 = uRam0000000141dc9e80;
  uStack_1bc = DAT_141dc9e84;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1c8);
  local_70 = local_138;
  local_1c8 = _DAT_141dc9d58;
  uStack_1c4 = uRam0000000141dc9d5c;
  uStack_1c0 = uRam0000000141dc9d60;
  uStack_1bc = DAT_141dc9d64;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1c8);
  local_68 = local_128;
  local_1c8 = _DAT_141dc9dd8;
  uStack_1c4 = uRam0000000141dc9ddc;
  uStack_1c0 = uRam0000000141dc9de0;
  uStack_1bc = DAT_141dc9de4;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1c8);
  local_60 = local_118;
  local_1c8 = _DAT_141dc9f38;
  uStack_1c4 = uRam0000000141dc9f3c;
  uStack_1c0 = uRam0000000141dc9f40;
  uStack_1bc = DAT_141dc9f44;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1c8);
  local_58 = local_108;
  local_1c8 = _DAT_141dc9f28;
  uStack_1c4 = uRam0000000141dc9f2c;
  uStack_1c0 = uRam0000000141dc9f30;
  uStack_1bc = DAT_141dc9f34;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1c8);
  local_1c8 = _DAT_141dc9d98;
  uStack_1c4 = uRam0000000141dc9d9c;
  uStack_1c0 = uRam0000000141dc9da0;
  uStack_1bc = DAT_141dc9da4;
  local_50 = local_f8;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1c8);
  local_48 = local_e8;
  local_1c8 = _DAT_141dc9d28;
  uStack_1c4 = uRam0000000141dc9d2c;
  uStack_1c0 = uRam0000000141dc9d30;
  uStack_1bc = DAT_141dc9d34;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1c8);
  local_40 = local_d8;
  uVar3 = gml_Script___InputStringMatches(param_1,param_2,&local_1b8,0xe,&local_a8);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_b8 = 0x22;
    if (param_3 != &DAT_1419df7b0) {
      local_1c8 = (undefined4)DAT_1419df7b0;
      uStack_1c4 = DAT_1419df7b0._4_4_;
      uStack_1c0 = DAT_1419df7b8;
      uStack_1bc = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_1c8);
    }
  }
  else {
    local_b8 = 0x1f;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0x4014000000000000;
  }
LAB_140092cae:
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(&local_1a8,0x10,0xe,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar4 = local_30;
    do {
      puVar2 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

