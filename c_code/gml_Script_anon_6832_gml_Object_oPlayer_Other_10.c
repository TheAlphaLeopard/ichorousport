// gml_Script_anon_6832_gml_Object_oPlayer_Other_10 @ 0x140c6a430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_6832_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined8 *local_60;
  undefined1 *local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_b0 = "gml_Script_anon@6284@gml_Object_oPlayer_Other_10";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x100;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x101;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f7b98);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_a8 = 0x103;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
    in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
    uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_e8,uVar7,in_stack_ffffffffffffff00);
    FUN_140e87440(&local_e8,DAT_141a55540,0x80000000,&local_90,uVar7 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff00 & 0xffffffffffffff00);
    local_c8 = CONCAT44(uRam0000000141ddaabc,_DAT_141ddaab8);
    uStack_c0 = uRam0000000141ddaac0;
    uStack_bc = DAT_141ddaac4;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_c8);
    local_58[0] = local_70;
    uVar4 = 0;
    switch(local_dc) {
    case 0:
    case 7:
    case 10:
    case 0xd:
switchD_140c6a5ff_caseD_0:
      uVar3 = FUN_140e4a8b0(&local_e8);
      uVar4 = FUN_140e87250(uVar3);
      break;
    case 6:
      uVar4 = local_e8;
      break;
    case 0xf:
      iVar2 = (int)((ulonglong)local_e8 >> 0x20);
      if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_140c6a5ff_caseD_0;
    }
    FUN_140e63610(uVar4,param_2,&local_f8,1,&local_90,local_58);
    local_a8 = 0x104;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f8388);
    if (puVar5 != &local_d8) {
      local_c8 = *puVar5;
      uStack_c0 = *(undefined4 *)(puVar5 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_c8);
    }
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
    FUN_140e86c30(uVar4,DAT_141a0cfc8,0x80000000,&local_d8);
    local_a8 = 0x105;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7b98);
    uStack_bc = 0xd;
    local_c8 = 0;
    if (&local_c8 != puVar5) {
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = uStack_c0;
      uStack_3c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_48);
    }
    local_a8 = 0x106;
    goto LAB_140c6a80e;
  }
  local_a8 = 0x109;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e87440(uVar4,DAT_1419f7b28,0x80000000,&local_a0,(ulonglong)pcVar6 & 0xffffffffffffff00,
                in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
LAB_140c6a7ad:
    local_48 = *(undefined4 *)param_5;
    uStack_44 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_40 = *(undefined4 *)(param_5 + 1);
    uStack_3c = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_48);
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 != &local_80) goto LAB_140c6a7ad;
  }
  local_60 = &local_80;
  uVar4 = FUN_140069500(uVar4);
  FUN_140e63610(uVar4,param_2,&local_f8,1,&local_a0,&local_60);
LAB_140c6a80e:
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
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
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_80,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

