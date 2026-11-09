// gml_Script____struct___413_gml_Object_oCageArm_Create_0 @ 0x14087a280

undefined8 *
gml_Script____struct___413_gml_Object_oCageArm_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong **pplVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_60 = "gml_Script_anon@1219@___struct___413@gml_Object_oCageArm_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  uStack_1c = 0xffffff;
  local_28 = (longlong *)0x0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_2c = 0xffffff;
  local_38 = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x4b;
  pplVar2 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  uStack_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_141a0f7f8,0x80000000,&local_28,0,0);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e609c0(param_1);
  if (&local_28 != pplVar2) {
    local_d8 = local_28;
    uStack_d0 = uStack_20;
    uStack_cc = uStack_1c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar2);
    }
    FUN_140041b80(pplVar2,&local_d8);
  }
  FUN_140e60910(1);
  local_58 = 0x4d;
  uStack_cc = 0xf;
  local_d8 = (longlong *)0x10000010000008a;
  local_c8 = 0x8a;
  uStack_c4 = 0x1000001;
  uStack_c0 = uStack_d0;
  uStack_bc = 0xf;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_c8);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_78);
  local_58 = 0x4e;
  uStack_cc = 0xf;
  local_d8 = (longlong *)0x10000010000008a;
  local_c8 = 0x8a;
  uStack_c4 = 0x1000001;
  uStack_c0 = uStack_d0;
  uStack_bc = 0xf;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_c8);
  FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_88);
  local_58 = 0x4f;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_a8);
  local_58 = 0x51;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
  FUN_140e87440(uVar3,DAT_141a097f8,0x80000000,&local_b8,0,0);
  uStack_cc = local_ac;
  uStack_d0 = local_b0;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_d8 = (longlong *)local_b8;
  }
  else {
    FUN_1400419b0(&local_d8,&local_b8);
  }
  uVar1 = uStack_cc;
  local_c8 = (undefined4)local_d8;
  uStack_c4 = local_d8._4_4_;
  uStack_c0 = uStack_d0;
  uStack_bc = uStack_cc;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_c8);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e87930(uVar3,DAT_141a09708,0x80000000,&local_98);
  local_58 = 0x53;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a062e8);
  FUN_140e87440(uVar3,DAT_141a062e8,0x80000000,&local_38,0,0);
  FUN_140e609c0(param_1);
  if (&local_38 != puVar4) {
    local_c8 = (undefined4)local_38;
    uStack_c4 = local_38._4_4_;
    uStack_c0 = uStack_30;
    uStack_bc = uStack_2c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_c8);
  }
  FUN_140e60910(1);
  local_58 = 0x54;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7d8);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  FUN_140e87440(uVar3,DAT_141a0a7d8,0x80000000,&local_48,0,0);
  FUN_140e609c0(param_1);
  if (&local_48 != puVar4) {
    local_c8 = (undefined4)local_48;
    uStack_c4 = local_48._4_4_;
    uStack_c0 = uStack_40;
    uStack_bc = uStack_3c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_c8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_1c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_28);
  }
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

