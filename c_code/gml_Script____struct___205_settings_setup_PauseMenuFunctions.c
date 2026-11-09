// gml_Script____struct___205_settings_setup_PauseMenuFunctions @ 0x140428c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___205_settings_setup_PauseMenuFunctions
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
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  char *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_68 = 
  "gml_Script_anon@9334@___struct___206@___struct___205@settings_setup@PauseMenuFunctions";
  local_70 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_70;
  local_60 = 0x179;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_f8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_fc = 0xffffff;
  local_108 = (undefined1 *)0x0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_10c = 0xffffff;
  local_118 = 0;
  local_3c = 0xffffff;
  local_48 = (undefined8 *)0x0;
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_12c = 0;
  local_138 = 0;
  local_2c = 0;
  local_38 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_60 = 0x17a;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a46d68);
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_141a551b0,0x80000000,&local_a8,uVar10,in_stack_fffffffffffffeb0);
  local_148 = (undefined1 *)CONCAT44(uRam0000000141dd2c3c,_DAT_141dd2c38);
  uStack_140 = uRam0000000141dd2c40;
  uStack_13c = DAT_141dd2c44;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_148);
  local_88 = local_f8;
  FUN_140e87440(uVar5,DAT_141a453e8,0x80000000,&local_c8,uVar10 & 0xffffffffffffff00,
                in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  uVar4 = FUN_140069500(uVar4);
  ppuVar13 = &local_88;
  puVar6 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_38,1,&local_a8,ppuVar13);
  if (puVar6 != &local_e8) {
    local_148 = (undefined1 *)*puVar6;
    uStack_140 = *(undefined4 *)(puVar6 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_148);
  }
  local_80 = &local_e8;
  uStack_11c = local_bc;
  uStack_120 = local_c0;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_128 = local_c8;
  }
  else {
    FUN_1400419b0(&local_128,&local_c8);
  }
  uStack_13c = 7;
  local_148 = (undefined1 *)CONCAT44(local_148._4_4_,1);
  FUN_1400460e0(&local_128,&local_148);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_8c = 0;
  local_98 = (undefined1 *)0x3ff0000000000000;
  FUN_140046500(&local_98,&local_128);
  local_148 = local_98;
  uStack_140 = uStack_90;
  uStack_13c = uStack_8c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_78 = local_d8;
  ppuVar11 = &local_80;
  ppuVar7 = (undefined1 **)gml_Script_bm_string_width(param_1,param_2,&local_138,2,ppuVar11);
  if (ppuVar7 != &local_108) {
    local_148 = *ppuVar7;
    uStack_140 = *(undefined4 *)(ppuVar7 + 1);
    uStack_13c = *(undefined4 *)((longlong)ppuVar7 + 0xc);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
  }
  local_60 = 0x17b;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6b78);
  uStack_13c = 0;
  local_148 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar4,&local_148,DAT_141955260,0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar1 == 0) goto LAB_140429164;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6b78);
  iVar1 = FUN_140e851f0(&local_108,uVar4,DAT_141955260,0);
  if (iVar1 == 0) goto LAB_140429164;
  local_60 = 0x17c;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ef1f8,0x80000000,&local_118,uVar10,uVar12);
  FUN_140e87440(&local_118,DAT_1419f4a98,0x80000000,&local_48,uVar10 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  switch(local_10c) {
  default:
switchD_14042910d_caseD_1:
    uVar3 = 0;
    break;
  case 6:
    uVar3 = local_118;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_118 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14042910d_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_118);
    uVar3 = FUN_140e87250(uVar2);
  }
  ppuVar13 = (undefined1 **)0x0;
  ppuVar11 = &local_48;
  FUN_140e63610(uVar3,param_2,&local_138,0,ppuVar11,0);
LAB_140429164:
  local_60 = 0x17e;
  ppuVar7 = (undefined1 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6b78);
  FUN_140e609c0(param_1);
  if (&local_108 != ppuVar7) {
    local_148 = local_108;
    uStack_140 = uStack_100;
    uStack_13c = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar7);
    }
    FUN_140041b80(ppuVar7,&local_148);
  }
  FUN_140e60910(1);
  local_60 = 0x17f;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  FUN_140e87440(uVar3,DAT_141a551b0,0x80000000,&local_a8,(ulonglong)ppuVar11 & 0xffffffffffffff00,
                (ulonglong)ppuVar13 & 0xffffffffffffff00);
  local_148 = (undefined1 *)CONCAT44(uRam0000000141dd2c3c,_DAT_141dd2c38);
  uStack_140 = uRam0000000141dd2c40;
  uStack_13c = DAT_141dd2c44;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_148);
  local_88 = local_f8;
  uVar3 = FUN_140069500(uVar3);
  ppuVar13 = &local_88;
  puVar6 = &local_a8;
  puVar8 = (undefined8 *)FUN_140e63610(uVar3,param_2,&local_138,1,puVar6,ppuVar13);
  uStack_11c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_120 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *puVar8;
  }
  else {
    FUN_1400419b0(&local_128,puVar8);
  }
  uVar2 = uStack_11c;
  local_148 = (undefined1 *)local_128;
  uStack_140 = uStack_120;
  uStack_13c = uStack_11c;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_148);
  if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_13c = 0xf;
  local_148 = (undefined1 *)0x100000000000058;
  FUN_140e87930(&local_148,DAT_1419ef548,0x80000000,&local_b8);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_60 = 0x180;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_13c = 0xf;
  local_148 = (undefined1 *)0x100000000000058;
  uVar10 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_148,DAT_1419ef548,0x80000000,&local_58,uVar10,
                (ulonglong)ppuVar13 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = 0xf;
  local_148 = (undefined1 *)0x100000200000002;
  local_98 = (undefined1 *)0x100000200000002;
  uStack_90 = uStack_140;
  uStack_8c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_98);
  local_88 = local_f8;
  local_148 = (undefined1 *)local_58;
  uStack_140 = uStack_50;
  uStack_13c = uStack_4c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_148);
  local_80 = &local_e8;
  local_148 = (undefined1 *)CONCAT44(uRam0000000141dc6594,_DAT_141dc6590);
  uStack_140 = uRam0000000141dc6598;
  uStack_13c = uRam0000000141dc659c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_78 = local_d8;
  FUN_140e634e0(param_1,param_2,&local_138,3,CONCAT44(uVar2,DAT_1419f69e8),&local_88);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_70;
  return param_3;
}

