// gml_Script____struct___199_settings_setup_PauseMenuFunctions @ 0x140426350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___199_settings_setup_PauseMenuFunctions
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined8 **ppuVar11;
  ulonglong in_stack_fffffffffffffea0;
  ulonglong uVar12;
  undefined1 **ppuVar13;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  local_a0 = 
  "gml_Script_anon@7939@___struct___200@___struct___199@settings_setup@PauseMenuFunctions";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x14f;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = (undefined1 *)0x0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_11c = 0xffffff;
  local_128 = 0;
  local_5c = 0xffffff;
  local_68 = (undefined8 *)0x0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_13c = 0;
  local_148 = 0;
  local_34 = 0;
  local_40 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x150;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a46d68);
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_141a551b0,0x80000000,&local_e8,uVar10,in_stack_fffffffffffffea0);
  local_158 = (undefined1 *)CONCAT44(uRam0000000141dd2bfc,_DAT_141dd2bf8);
  uStack_150 = uRam0000000141dd2c00;
  uStack_14c = DAT_141dd2c04;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_58 = local_d8;
  FUN_140e87440(uVar5,DAT_141a453e8,0x80000000,&local_108,uVar10 & 0xffffffffffffff00,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  uVar4 = FUN_140069500(uVar4);
  ppuVar13 = &local_58;
  puVar6 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_40,1,&local_e8,ppuVar13);
  if (puVar6 != &local_c8) {
    local_158 = (undefined1 *)*puVar6;
    uStack_150 = *(undefined4 *)(puVar6 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_158);
  }
  local_50 = &local_c8;
  uStack_12c = local_fc;
  uStack_130 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_138 = local_108;
  }
  else {
    FUN_1400419b0(&local_138,&local_108);
  }
  uStack_14c = 7;
  local_158 = (undefined1 *)CONCAT44(local_158._4_4_,1);
  FUN_1400460e0(&local_138,&local_158);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_7c = 0;
  local_88 = (undefined1 *)0x3ff0000000000000;
  FUN_140046500(&local_88,&local_138);
  local_158 = local_88;
  uStack_150 = uStack_80;
  uStack_14c = uStack_7c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_158);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_48 = local_b8;
  ppuVar11 = &local_50;
  ppuVar7 = (undefined1 **)gml_Script_bm_string_width(param_1,param_2,&local_148,2,ppuVar11);
  if (ppuVar7 != &local_118) {
    local_158 = *ppuVar7;
    uStack_150 = *(undefined4 *)(ppuVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)ppuVar7 + 0xc);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  local_98 = 0x151;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6b28);
  uStack_14c = 0;
  local_158 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar4,&local_158,DAT_141955260,0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar1 == 0) goto LAB_140426854;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6b28);
  iVar1 = FUN_140e851f0(&local_118,uVar4,DAT_141955260,0);
  if (iVar1 == 0) goto LAB_140426854;
  local_98 = 0x152;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ef1f8,0x80000000,&local_128,uVar10,uVar12);
  FUN_140e87440(&local_128,DAT_1419f4a98,0x80000000,&local_68,uVar10 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  switch(local_11c) {
  default:
switchD_1404267fd_caseD_1:
    uVar3 = 0;
    break;
  case 6:
    uVar3 = local_128;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_128 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_1404267fd_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_128);
    uVar3 = FUN_140e87250(uVar2);
  }
  ppuVar13 = (undefined1 **)0x0;
  ppuVar11 = &local_68;
  FUN_140e63610(uVar3,param_2,&local_148,0,ppuVar11,0);
LAB_140426854:
  local_98 = 0x154;
  ppuVar7 = (undefined1 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6b28);
  FUN_140e609c0(param_1);
  if (&local_118 != ppuVar7) {
    local_158 = local_118;
    uStack_150 = uStack_110;
    uStack_14c = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar7);
    }
    FUN_140041b80(ppuVar7,&local_158);
  }
  FUN_140e60910(1);
  local_98 = 0x155;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  FUN_140e87440(uVar3,DAT_141a551b0,0x80000000,&local_e8,(ulonglong)ppuVar11 & 0xffffffffffffff00,
                (ulonglong)ppuVar13 & 0xffffffffffffff00);
  local_158 = (undefined1 *)CONCAT44(uRam0000000141dd2bfc,_DAT_141dd2bf8);
  uStack_150 = uRam0000000141dd2c00;
  uStack_14c = DAT_141dd2c04;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_58 = local_d8;
  uVar3 = FUN_140069500(uVar3);
  ppuVar13 = &local_58;
  puVar6 = &local_e8;
  puVar8 = (undefined8 *)FUN_140e63610(uVar3,param_2,&local_148,1,puVar6,ppuVar13);
  uStack_12c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_130 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar8;
  }
  else {
    FUN_1400419b0(&local_138,puVar8);
  }
  uVar2 = uStack_12c;
  local_158 = (undefined1 *)local_138;
  uStack_150 = uStack_130;
  uStack_14c = uStack_12c;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_158);
  if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_14c = 0xf;
  local_158 = (undefined1 *)0x100000000000058;
  FUN_140e87930(&local_158,DAT_1419ef168,0x80000000,&local_f8);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_98 = 0x156;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uStack_14c = 0xf;
  local_158 = (undefined1 *)0x100000000000058;
  uVar10 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_158,DAT_1419ef168,0x80000000,&local_78,uVar10,
                (ulonglong)ppuVar13 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = (undefined1 *)local_78;
  uStack_150 = uStack_70;
  uStack_14c = uStack_6c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_58 = local_d8;
  FUN_140e634e0(param_1,param_2,&local_148,1,CONCAT44(uVar2,DAT_1419f6af8),&local_58);
  if ((1 << ((byte)local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

