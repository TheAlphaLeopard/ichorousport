// gml_GlobalScript___InputTriggerEffectReapply @ 0x1400dde60

undefined8 *
gml_GlobalScript___InputTriggerEffectReapply
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50 [3];
  byte local_44;
  undefined4 local_40 [3];
  byte local_34;
  
  local_60 = "gml_Script___SetPause@anon@1914@__InputTriggerEffectPlayer@__InputTriggerEffectPlayer"
  ;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x3e;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x40;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03d88);
  FUN_140e609c0(param_1);
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  if (puVar4 != puVar2) {
    local_78 = *(undefined4 *)puVar4;
    uStack_74 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_70 = *(undefined4 *)(puVar4 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 0x42;
  if (0 < param_4) {
    puVar5 = (undefined8 *)*param_5;
  }
  cVar1 = FUN_140e491e0(puVar5);
  if (cVar1 == '\0') {
    local_58 = 0x48;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd7f8);
    if (puVar3 != local_50) {
      local_78 = *puVar3;
      uStack_74 = puVar3[1];
      uStack_70 = puVar3[2];
      uStack_6c = puVar3[3];
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_50);
      }
      FUN_140041b80(local_50,&local_78);
    }
    local_88 = local_50;
    gml_Script___InputTriggerEffectStop(param_1,param_2,&local_a8,1,&local_88);
  }
  else {
    local_58 = 0x44;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd7f8);
    if (puVar3 != local_50) {
      local_78 = *puVar3;
      uStack_74 = puVar3[1];
      uStack_70 = puVar3[2];
      uStack_6c = puVar3[3];
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_50);
      }
      FUN_140041b80(local_50,&local_78);
    }
    local_88 = local_50;
    puVar3 = (undefined4 *)
             gml_Script_InputPlayerGetGamepadType(param_1,param_2,&local_98,1,&local_88);
    if (puVar3 != local_40) {
      local_78 = *puVar3;
      uStack_74 = puVar3[1];
      uStack_70 = puVar3[2];
      uStack_6c = puVar3[3];
      if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_40);
      }
      FUN_140041b80(local_40,&local_78);
    }
    local_80 = local_40;
    gml_Script_anon_845___InputTriggerEffectSystem___InputTriggerEffectSystem
              (param_1,param_2,&local_a8,1,&local_80);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

