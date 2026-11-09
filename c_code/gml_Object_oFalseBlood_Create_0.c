// gml_Object_oFalseBlood_Create_0 @ 0x140acdfc0

undefined8 *
gml_Object_oFalseBlood_Create_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong in_stack_ffffffffffffff48;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@349@___struct___569@gml_Object_oFakeRot_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x16;
  puVar3 = (ulonglong *)(**(code **)(*param_1 + 8))(0,DAT_141a1eed0);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  FUN_140e609c0(param_1);
  uStack_8c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_90 = (undefined4)puVar3[1];
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_98,puVar3);
  }
  uStack_4c = 0;
  local_58 = (longlong *)0x400e000000000000;
  FUN_140042560(&local_98,&local_58);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (&local_98 != puVar4) {
    local_58 = (longlong *)local_98;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_58);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_38 = 0x18;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  FUN_140e609c0(param_1);
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar6 = *puVar3;
  }
  else {
    uVar6 = FUN_140e4b060(puVar3);
  }
  uStack_4c = 0;
  uVar1 = uVar6 ^ 0x8000000000000000;
  local_58 = (longlong *)uVar1;
  if (&local_58 != puVar4) {
    local_58._4_4_ = (undefined4)(uVar1 >> 0x20);
    local_98 = CONCAT44(local_58._4_4_,(int)uVar6);
    uStack_90 = uStack_50;
    uStack_8c = 0;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_98);
  }
  FUN_140e60910(1);
  local_38 = 0x1a;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_4c = 6;
  in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 & 0xffffffffffffff00;
  in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffffffffff00;
  local_58 = param_1;
  FUN_140e87440(&local_58,DAT_1419fe158,0x80000000,&local_68,in_stack_ffffffffffffff48,
                in_stack_ffffffffffffff50);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_1400460e0(&local_68,uVar5);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_68);
  local_38 = 0x1c;
  uStack_4c = 0;
  local_58 = (longlong *)0x3ff0000000000000;
  iVar2 = FUN_140e851f0(puVar3,&local_58,DAT_141955260,0);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
    uStack_4c = 6;
    in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 & 0xffffffffffffff00;
    in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffffffffff00;
    local_58 = param_1;
    FUN_140e87440(&local_58,DAT_1419fe158,0x80000000,&local_78,in_stack_ffffffffffffff48,
                  in_stack_ffffffffffffff50);
    if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140e85f80(param_1,DAT_141a00c48,0x80000000,&local_88);
    uStack_8c = local_7c;
    uStack_90 = local_80;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
      local_98 = local_88;
    }
    else {
      FUN_1400419b0(&local_98,&local_88);
    }
    uStack_4c = 7;
    local_58 = (longlong *)CONCAT44(local_58._4_4_,100);
    FUN_1400460e0(&local_98,&local_58);
    if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    iVar2 = FUN_140e851f0(&local_78,&local_98,DAT_141955260,1);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if (iVar2 < 1) goto LAB_140ace3c2;
LAB_140ace4bd:
    local_38 = 0x1e;
    FUN_140edd0e0(param_1,param_2,0,0);
    local_38 = 0x1f;
  }
  else {
LAB_140ace3c2:
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
    uStack_4c = 0;
    local_58 = (longlong *)&DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(uVar5,&local_58,DAT_141955260,0);
    if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    if (iVar2 == 0) {
      uStack_4c = 6;
      local_58 = param_1;
      FUN_140e87440(&local_58,DAT_1419fe158,0x80000000,&local_78,
                    in_stack_ffffffffffffff48 & 0xffffffffffffff00,
                    in_stack_ffffffffffffff50 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_58);
      }
      uStack_4c = 0;
      local_58 = (longlong *)0xc059000000000000;
      iVar2 = FUN_140e851f0(&local_78,&local_58,DAT_141955260,1);
      if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_58);
      }
      if (iVar2 != -2 && iVar2 < 0) goto LAB_140ace4bd;
    }
    local_38 = 0x22;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
    FUN_140e63610(param_1,param_2,&local_a8,0,uVar5,0);
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
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

