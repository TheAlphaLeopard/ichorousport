// gml_Script_anon_1362____struct___702_gml_Object_oPlayerPause_Create_0 @ 0x140c874a0

undefined8 *
gml_Script_anon_1362____struct___702_gml_Object_oPlayerPause_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  ulonglong in_stack_ffffffffffffff18;
  ulonglong in_stack_ffffffffffffff20;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  longlong *local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  local_90 = "gml_Script_anon@708@___struct___702@gml_Object_oPlayerPause_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  uVar5 = 0xffffff;
  local_54 = 0xffffff;
  local_60 = (longlong *)0x0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x21;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8f18);
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  iVar1 = FUN_140e851f0(puVar4,uVar3,DAT_141955260,0);
  if (iVar1 == 0) {
    local_88 = 0x21;
    goto LAB_140c87a84;
  }
  local_88 = 0x22;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f8e98);
  uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_b0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_b8,puVar4);
  }
  uStack_cc = 7;
  local_d8 = (longlong *)CONCAT44(local_d8._4_4_,1);
  FUN_1400460e0(&local_b8,&local_d8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = local_b8;
  uStack_d0 = uStack_b0;
  uStack_cc = uStack_ac;
  FUN_140041b80(&local_60,&local_d8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_88 = 0x23;
  if (0 < param_4) {
    puVar6 = (undefined8 *)*param_5;
  }
  uStack_ac = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_b0 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = (longlong *)*puVar6;
  }
  else {
    FUN_1400419b0(&local_b8,puVar6);
  }
  FUN_1400462a0(&local_b8,uVar3);
  local_d8 = local_b8;
  uStack_d0 = uStack_b0;
  uStack_cc = uStack_ac;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_d8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  uVar5 = local_54;
  local_88 = 0x24;
  uStack_ac = local_54;
  uStack_b0 = local_58;
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) == 0) {
    local_b8 = local_60;
  }
  else {
    FUN_1400419b0(&local_b8,&local_60);
  }
  uStack_cc = 0;
  local_d8 = (longlong *)0x4000000000000000;
  FUN_140046500(&local_b8,&local_d8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((local_9c & 0xffffff) == 0) {
    uVar7 = (undefined4)local_a8;
  }
  else {
    uVar7 = FUN_140e4b060(&local_a8);
  }
  local_d8 = (longlong *)FUN_140e78d00(uVar7);
  uStack_cc = 0;
  iVar1 = FUN_140e851f0(&local_d8,&local_b8,DAT_141955260,1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (iVar1 < 1) {
    local_88 = 0x27;
    uStack_cc = 0;
    local_d8 = (longlong *)0x0;
    iVar1 = FUN_140e851f0(&local_a8,&local_d8,DAT_141955260,1);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_88 = 0x27;
    uVar2 = 1 << ((byte)local_bc & 0x1f);
    if (iVar1 < 1) {
      if ((uVar2 & 0x46) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      uStack_cc = 6;
      local_d8 = param_1;
      FUN_140e87440(&local_d8,DAT_1419f90e8,0x80000000,&local_70,
                    in_stack_ffffffffffffff18 & 0xffffffffffffff00,
                    in_stack_ffffffffffffff20 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      goto LAB_140c87a62;
    }
    if ((uVar2 & 0x46) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uStack_cc = 6;
    local_d8 = param_1;
    FUN_140e87440(&local_d8,DAT_1419f8ee8,0x80000000,&local_80,
                  in_stack_ffffffffffffff18 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff20 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    puVar6 = &local_80;
  }
  else {
    local_88 = 0x25;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f8f18);
    uStack_cc = 0;
    local_d8 = (longlong *)0x0;
    iVar1 = FUN_140e851f0(&local_a8,&local_d8,DAT_141955260,1);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_88 = 0x25;
    uVar2 = 1 << ((byte)local_bc & 0x1f);
    if (iVar1 < 1) {
      if ((uVar2 & 0x46) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      uStack_cc = 6;
      local_d8 = param_1;
      FUN_140e87440(&local_d8,DAT_1419f8ee8,0x80000000,&local_80,
                    in_stack_ffffffffffffff18 & 0xffffffffffffff00,
                    in_stack_ffffffffffffff20 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      puVar6 = &local_80;
    }
    else {
      if ((uVar2 & 0x46) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      uStack_cc = 6;
      local_d8 = param_1;
      FUN_140e87440(&local_d8,DAT_1419f90e8,0x80000000,&local_70,
                    in_stack_ffffffffffffff18 & 0xffffffffffffff00,
                    in_stack_ffffffffffffff20 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
LAB_140c87a62:
      puVar6 = &local_70;
    }
  }
  FUN_140e63610(param_1,param_2,&local_c8,0,puVar6,0);
LAB_140c87a84:
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

