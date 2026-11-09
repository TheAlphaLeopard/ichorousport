// gml_Script_anon_27102_DefineBuffs_OFFERINGSINIT @ 0x1403e2ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_27102_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined1 local_108 [80];
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_130 = "gml_Script_anon@26250@anon@24515@DefineBuffs@OFFERINGSINIT";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x445;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_108,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_114 = 0;
  local_120 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x447;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_1403e2bcb:
    local_1c8 = *puVar1;
    uStack_1c0 = *(undefined4 *)(puVar1 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_1c8);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_b8) goto LAB_1403e2bcb;
  }
  local_50 = &local_b8;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_1403e2c1a:
    local_1c8 = *puVar1;
    uStack_1c0 = *(undefined4 *)(puVar1 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_1c8);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_a8) goto LAB_1403e2c1a;
  }
  local_48 = &local_a8;
  local_1c8 = CONCAT44(uRam0000000141dd262c,_DAT_141dd2628);
  uStack_1c0 = uRam0000000141dd2630;
  uStack_1bc = DAT_141dd2634;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_1c8);
  local_40 = local_98;
  uStack_1bc = 0xf;
  local_1c8 = 0x100000000000052;
  local_1a8 = 0x52;
  uStack_1a4 = 0x1000000;
  uStack_1a0 = uStack_1c0;
  uStack_19c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_1a8);
  local_38 = local_88;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_120,4,CONCAT44(uVar3,DAT_141a0a7c8),&local_50);
  if (puVar1 != &local_1b8) {
    local_1a8 = *(undefined4 *)puVar1;
    uStack_1a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_1a0 = *(undefined4 *)(puVar1 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_1a8);
  }
  local_128 = 0x448;
  uStack_1bc = 0xf;
  local_1c8 = 0x1000000000000ee;
  FUN_140e87170(&local_1c8,DAT_141a0a828,0x80000000,&local_158,param_1,param_2);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = local_14c;
  uStack_1c0 = local_150;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_1c8 = local_158;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_158);
  }
  uVar3 = uStack_1bc;
  local_1a8 = (undefined4)local_1c8;
  uStack_1a4 = local_1c8._4_4_;
  uStack_1a0 = uStack_1c0;
  uStack_19c = uStack_1bc;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_1a8);
  if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140e87930(&local_1b8,DAT_141a1f0d0,0x80000000,&local_148);
  local_128 = 0x449;
  if (param_4 < 3) {
    puVar1 = &DAT_1419df7b0;
LAB_1403e2e5d:
    local_1a8 = *(undefined4 *)puVar1;
    uStack_1a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_1a0 = *(undefined4 *)(puVar1 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1a8);
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
    if (puVar1 != &local_168) goto LAB_1403e2e5d;
  }
  FUN_140e87930(&local_1b8,DAT_1419f5b78,0x80000000,&local_168);
  local_128 = 0x44a;
  if (param_4 < 4) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[3];
    if (puVar1 == &local_178) goto LAB_1403e2ef0;
  }
  local_1a8 = *(undefined4 *)puVar1;
  uStack_1a4 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_1a0 = *(undefined4 *)(puVar1 + 1);
  uStack_19c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_1a8);
LAB_1403e2ef0:
  FUN_140e87930(&local_1b8,DAT_1419f5b88,0x80000000,&local_178);
  local_128 = 1099;
  if ((param_4 < 5) || (puVar2 = (undefined8 *)param_5[4], puVar2 != &local_188)) {
    local_1a8 = *(undefined4 *)puVar2;
    uStack_1a4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_1a0 = *(undefined4 *)(puVar2 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1a8);
  }
  FUN_140e87930(&local_1b8,DAT_1419f5ae8,0x80000000,&local_188);
  local_128 = 0x44c;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_18c = 0;
  local_198 = 0x4010000000000000;
  FUN_140e87930(&local_1b8,DAT_1419f6108,0x80000000,&local_198);
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
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
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

