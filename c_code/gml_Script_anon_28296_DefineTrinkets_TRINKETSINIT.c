// gml_Script_anon_28296_DefineTrinkets_TRINKETSINIT @ 0x1406054f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_28296_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong in_stack_ffffffffffffff00;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  undefined1 *local_30;
  undefined1 *local_28 [2];
  
  local_60 = "gml_Script_anon@27741@DefineTrinkets@TRINKETSINIT";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x410;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = (undefined1 *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x411;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(param_5,DAT_141a1f440,0x80000000,&local_78,uVar6,in_stack_ffffffffffffff00);
  local_f8 = local_78;
  uStack_f0 = uStack_70;
  uStack_ec = uStack_6c;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_f8);
  local_58 = 0x412;
  ppuVar8 = (undefined1 **)(in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  puVar7 = (undefined8 *)(uVar6 & 0xffffffffffffff00);
  FUN_140e87440(&local_e8,DAT_1419ffb48,0x80000000,&local_88,puVar7,ppuVar8);
  cVar1 = FUN_140e491e0(&local_88);
  if (cVar1 != '\0') goto LAB_14060580d;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar6 = (ulonglong)puVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_e8,DAT_1419f59d8,0x80000000,&local_98,uVar6,uVar9);
  FUN_140e87440(uVar4,DAT_1419f6028,0x80000000,&local_a8,uVar6 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  local_f8 = (undefined1 *)local_a8;
  uStack_f0 = uStack_a0;
  uStack_ec = uStack_9c;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_f8);
  local_30 = local_50;
  switch(local_dc) {
  default:
switchD_14060575e_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_e8;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_e8 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_14060575e_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_e8);
    uVar4 = FUN_140e87250(uVar2);
  }
  ppuVar8 = &local_30;
  puVar7 = &local_98;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_c8,1,puVar7,ppuVar8);
  uStack_ec = 0;
  local_f8 = &DAT_bff0000000000000;
  iVar3 = FUN_140e851f0(uVar4,&local_f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (iVar3 != 0) {
LAB_14060580d:
    local_58 = 0x413;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uStack_ec = 0xf;
    local_f8 = (undefined1 *)0x100000000000106;
    FUN_140e87440(&local_f8,DAT_1419ffdb8,0x80000000,&local_b8,
                  (ulonglong)puVar7 & 0xffffffffffffff00,(ulonglong)ppuVar8 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = (undefined1 *)CONCAT44(uRam00000001419e6ac4,_DAT_1419e6ac0);
    uStack_f0 = uRam00000001419e6ac8;
    uStack_ec = uRam00000001419e6acc;
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_40);
    }
    FUN_140041b80(local_40,&local_f8);
    local_28[0] = local_40;
    uStack_ec = 0xf;
    local_f8 = (undefined1 *)0x100000000000106;
    uVar4 = FUN_140069500(&local_f8);
    FUN_140e63610(uVar4,param_2,&local_d8,1,&local_b8,local_28);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

