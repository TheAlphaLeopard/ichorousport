// gml_Script____struct___415_gml_Object_oCageArm_Create_0 @ 0x14087c3f0

undefined8 *
gml_Script____struct___415_gml_Object_oCageArm_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@2454@___struct___415@gml_Object_oCageArm_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0xa8;
  uStack_9c = 0xf;
  local_a8 = 0x10000010000008c;
  local_38 = 0x8c;
  uStack_34 = 0x1000001;
  uStack_2c = 0xf;
  FUN_140041b80(&local_48,&local_38);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_48);
  local_18 = 0xa9;
  uStack_9c = 0xf;
  local_a8 = 0x10000010000008c;
  local_38 = 0x8c;
  uStack_34 = 0x1000001;
  uStack_30 = uStack_a0;
  uStack_2c = 0xf;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140041b80(&local_58,&local_38);
  FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_58);
  local_18 = 0xaa;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_78 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_78);
  local_18 = 0xab;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_88);
  local_18 = 0xad;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
  FUN_140e87440(uVar2,DAT_141a097f8,0x80000000,&local_98,0,0);
  uStack_9c = local_8c;
  uStack_a0 = local_90;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_a8 = local_98;
  }
  else {
    FUN_1400419b0(&local_a8,&local_98);
  }
  uVar1 = uStack_9c;
  local_38 = (undefined4)local_a8;
  uStack_34 = local_a8._4_4_;
  uStack_30 = uStack_a0;
  uStack_2c = uStack_9c;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_38);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140e87930(uVar2,DAT_141a09708,0x80000000,&local_68);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
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
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

