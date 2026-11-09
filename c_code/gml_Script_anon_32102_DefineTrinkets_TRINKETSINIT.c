// gml_Script_anon_32102_DefineTrinkets_TRINKETSINIT @ 0x14060b4e0

undefined8 *
gml_Script_anon_32102_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *local_res18;
  undefined4 local_res20;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 **ppuVar7;
  ulonglong uVar8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  byte local_2c;
  
  local_res20 = 0;
  local_80 = "gml_Script_anon@31699@DefineTrinkets@TRINKETSINIT";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x482;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_38,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x483;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(param_5,DAT_141a1f440,0x80000000,&local_48,uVar6,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar6 >> 0x20);
  local_98 = (undefined4)local_48;
  uStack_94 = local_48._4_4_;
  uStack_90 = uStack_40;
  uStack_8c = uStack_3c;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_98);
  local_78 = 0x484;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_res18 = &local_b8;
  ppuVar7 = &local_res18;
  uVar6 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar6,ppuVar7);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_78 = 0x484;
    goto LAB_14060b91c;
  }
  local_78 = 0x485;
  uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_b8,DAT_141a56cd0,0x80000000,&local_60,uVar6,uVar8);
  uStack_bc = 10;
  local_c8 = 2;
  iVar2 = FUN_140e851f0(&local_60,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar2 == 0) {
    local_78 = 0x485;
    goto LAB_14060b91c;
  }
  local_78 = 0x487;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_b8,DAT_141a572d0,0x80000000,&local_d8,uVar6,uVar8);
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_d8,DAT_141a05098,0x80000000,&local_70,uVar6,uVar8);
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_b8,DAT_141a572d0,0x80000000,&local_d8,uVar6,uVar8);
  FUN_140e87440(&local_d8,DAT_1419f5fa8,0x80000000,&local_a8,uVar6 & 0xffffffffffffff00,
                uVar8 & 0xffffffffffffff00);
  uStack_bc = local_9c;
  uStack_c0 = local_a0;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_c8 = local_a8;
  }
  else {
    FUN_1400419b0(&local_c8,&local_a8);
  }
  local_res20 = 1;
  uStack_8c = 7;
  local_98 = 1;
  FUN_1400460e0(&local_c8,&local_98);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = (undefined4)local_c8;
  uStack_94 = local_c8._4_4_;
  uStack_90 = uStack_c0;
  uStack_8c = uStack_bc;
  if ((1 << (local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  FUN_140041b80(&local_38,&local_98);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_res18 = &local_38;
  uVar4 = 0;
  switch(local_cc) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_14060b8bf_caseD_0:
    uVar3 = FUN_140e4a8b0(&local_d8);
    uVar4 = FUN_140e87250(uVar3);
    break;
  case 6:
    uVar4 = local_d8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_d8 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_14060b8bf_caseD_0;
  }
  FUN_140e63610(uVar4,param_2,&local_e8,1,&local_70,&local_res18);
LAB_14060b91c:
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(&local_38,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

