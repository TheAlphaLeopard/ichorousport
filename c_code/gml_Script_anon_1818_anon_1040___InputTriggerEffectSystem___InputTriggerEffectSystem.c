// gml_Script_anon_1818_anon_1040___InputTriggerEffectSystem___InputTriggerEffectSystem @ 0x1400e0850

undefined8 *
gml_Script_anon_1818_anon_1040___InputTriggerEffectSystem___InputTriggerEffectSystem
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_78 [32];
  undefined4 local_58 [3];
  byte local_4c;
  undefined8 local_48;
  byte local_3c;
  undefined4 *local_28;
  undefined8 *local_20;
  
  local_90 = "gml_Script_anon@1401@anon@1040@__InputTriggerEffectSystem@__InputTriggerEffectSystem";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x29;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_78,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x2b;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419febc8);
  if (puVar1 != local_58) {
    local_a8 = *puVar1;
    uStack_a4 = puVar1[1];
    uStack_a0 = puVar1[2];
    uStack_9c = puVar1[3];
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_a8);
  }
  local_28 = local_58;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_48) goto LAB_1400e0985;
  }
  local_a8 = *(undefined4 *)param_5;
  uStack_a4 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_a0 = *(undefined4 *)(param_5 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140041b80(&local_48,&local_a8);
LAB_1400e0985:
  local_20 = &local_48;
  FUN_140e634e0(param_1,param_2,&local_b8,2,CONCAT44(uVar2,DAT_141a01f38),&local_28);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

