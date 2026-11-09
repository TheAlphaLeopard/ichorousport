// gml_Script_anon_1629_anon_1040___InputTriggerEffectSystem___InputTriggerEffectSystem @ 0x1400e0520

undefined8 *
gml_Script_anon_1629_anon_1040___InputTriggerEffectSystem___InputTriggerEffectSystem
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [12];
  byte local_cc;
  uint local_c8 [3];
  byte local_bc;
  uint local_b8 [3];
  byte local_ac;
  uint local_a8 [3];
  byte local_9c;
  uint local_98 [3];
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  ulonglong local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_50;
  uint *local_48;
  uint *local_40;
  uint *local_38;
  uint *local_30;
  
  local_80 = "gml_Script_anon@1156@anon@1040@__InputTriggerEffectSystem@__InputTriggerEffectSystem";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x24;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_e8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_ec = 0;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x26;
  puVar1 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_1419febc8);
  local_118 = DAT_141a03cc8 & 0xffffff;
  uStack_114 = (int)(DAT_141a03cc8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_114 == 0xf) {
    uStack_114 = 0x4000004;
  }
  else {
    uStack_114 = uStack_114 | 0x1000000;
  }
  uStack_5c = 0xf;
  local_68 = CONCAT44(uStack_114,DAT_141a03cc8) & 0xffffffff00ffffff;
  uStack_110 = uStack_60;
  uStack_10c = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_118);
  local_50 = local_d8;
  puVar3 = (uint *)&DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar2 = (uint *)*param_5;
    if (puVar2 == local_c8) goto LAB_1400e06ad;
  }
  local_118 = *puVar2;
  uStack_114 = puVar2[1];
  uStack_110 = puVar2[2];
  uStack_10c = puVar2[3];
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_118);
LAB_1400e06ad:
  local_48 = local_c8;
  if (puVar1 != local_b8) {
    local_118 = *puVar1;
    uStack_114 = puVar1[1];
    uStack_110 = puVar1[2];
    uStack_10c = puVar1[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_118);
  }
  local_40 = local_b8;
  if ((param_4 < 1) || (puVar3 = (uint *)*param_5, puVar3 != local_a8)) {
    local_118 = *puVar3;
    uStack_114 = puVar3[1];
    uStack_110 = puVar3[2];
    uStack_10c = puVar3[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_118);
  }
  local_38 = local_a8;
  uVar4 = CONCAT44(uVar5,DAT_1419fd6d8);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_108,2,uVar4,&local_50);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar1 != local_98) {
    local_118 = *puVar1;
    uStack_114 = puVar1[1];
    uStack_110 = puVar1[2];
    uStack_10c = puVar1[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_118);
  }
  local_30 = local_98;
  FUN_140e634e0(param_1,param_2,&local_f8,3,CONCAT44(uVar5,DAT_1419ff3d8),&local_40);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

