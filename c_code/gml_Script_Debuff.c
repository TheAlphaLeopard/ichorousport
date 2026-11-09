// gml_Script_Debuff @ 0x1403c3e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_Debuff(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                 undefined8 *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 **ppuVar5;
  undefined4 uVar6;
  longlong local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  uint local_14c;
  longlong local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  longlong local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  
  plVar4 = (longlong *)0x0;
  local_f0 = "gml_Script_anon@4607@Buff@OFFERINGSINIT";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0xae;
  _eh_vector_constructor_iterator_(&local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_12c = 0;
  local_138 = 0;
  local_d4 = 0;
  local_e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0xb0;
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6288);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a8a8);
  uStack_15c = DAT_141dd2944;
  uStack_160 = DAT_141dd2940;
  if ((1 << ((byte)DAT_141dd2944 & 0x1f) & 0x46U) == 0) {
    local_168 = DAT_141dd2938;
  }
  else {
    FUN_1400419b0(&local_168,&DAT_141dd2938);
  }
  local_18c = *(undefined4 *)((longlong)plVar1 + 0xc);
  local_190 = (undefined4)plVar1[1];
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
    local_198 = *plVar1;
  }
  else {
    FUN_1400419b0(&local_198,plVar1);
  }
  FUN_1400460e0(&local_198,uVar2);
  uStack_16c = local_18c;
  uStack_170 = local_190;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
    local_178 = local_198;
  }
  else {
    FUN_1400419b0(&local_178,&local_198);
  }
  FUN_1400460e0(&local_178,&local_168);
  local_188 = local_178;
  uStack_180 = uStack_170;
  uStack_17c = uStack_16c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_188);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_60 = local_b8;
  local_188 = CONCAT44(uRam0000000141dd284c,_DAT_141dd2848);
  uStack_180 = uRam0000000141dd2850;
  uStack_17c = DAT_141dd2854;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_188);
  local_58 = local_a8;
  ppuVar5 = &local_60;
  puVar3 = (undefined8 *)gml_Script_worldwide_get_dialogue(param_1,param_2,&local_e0,2,ppuVar5);
  uVar6 = (undefined4)((ulonglong)ppuVar5 >> 0x20);
  if (puVar3 != &local_98) {
    local_188 = *puVar3;
    uStack_180 = *(undefined4 *)(puVar3 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_188);
  }
  local_50 = &local_98;
  local_188 = CONCAT44(uRam0000000141dd284c,_DAT_141dd2848);
  uStack_180 = uRam0000000141dd2850;
  uStack_17c = DAT_141dd2854;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_188);
  local_48 = local_88;
  plVar1 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_138,2,CONCAT44(uVar6,DAT_1419f5988),&local_50);
  if (plVar1 != &local_158) {
    local_188 = *plVar1;
    uStack_180 = (undefined4)plVar1[1];
    uStack_17c = *(undefined4 *)((longlong)plVar1 + 0xc);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_188);
  }
  local_e8 = 0xb1;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6268);
  if (param_4 < 1) {
    plVar1 = &DAT_1419df7b0;
  }
  else {
    plVar1 = (longlong *)*param_5;
    if (plVar1 == &local_c8) goto LAB_1403c429a;
  }
  local_188 = *plVar1;
  uStack_180 = (undefined4)plVar1[1];
  uStack_17c = *(undefined4 *)((longlong)plVar1 + 0xc);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_188);
LAB_1403c429a:
  local_68 = &local_c8;
  plVar1 = (longlong *)FUN_140e63610(param_1,param_2,&local_138,1,uVar2,&local_68);
  if (plVar1 != &local_128) {
    local_188 = *plVar1;
    uStack_180 = (undefined4)plVar1[1];
    uStack_17c = *(undefined4 *)((longlong)plVar1 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_188);
  }
  local_e8 = 0xb3;
  uStack_17c = DAT_141dd2904;
  uStack_180 = DAT_141dd2900;
  if ((1 << ((byte)DAT_141dd2904 & 0x1f) & 0x46U) == 0) {
    local_188 = DAT_141dd28f8;
  }
  else {
    FUN_1400419b0(&local_188,&DAT_141dd28f8);
  }
  local_10c = DAT_141dd26a4;
  local_110 = DAT_141dd26a0;
  if ((1 << ((byte)DAT_141dd26a4 & 0x1f) & 0x46U) == 0) {
    local_118 = DAT_141dd2698;
  }
  else {
    FUN_1400419b0(&local_118,&DAT_141dd2698);
  }
  plVar1 = (longlong *)0x0;
  if (((local_14c & 0xffffff) == 2) && (local_158 != 0)) {
    if (*(int *)(local_158 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
    }
    else {
      plVar1 = *(longlong **)(local_158 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar1 = &local_158;
  }
  uStack_16c = *(undefined4 *)((longlong)plVar1 + 0xc);
  uStack_170 = (undefined4)plVar1[1];
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = *plVar1;
  }
  else {
    FUN_1400419b0(&local_178,plVar1);
  }
  FUN_1400460e0(&local_178,&local_118);
  local_13c = uStack_16c;
  local_140 = uStack_170;
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_148 = local_178;
  }
  else {
    FUN_1400419b0(&local_148,&local_178);
  }
  FUN_1400460e0(&local_148,&local_128);
  local_18c = local_13c;
  local_190 = local_140;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_198 = local_148;
  }
  else {
    FUN_1400419b0(&local_198,&local_148);
  }
  FUN_1400460e0(&local_198,&local_188);
  if (((local_14c & 0xffffff) == 2) && (local_158 != 0)) {
    if (*(int *)(local_158 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(local_158 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar4 = &local_158;
  }
  uStack_15c = local_18c;
  uStack_160 = local_190;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
    local_168 = local_198;
  }
  else {
    FUN_1400419b0(&local_168,&local_198);
  }
  FUN_1400460e0(&local_168,plVar4);
  local_78 = (undefined4)local_168;
  uStack_74 = local_168._4_4_;
  uStack_70 = uStack_160;
  uStack_6c = uStack_15c;
  FUN_140041b80(&local_108,&local_78);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_e8 = 0xb4;
  if (&local_108 != param_3) {
    local_78 = (undefined4)local_108;
    uStack_74 = local_108._4_4_;
    uStack_70 = uStack_100;
    uStack_6c = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_78);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

