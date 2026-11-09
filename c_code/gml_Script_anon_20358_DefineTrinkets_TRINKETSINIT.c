// gml_Script_anon_20358_DefineTrinkets_TRINKETSINIT @ 0x1405f9f70

undefined8 *
gml_Script_anon_20358_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong in_stack_ffffffffffffff20;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [12];
  byte local_44;
  undefined1 *local_38 [2];
  
  local_80 = "gml_Script_anon@20168@DefineTrinkets@TRINKETSINIT";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x323;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_9c = 0xffffff;
  local_a8 = (undefined1 *)0x0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_64 = 0;
  local_70 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x324;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  FUN_140e87440(puVar4,DAT_141a1f440,0x80000000,&local_d8,uVar7,in_stack_ffffffffffffff20);
  in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_d8,DAT_1419f59d8,0x80000000,&local_98,uVar7,in_stack_ffffffffffffff20);
  FUN_140e87440(uVar3,DAT_1419f5f58,0x80000000,&local_a8,uVar7 & 0xffffffffffffff00,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  local_b8 = local_a8;
  uStack_b0 = uStack_a0;
  uStack_ac = uStack_9c;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_b8);
  local_38[0] = local_50;
  switch(local_cc) {
  default:
switchD_1405fa122_caseD_1:
    uVar3 = 0;
    break;
  case 6:
    uVar3 = local_d8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_d8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1405fa122_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar1 = FUN_140e4a8b0(&local_d8);
    uVar3 = FUN_140e87250(uVar1);
  }
  ppuVar8 = local_38;
  puVar4 = &local_98;
  uVar3 = FUN_140e63610(uVar3,param_2,&local_70,1,puVar4,ppuVar8);
  uStack_ac = 0;
  local_b8 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(uVar3,&local_b8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (iVar2 == 0) {
    local_78 = 0x324;
  }
  else {
    local_78 = 0x326;
    if (0 < param_4) {
      puVar5 = (undefined8 *)*param_5;
    }
    uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
    uVar7 = (ulonglong)puVar4 & 0xffffffffffffff00;
    FUN_140e87440(puVar5,DAT_141a1f440,0x80000000,&local_d8,uVar7,uVar9);
    FUN_140e87440(&local_d8,DAT_1419f62b8,0x80000000,&local_c8,uVar7 & 0xffffffffffffff00,
                  uVar9 & 0xffffffffffffff00);
    FUN_140162d40(&local_c8,8);
    FUN_140e87930(&local_d8,DAT_1419f62b8,0x80000000,&local_c8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

