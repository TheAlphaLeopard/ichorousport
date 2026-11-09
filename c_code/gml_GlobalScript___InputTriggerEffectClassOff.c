// gml_GlobalScript___InputTriggerEffectClassOff @ 0x1400d6ce0

undefined8 *
gml_GlobalScript___InputTriggerEffectClassOff
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined1 local_c8 [32];
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  double local_78;
  undefined4 local_6c;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  double *local_40;
  
  local_100 = 
  "gml_Script___SteamGetState@anon@814@__InputTrggerEffectClassFeedback@__InputTrggerEffectClassFeedback"
  ;
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x13;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_d4 = 0;
  local_e0 = 0;
  local_e4 = 0;
  local_f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x15;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03588);
  puVar7 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
    if (puVar6 == &local_a8) goto LAB_1400d6df0;
  }
  local_128 = *puVar6;
  uStack_120 = puVar6[1];
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_128);
LAB_1400d6df0:
  local_58 = &local_a8;
  if ((param_4 < 2) || (puVar7 = (undefined8 *)param_5[1], puVar7 != &local_98)) {
    local_128 = *puVar7;
    uStack_120 = puVar7[1];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_128);
  }
  local_50 = &local_98;
  if (puVar4 != &local_88) {
    local_128 = *puVar4;
    uStack_120 = puVar4[1];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_128);
  }
  iVar1 = DAT_141a035f8;
  local_48 = &local_88;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_78 = (double)iVar1;
  local_40 = &local_78;
  uVar8 = 2;
  puVar7 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_f0,2,CONCAT44(uVar9,DAT_141a035d8),&local_48);
  local_10c = *(undefined4 *)((longlong)puVar7 + 0xc);
  local_110 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_118 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_118,puVar7);
  }
  uStack_120 = uStack_120 & 0xffffffff;
  local_128 = 0x4024000000000000;
  FUN_140046500(&local_118,&local_128);
  if ((1 << ((byte)(uStack_120 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uVar5 = gml_Script_InputDeviceGetNewActivity(param_1,param_2,&local_e0,2,&local_58);
  uVar2 = FUN_140e851f0(uVar5,&local_118,DAT_141955260,1);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  uVar3 = 1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f);
  if (uVar2 < 0x80000000) {
    local_f8 = 0x17;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(param_3);
    }
  }
  else {
    local_f8 = 0x1a;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(param_3);
    }
    uVar8 = 1;
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 10;
  *param_3 = uVar8;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

