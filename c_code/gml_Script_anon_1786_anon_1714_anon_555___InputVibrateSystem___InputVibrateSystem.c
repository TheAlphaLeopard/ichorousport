// gml_Script_anon_1786_anon_1714_anon_555___InputVibrateSystem___InputVibrateSystem @ 0x1400ea820

undefined8 *
gml_Script_anon_1786_anon_1714_anon_555___InputVibrateSystem___InputVibrateSystem
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8 [3];
  undefined4 local_9c;
  uint local_98 [3];
  byte local_8c;
  uint local_88 [3];
  byte local_7c;
  uint local_78 [3];
  byte local_6c;
  uint *local_68;
  uint *local_60;
  uint *local_58;
  undefined8 local_50;
  char *local_48;
  undefined4 local_40;
  ulonglong local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  local_48 = "gml_Script_anon@671@anon@555@__InputVibrateSystem@__InputVibrateSystem";
  local_50 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_50;
  local_40 = 0x16;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_40 = 0x18;
  local_b8 = DAT_141a04308 & 0xffffff;
  uStack_b4 = (int)(DAT_141a04308 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_2c = 0xf;
  local_38 = CONCAT44(uStack_b4,DAT_141a04308) & 0xffffffff00ffffff;
  uStack_b0 = uStack_30;
  uStack_ac = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_60 = local_88;
  puVar2 = (uint *)&DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar1 = (uint *)*param_5;
    if (puVar1 == local_78) goto LAB_1400ea98d;
  }
  local_b8 = *puVar1;
  uStack_b4 = puVar1[1];
  uStack_b0 = puVar1[2];
  uStack_ac = puVar1[3];
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
LAB_1400ea98d:
  local_58 = local_78;
  uVar3 = CONCAT44(uVar4,DAT_1419fd6d8);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_c8,2,uVar3,&local_60);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar1 != local_a8) {
    local_b8 = *puVar1;
    uStack_b4 = puVar1[1];
    uStack_b0 = puVar1[2];
    uStack_ac = puVar1[3];
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_b8);
  }
  local_40 = 0x19;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar1 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_1419febc8);
  if (puVar1 != local_98) {
    local_b8 = *puVar1;
    uStack_b4 = puVar1[1];
    uStack_b0 = puVar1[2];
    uStack_ac = puVar1[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_b8);
  }
  local_68 = local_98;
  if ((param_4 < 1) || (puVar2 = (uint *)*param_5, puVar2 != local_88)) {
    local_b8 = *puVar2;
    uStack_b4 = puVar2[1];
    uStack_b0 = puVar2[2];
    uStack_ac = puVar2[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_b8);
  }
  local_60 = local_88;
  local_58 = local_a8;
  uVar3 = CONCAT44(uVar4,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar3,&local_68);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_40 = 0x1a;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar2 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01f18);
  if (puVar2 != local_98) {
    local_b8 = *puVar2;
    uStack_b4 = puVar2[1];
    uStack_b0 = puVar2[2];
    uStack_ac = puVar2[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_b8);
  }
  local_68 = local_98;
  local_60 = local_a8;
  FUN_140e634e0(param_1,param_2,&local_c8,2,CONCAT44(uVar4,DAT_1419fe568),&local_68);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_50;
  return param_3;
}

