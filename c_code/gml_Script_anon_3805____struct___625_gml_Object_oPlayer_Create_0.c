// gml_Script_anon_3805____struct___625_gml_Object_oPlayer_Create_0 @ 0x140bed930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_3805____struct___625_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffef0;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  byte local_74;
  undefined8 local_60;
  byte local_54;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40 [3];
  
  local_b0 = "gml_Script_anon@18945@___struct___624@gml_Object_oPlayer_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x3b4;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_84 = 0xffffff;
  local_90 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x3b6;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar4,DAT_1419f5df8,0x80000000,&local_90,(ulonglong)pcVar6 & 0xffffffffffffff00,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar4 = FUN_140069500(uVar4);
  uVar9 = 0;
  puVar7 = &local_90;
  puVar5 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_f8,0,puVar7,0);
  if (puVar5 != &local_d8) {
    local_108 = *puVar5;
    uStack_100 = *(undefined4 *)(puVar5 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_108);
  }
  local_a8 = 0x3b8;
  uStack_fc = DAT_141dda754;
  uStack_100 = DAT_141dda750;
  if ((1 << ((byte)DAT_141dda754 & 0x1f) & 0x46U) == 0) {
    local_108 = DAT_141dda748;
  }
  else {
    FUN_1400419b0(&local_108,&DAT_141dda748);
  }
  iVar2 = FUN_140e851f0(&local_d8,&local_108,DAT_141955260,0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uVar3 = 1 << ((byte)local_ec & 0x1f);
  if (iVar2 != 0) {
    local_a8 = 0x3c0;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_f8);
    }
    uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20);
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_108 = CONCAT44(uRam0000000141dda6fc,_DAT_141dda6f8);
    uStack_100 = uRam0000000141dda700;
    uStack_fc = DAT_141dda704;
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_108);
    local_50 = &local_80;
    local_48 = &local_d8;
    ppuVar10 = &local_50;
    uVar9 = CONCAT44(uVar8,DAT_141a02d88);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_f8,2,uVar9,ppuVar10);
    uStack_fc = 0;
    local_108 = 0;
    iVar2 = FUN_140e851f0(uVar4,&local_108,DAT_141955260,0);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if (iVar2 != 0) goto LAB_140bede8a;
    local_a8 = 0x3c2;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_c8,uVar9 & 0xffffffffffffff00,
                  (ulonglong)ppuVar10 & 0xffffffffffffff00);
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
LAB_140bede26:
      local_108 = *param_5;
      uStack_100 = *(undefined4 *)(param_5 + 1);
      uStack_fc = *(undefined4 *)((longlong)param_5 + 0xc);
      if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_60);
      }
      FUN_140041b80(&local_60,&local_108);
    }
    else {
      param_5 = (undefined8 *)*param_5;
      if (param_5 != &local_60) goto LAB_140bede26;
    }
    local_40[0] = &local_60;
    uVar4 = FUN_140069500(uVar4);
    FUN_140e63610(uVar4,param_2,&local_e8,1,&local_c8,local_40);
    goto LAB_140bede8a;
  }
  local_a8 = 0x3bb;
  if ((uVar3 & 0x46) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f7c18);
  FUN_140e87440(uVar4,DAT_141a0aa58,0x80000000,&local_a0,(ulonglong)puVar7 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  uVar4 = FUN_140069500(uVar4);
  uVar9 = 0;
  puVar7 = &local_a0;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_f8,0,puVar7,0);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_a8 = 0x3bc;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_c8,(ulonglong)puVar7 & 0xffffffffffffff00,
                  uVar9 & 0xffffffffffffff00);
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
LAB_140bedc56:
      local_108 = *param_5;
      uStack_100 = *(undefined4 *)(param_5 + 1);
      uStack_fc = *(undefined4 *)((longlong)param_5 + 0xc);
      if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      FUN_140041b80(&local_80,&local_108);
    }
    else {
      param_5 = (undefined8 *)*param_5;
      if (param_5 != &local_80) goto LAB_140bedc56;
    }
    local_50 = &local_80;
    uVar4 = FUN_140069500(uVar4);
    FUN_140e63610(uVar4,param_2,&local_e8,1,&local_c8,&local_50);
  }
  local_a8 = 0x3bd;
LAB_140bede8a:
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(&local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

