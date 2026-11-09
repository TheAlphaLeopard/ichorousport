// gml_Script_anon_36590_DefineTrinkets_TRINKETSINIT @ 0x140612ef0

undefined8 *
gml_Script_anon_36590_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ulonglong uVar10;
  ulonglong in_stack_ffffffffffffff20;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 local_48 [12];
  byte local_3c;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_90 = "gml_Script_anon@36213@DefineTrinkets@TRINKETSINIT";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x511;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_58,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = (undefined1 *)0x0;
  local_5c = 0xffffff;
  local_68 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_6c = 0xffffff;
  local_78 = (undefined1 *)0x0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x512;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_d8,uVar10,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar10 >> 0x20);
  local_c8 = local_d8;
  uStack_c0 = uStack_d0;
  uStack_bc = uStack_cc;
  if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_48);
  }
  FUN_140041b80(local_48,&local_c8);
  local_30 = local_48;
  ppuVar11 = &local_30;
  uVar10 = CONCAT44(uVar2,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_b8,1,uVar10,ppuVar11);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_88 = 0x512;
    goto LAB_1406132d1;
  }
  local_88 = 0x513;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_d8,uVar10,uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_d8,DAT_1419f59d8,0x80000000,&local_68,uVar10,uVar12);
  FUN_140e87440(uVar4,DAT_1419f5c08,0x80000000,&local_78,uVar10 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  local_c8 = local_78;
  uStack_c0 = uStack_70;
  uStack_bc = uStack_6c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_c8);
  local_38 = local_58;
  switch(uStack_cc) {
  default:
switchD_140613175_caseD_1:
    puVar6 = (undefined1 *)0x0;
    break;
  case 6:
    puVar6 = local_d8;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_d8 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140613175_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_d8);
    puVar6 = (undefined1 *)FUN_140e87250(uVar2);
  }
  ppuVar11 = &local_38;
  puVar7 = &local_68;
  uVar4 = FUN_140e63610(puVar6,param_2,&local_b8,1,puVar7,ppuVar11);
  uStack_bc = 0;
  local_c8 = &DAT_bff0000000000000;
  iVar3 = FUN_140e851f0(uVar4,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar3 == 0) {
    local_88 = 0x513;
  }
  else {
    local_88 = 0x514;
    if (0 < param_4) {
      puVar8 = (undefined8 *)*param_5;
    }
    uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
    uVar10 = (ulonglong)puVar7 & 0xffffffffffffff00;
    FUN_140e87440(puVar8,DAT_141a1f440,0x80000000,&local_d8,uVar10,uVar12);
    FUN_140e87440(&local_d8,DAT_1419f62b8,0x80000000,&local_a8,uVar10 & 0xffffffffffffff00,
                  uVar12 & 0xffffffffffffff00);
    uStack_bc = 0;
    local_c8 = (undefined1 *)0x3ff8000000000000;
    FUN_140042560(&local_a8,&local_c8);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e87930(&local_d8,DAT_1419f62b8,0x80000000,&local_a8);
  }
LAB_1406132d1:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

