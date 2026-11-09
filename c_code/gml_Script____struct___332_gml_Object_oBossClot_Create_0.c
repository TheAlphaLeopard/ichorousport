// gml_Script____struct___332_gml_Object_oBossClot_Create_0 @ 0x1407086b0

undefined8 *
gml_Script____struct___332_gml_Object_oBossClot_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong in_stack_ffffffffffffff28;
  ulonglong in_stack_ffffffffffffff30;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
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
  undefined8 local_50;
  undefined4 local_44;
  
  local_60 = "gml_Script_anon@10780@___struct___332@gml_Object_oBossClot_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_8c = 0xffffff;
  local_98 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x234;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd448);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  FUN_140e609c0(param_1);
  uStack_c0 = puVar1[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_c8,puVar1);
  }
  uStack_b0 = (ulonglong)(uint)uStack_b0;
  local_b8 = 0x3ff8000000000000;
  FUN_140042560(&local_c8,&local_b8);
  if ((1 << ((byte)(uStack_b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (&local_c8 != puVar2) {
    local_b8 = local_c8;
    uStack_b0 = uStack_c0;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_b8);
  }
  if ((1 << ((byte)(uStack_c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  local_58 = 0x235;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd518);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  FUN_140e609c0(param_1);
  uStack_c0 = puVar1[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_c8,puVar1);
  }
  uStack_b0 = uStack_b0 & 0xffffffff;
  local_b8 = 0x3fe0000000000000;
  FUN_140042560(&local_c8,&local_b8);
  if ((1 << ((byte)(uStack_b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (&local_c8 != puVar2) {
    local_b8 = local_c8;
    uStack_b0 = uStack_c0;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_b8);
  }
  if ((1 << ((byte)(uStack_c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  local_58 = 0x237;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = 0;
  FUN_140e87930(uVar3,DAT_141a0a848,0x80000000,&local_98);
  local_58 = 0x238;
  uStack_b0 = CONCAT44(0xd,(uint)uStack_b0);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = uStack_b0;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_c8);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar3,DAT_141a06588,0x80000000,&local_78);
  local_58 = 0x239;
  uStack_b0 = CONCAT44(0xd,(uint)uStack_b0);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = uStack_b0;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_c8);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar3,DAT_1419f5b38,0x80000000,&local_88);
  local_58 = 0x23a;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06538);
  FUN_140e87440(uVar3,DAT_1419f4a98,0x80000000,&local_50,
                in_stack_ffffffffffffff28 & 0xffffffffffffff00,
                in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  FUN_140e63610(uVar3,param_2,&local_a8,0,&local_50,0);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

