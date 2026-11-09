// gml_Script_anon_30265_DefineTrinkets_TRINKETSINIT @ 0x140608e20

undefined8 *
gml_Script_anon_30265_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_res18;
  undefined4 local_res20;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  byte local_3c;
  
  local_res20 = 0;
  local_90 = "gml_Script_anon@29992@DefineTrinkets@TRINKETSINIT";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x44a;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_48,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 1099;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_1419ffd58,0x80000000,&local_58,uVar8,in_stack_ffffffffffffff00);
  cVar1 = FUN_140e491e0(&local_58);
  if (cVar1 == '\0') {
    local_88 = 1099;
    goto LAB_140609230;
  }
  local_88 = 0x44d;
  if (0 < param_4) {
    puVar6 = (undefined8 *)*param_5;
  }
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a1f440,0x80000000,&local_68,uVar8,
                in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar8 >> 0x20);
  local_b8 = (undefined4)local_68;
  uStack_b4 = local_68._4_4_;
  uStack_b0 = uStack_60;
  uStack_ac = uStack_5c;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_b8);
  local_88 = 0x44e;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  local_res18 = &local_d8;
  ppuVar9 = &local_res18;
  uVar8 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar8,ppuVar9);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_88 = 0x44e;
    goto LAB_140609230;
  }
  local_88 = 0x450;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_d8,DAT_141a572d0,0x80000000,&local_e8,uVar8,uVar10);
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_e8,DAT_141a05098,0x80000000,&local_80,uVar8,uVar10);
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_d8,DAT_141a572d0,0x80000000,&local_e8,uVar8,uVar10);
  FUN_140e87440(&local_e8,DAT_1419f5fa8,0x80000000,&local_c8,uVar8 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  uStack_9c = local_bc;
  uStack_a0 = local_c0;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_a8 = local_c8;
  }
  else {
    FUN_1400419b0(&local_a8,&local_c8);
  }
  local_res20 = 1;
  uStack_ac = 7;
  local_b8 = 1;
  FUN_1400460e0(&local_a8,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (undefined4)local_a8;
  uStack_b4 = local_a8._4_4_;
  uStack_b0 = uStack_a0;
  uStack_ac = uStack_9c;
  if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140041b80(&local_48,&local_b8);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_res18 = &local_48;
  uVar4 = 0;
  switch(local_dc) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_1406091d3_caseD_0:
    uVar3 = FUN_140e4a8b0(&local_e8);
    uVar4 = FUN_140e87250(uVar3);
    break;
  case 6:
    uVar4 = local_e8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_e8 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_1406091d3_caseD_0;
  }
  FUN_140e63610(uVar4,param_2,&local_f8,1,&local_80,&local_res18);
LAB_140609230:
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_48,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

