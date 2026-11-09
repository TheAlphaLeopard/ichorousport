// gml_Script_anon_1040___InputTriggerEffectSystem___InputTriggerEffectSystem @ 0x1400e0ce0

undefined8 *
gml_Script_anon_1040___InputTriggerEffectSystem___InputTriggerEffectSystem
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_58;
  byte local_4c;
  undefined8 *local_48 [3];
  undefined8 *local_30;
  
  local_b0 = "gml_Script_anon@2038@anon@1040@__InputTriggerEffectSystem@__InputTriggerEffectSystem";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x38;
  _eh_vector_constructor_iterator_(&local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x3a;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 == &local_58) goto LAB_1400e0dcf;
  }
  local_a0 = *(undefined4 *)puVar1;
  uStack_9c = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_98 = *(undefined4 *)(puVar1 + 1);
  uStack_94 = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140041b80(&local_58,&local_a0);
LAB_1400e0dcf:
  local_30 = &local_58;
  gml_Script_anon_845___InputTriggerEffectSystem___InputTriggerEffectSystem
            (param_1,param_2,&local_c8,1,&local_30);
  local_a8 = 0x3b;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((param_4 < 1) || (puVar2 = (undefined8 *)*param_5, puVar2 != &local_88)) {
    local_a0 = *(undefined4 *)puVar2;
    uStack_9c = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_98 = *(undefined4 *)(puVar2 + 1);
    uStack_94 = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_a0);
  }
  local_48[0] = &local_88;
  gml_Script___InputTriggerEffectStop(param_1,param_2,&local_c8,1,local_48);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

