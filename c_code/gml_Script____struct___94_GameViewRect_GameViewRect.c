// gml_Script____struct___94_GameViewRect_GameViewRect @ 0x140288560

undefined8 *
gml_Script____struct___94_GameViewRect_GameViewRect
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong in_stack_ffffffffffffff38;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Script_level_end";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x62;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_b8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57bf0);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57d00);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57be0);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b00);
  puVar7 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b60);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 100;
  uStack_6c = 0xf;
  local_78 = 0x1000000000000ff;
  in_stack_ffffffffffffff38 = in_stack_ffffffffffffff38 & 0xffffffffffffff00;
  FUN_140e87440(&local_78,DAT_141a57d10,0x80000000,&local_88,in_stack_ffffffffffffff38,0);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  uStack_6c = 0xf;
  local_78 = 0x1000000000000ff;
  FUN_140e87440(&local_78,DAT_141a57ce0,0x80000000,&local_98,
                in_stack_ffffffffffffff38 & 0xffffffffffffff00,0);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  uVar1 = FUN_140e851f0(&local_88,&local_98,DAT_141955260,1);
  if (uVar1 < 0x80000000) {
    local_58 = 0x65;
    FUN_140046040(local_b8);
  }
  local_58 = 0x67;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  gml_GlobalScript_GameViewRect(param_1,param_2,&local_a8,0,0);
  local_58 = 0x69;
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar2) {
    local_b8 = 0;
    uStack_b0 = uStack_70;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_b8);
  }
  local_58 = 0x6a;
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar3) {
    local_b8 = 0;
    uStack_b0 = uStack_70;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_b8);
  }
  local_58 = 0x6b;
  uStack_6c = 0xd;
  local_78 = 0x3ff0000000000000;
  if (&local_78 != puVar4) {
    local_b8 = 0x3ff0000000000000;
    uStack_b0 = uStack_70;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_b8);
  }
  local_58 = 0x6c;
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x3ff0000000000000;
  local_58 = 0x6d;
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0x3ff0000000000000;
  local_58 = 0x6e;
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0x3ff0000000000000;
  local_58 = 0x70;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  gml_Script_jb_stack_layer_stop(param_1,param_2,&local_a8,0,0);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

