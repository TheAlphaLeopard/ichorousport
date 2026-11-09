// gml_Script_anon_30400_DefineBuffs_OFFERINGSINIT @ 0x1403ea280

undefined8 *
gml_Script_anon_30400_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong in_stack_ffffffffffffff48;
  ulonglong uVar6;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
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
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@28808@DefineBuffs@OFFERINGSINIT";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x4a6;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 & 0xffffffffffffff00;
  in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a58110,0x80000000,&local_68,in_stack_ffffffffffffff48,
                in_stack_ffffffffffffff50);
  cVar1 = FUN_140e491e0(&local_68);
  if (cVar1 == '\0') {
    local_38 = 0x4a6;
  }
  else {
    local_38 = 0x4a7;
    puVar5 = &DAT_1419df7b0;
    if (param_4 < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = *(undefined8 **)(param_5 + 8);
    }
    FUN_140e87440(puVar4,DAT_141a1f4e0,0x80000000,&local_78,
                  in_stack_ffffffffffffff48 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff50 & 0xffffffffffffff00);
    local_4c = 0xf;
    local_58 = 0x1000000000000ee;
    FUN_140e87170(&local_58,DAT_141a0a828,0x80000000,&local_88,param_1,param_2);
    if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    iVar2 = FUN_140e851f0(&local_78,&local_88,DAT_141955260,0);
    if (iVar2 == 0) {
      local_38 = 0x4a9;
      if (1 < param_4) {
        puVar5 = *(undefined8 **)(param_5 + 8);
      }
      param_2 = param_2 & 0xffffffffffffff00;
      uVar6 = (ulonglong)param_1 & 0xffffffffffffff00;
      FUN_140e87440(puVar5,DAT_141a1f440,0x80000000,&local_98,uVar6,param_2);
      FUN_140e87440(&local_98,DAT_1419f62b8,0x80000000,&local_a8,uVar6 & 0xffffffffffffff00,
                    param_2 & 0xffffffffffffff00);
      local_4c = 0;
      local_58 = 0x3feb333333333333;
      FUN_140042560(&local_a8,&local_58);
      if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_58);
      }
      FUN_140e87930(&local_98,DAT_1419f62b8,0x80000000,&local_a8);
    }
    else {
      local_38 = 0x4a7;
    }
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
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
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

