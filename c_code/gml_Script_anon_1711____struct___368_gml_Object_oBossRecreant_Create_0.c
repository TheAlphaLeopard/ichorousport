// gml_Script_anon_1711____struct___368_gml_Object_oBossRecreant_Create_0 @ 0x1407bc4d0

undefined8 *
gml_Script_anon_1711____struct___368_gml_Object_oBossRecreant_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_f0 = "gml_Script_anon@1400@___struct___368@gml_Object_oBossRecreant_Create_0";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x43;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = (undefined1 *)0x0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x44;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_78 = 0;
  FUN_140e87930(uVar2,DAT_141a0a848,0x80000000,&local_78);
  local_e8 = 0x45;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = &DAT_bff0000000000000;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar2,DAT_141a07c38,0x80000000,&local_88);
  local_e8 = 0x46;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = 0xc010000000000000;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar2,DAT_141a06528,0x80000000,&local_98);
  local_e8 = 0x47;
  uStack_d0 = CONCAT44(0xd,(undefined4)uStack_d0);
  local_d8 = 0;
  local_48 = 0;
  uStack_40 = uStack_d0;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140041b80(&local_58,&local_48);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar2,DAT_141a09338,0x80000000,&local_58);
  local_e8 = 0x49;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09448);
  if (puVar3 != &local_a8) {
    local_48 = *puVar3;
    uStack_40 = puVar3[1];
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_48);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_a8);
  local_e8 = 0x4a;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0xc030000000000000;
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_b8);
  local_e8 = 0x4b;
  uStack_d0 = CONCAT44(0xf,(undefined4)uStack_d0);
  local_d8 = 0x10000010000027d;
  local_48 = 0x10000010000027d;
  uStack_40 = CONCAT44(0xf,(undefined4)uStack_d0);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_48);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_68);
  local_e8 = 0x4c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_c8);
  local_e8 = 0x4e;
  uStack_d0 = CONCAT44(0xd,(undefined4)uStack_d0);
  local_d8 = 0;
  if (&local_d8 != puVar1) {
    local_48 = 0;
    uStack_40 = CONCAT44(0xd,(undefined4)uStack_d0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  local_e8 = 0x50;
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  gml_Script_jb_stack_layer_stop(param_1,param_2,&local_108,0,0);
  local_e8 = 0x51;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  gml_Script_jb_stack_get(param_1,param_2,&local_108,0,0);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

