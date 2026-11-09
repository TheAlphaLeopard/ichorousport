// gml_Script_anon_23387_DefineBuffs_OFFERINGSINIT @ 0x1403e06d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_23387_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong in_stack_ffffffffffffff00;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  double local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [12];
  byte local_44;
  undefined1 *local_30;
  
  local_80 = "gml_Script_anon@23125@DefineBuffs@OFFERINGSINIT";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x3ce;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x3d0;
  if (param_4 < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = *(undefined8 **)(param_5 + 8);
  }
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a1f440,0x80000000,&local_98,uVar8,in_stack_ffffffffffffff00);
  ppuVar9 = (undefined1 **)(in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  puVar6 = (undefined8 *)(uVar8 & 0xffffffffffffff00);
  FUN_140e87440(&local_98,DAT_141a57c50,0x80000000,&local_a8,puVar6,ppuVar9);
  uStack_dc = 10;
  local_e8 = 0;
  iVar2 = FUN_140e851f0(&local_a8,&local_e8,DAT_141955260,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (iVar2 != 0) goto LAB_1403e09ba;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uStack_dc = 0xf;
  local_e8 = 0x1000000000000ee;
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar8 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_e8,DAT_1419f5868,0x80000000,&local_d8,uVar8,uVar10);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e87440(&local_d8,DAT_1419f5848,0x80000000,&local_b8,uVar8 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  local_e8 = CONCAT44(uRam0000000141dd289c,_DAT_141dd2898);
  uStack_e0 = uRam0000000141dd28a0;
  uStack_dc = DAT_141dd28a4;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_e8);
  local_30 = local_50;
  switch(local_cc) {
  default:
switchD_1403e0948_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_d8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_d8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1403e0948_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_d8);
    uVar4 = FUN_140e87250(uVar3);
  }
  ppuVar9 = &local_30;
  puVar6 = &local_b8;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_c8,1,puVar6,ppuVar9);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_78 = 0x3d0;
    goto LAB_1403e0a6d;
  }
LAB_1403e09ba:
  local_78 = 0x3d2;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar4,DAT_1419f5c38,0x80000000,&local_f8,(ulonglong)puVar6 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  uVar5 = local_ec & 0xffffff;
  if (uVar5 == 0) {
LAB_1403e0a45:
    local_f8 = local_f8 + 1.0;
  }
  else {
    if (uVar5 == 1) {
      local_f8 = (double)FUN_140e4b060(&local_f8);
      local_ec = 0;
      goto LAB_1403e0a45;
    }
    if (uVar5 == 7) {
      local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + 1);
    }
    else if (uVar5 == 10) {
      local_f8 = (double)((longlong)local_f8 + 1);
    }
    else {
      if (uVar5 == 0xd) {
        local_ec = 0;
        goto LAB_1403e0a45;
      }
      FUN_140042910(&DAT_14172c3d8,&local_f8,&local_f8);
    }
  }
  FUN_140e87930(uVar4,DAT_1419f5c38,0x80000000,&local_f8);
LAB_1403e0a6d:
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

