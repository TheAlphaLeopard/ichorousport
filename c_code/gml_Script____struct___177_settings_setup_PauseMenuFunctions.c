// gml_Script____struct___177_settings_setup_PauseMenuFunctions @ 0x140420970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___177_settings_setup_PauseMenuFunctions
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 **ppuVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined8 **ppuVar11;
  ulonglong in_stack_fffffffffffffeb0;
  ulonglong uVar12;
  undefined1 **ppuVar13;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [12];
  byte local_b4;
  undefined8 local_b0;
  byte local_a4;
  undefined1 local_a0 [12];
  byte local_94;
  undefined1 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  
  local_d0 = 
  "gml_Script_anon@4693@___struct___178@___struct___177@settings_setup@PauseMenuFunctions";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0xcd;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_c0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = (undefined1 *)0x0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_11c = 0xffffff;
  local_128 = 0;
  local_6c = 0xffffff;
  local_78 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef0e8);
  local_12c = 0;
  local_138 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0xce;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a46d68);
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_141a551b0,0x80000000,&local_e8,uVar10,in_stack_fffffffffffffeb0);
  local_148 = (undefined1 *)CONCAT44(uRam0000000141dd2bbc,_DAT_141dd2bb8);
  uStack_140 = uRam0000000141dd2bc0;
  uStack_13c = DAT_141dd2bc4;
  if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c0);
  }
  FUN_140041b80(local_c0,&local_148);
  local_58 = local_c0;
  FUN_140e87440(uVar6,DAT_141a453e8,0x80000000,&local_108,uVar10 & 0xffffffffffffff00,
                in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  uVar5 = FUN_140069500(uVar5);
  ppuVar13 = &local_58;
  puVar7 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_68,1,&local_e8,ppuVar13);
  if (puVar7 != &local_b0) {
    local_148 = (undefined1 *)*puVar7;
    uStack_140 = *(undefined4 *)(puVar7 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_148);
  }
  local_50 = &local_b0;
  local_ec = local_fc;
  local_f0 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_f8 = local_108;
  }
  else {
    FUN_1400419b0(&local_f8,&local_108);
  }
  uStack_13c = 7;
  local_148 = (undefined1 *)CONCAT44(local_148._4_4_,1);
  FUN_1400460e0(&local_f8,&local_148);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_7c = 0;
  local_88 = (undefined1 *)0x3ff0000000000000;
  FUN_140046500(&local_88,&local_f8);
  local_148 = local_88;
  uStack_140 = uStack_80;
  uStack_13c = uStack_7c;
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  FUN_140041b80(local_a0,&local_148);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_48 = local_a0;
  ppuVar11 = &local_50;
  ppuVar8 = (undefined1 **)gml_Script_bm_string_width(param_1,param_2,&local_138,2,ppuVar11);
  if (ppuVar8 != &local_118) {
    local_148 = *ppuVar8;
    uStack_140 = *(undefined4 *)(ppuVar8 + 1);
    uStack_13c = *(undefined4 *)((longlong)ppuVar8 + 0xc);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
  }
  local_c8 = 0xcf;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6a78);
  uStack_13c = 0;
  local_148 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar5,&local_148,DAT_141955260,0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar1 == 0) goto LAB_140420e71;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6a78);
  iVar1 = FUN_140e851f0(&local_118,uVar5,DAT_141955260,0);
  if (iVar1 == 0) goto LAB_140420e71;
  local_c8 = 0xd0;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ef1f8,0x80000000,&local_128,uVar10,uVar12);
  FUN_140e87440(&local_128,DAT_1419f4a98,0x80000000,&local_78,uVar10 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  switch(local_11c) {
  default:
switchD_140420e1a_caseD_1:
    uVar3 = 0;
    break;
  case 6:
    uVar3 = local_128;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_128 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140420e1a_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_128);
    uVar3 = FUN_140e87250(uVar2);
  }
  ppuVar13 = (undefined1 **)0x0;
  ppuVar11 = &local_78;
  FUN_140e63610(uVar3,param_2,&local_138,0,&local_78,0);
LAB_140420e71:
  local_c8 = 0xd2;
  ppuVar8 = (undefined1 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6a78);
  FUN_140e609c0(param_1);
  if (&local_118 != ppuVar8) {
    local_148 = local_118;
    uStack_140 = uStack_110;
    uStack_13c = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar8);
    }
    FUN_140041b80(ppuVar8,&local_148);
  }
  FUN_140e60910(1);
  local_c8 = 0xd3;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  FUN_140e87440(uVar3,DAT_141a551b0,0x80000000,&local_e8,(ulonglong)ppuVar11 & 0xffffffffffffff00,
                (ulonglong)ppuVar13 & 0xffffffffffffff00);
  local_148 = (undefined1 *)CONCAT44(uRam0000000141dd2bbc,_DAT_141dd2bb8);
  uStack_140 = uRam0000000141dd2bc0;
  uStack_13c = DAT_141dd2bc4;
  if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c0);
  }
  FUN_140041b80(local_c0,&local_148);
  local_58 = local_c0;
  FUN_140e609c0(DAT_141a729d8);
  uVar3 = FUN_140069500(uVar3);
  puVar7 = (undefined8 *)FUN_140e63610(uVar3,param_2,&local_138,1,&local_e8,&local_58);
  if (puVar7 != puVar4) {
    local_148 = (undefined1 *)*puVar7;
    uStack_140 = *(undefined4 *)(puVar7 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_148);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
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
  _eh_vector_destructor_iterator_(local_c0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

