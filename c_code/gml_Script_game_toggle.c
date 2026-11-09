// gml_Script_game_toggle @ 0x14041aa70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_game_toggle(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulonglong uVar9;
  ulonglong in_stack_ffffffffffffff00;
  undefined1 **ppuVar10;
  ulonglong uVar11;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_c0 = "gml_Script_bmm_sfx_hover_check";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x2e;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_68,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_94 = 0xffffff;
  local_a0 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_a4 = 0;
  local_b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x2f;
  uStack_ec = 6;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_141a0a828,0x80000000,&local_78,uVar9,
                in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = (longlong *)local_78;
  uStack_f0 = uStack_70;
  uStack_ec = uStack_6c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_f8);
  local_48 = local_68;
  local_f8 = (longlong *)CONCAT44(uRam0000000141dd2aec,_DAT_141dd2ae8);
  uStack_f0 = uRam0000000141dd2af0;
  uStack_ec = DAT_141dd2af4;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_f8);
  local_40 = local_58;
  ppuVar10 = &local_48;
  uVar9 = CONCAT44(uVar4,DAT_141a56cf0);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_b0,2,uVar9,ppuVar10);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_b8 = 0x30;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6748);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0xc000000000000000;
    local_b8 = 0x31;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6798);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0xc000000000000000;
    local_b8 = 0x32;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f69d8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0xc000000000000000;
    local_b8 = 0x33;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f68a8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0xc000000000000000;
  }
  local_b8 = 0x36;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a46af8);
  if (puVar7 != &local_e8) {
    local_f8 = (longlong *)*puVar7;
    uStack_f0 = *(undefined4 *)(puVar7 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_f8);
  }
  local_b8 = 0x37;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a46948);
  if (puVar7 != &local_d8) {
    local_f8 = (longlong *)*puVar7;
    uStack_f0 = *(undefined4 *)(puVar7 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_f8);
  }
  local_b8 = 0x39;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f69d8);
  iVar2 = FUN_140e851f0(&local_e8,uVar6,DAT_141955260,0);
  if (iVar2 != 0) goto LAB_14041b0c2;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f68a8);
  iVar2 = FUN_140e851f0(&local_d8,uVar6,DAT_141955260,0);
  if (iVar2 != 0) goto LAB_14041b0c2;
  local_b8 = 0x3a;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6748);
  iVar2 = FUN_140e851f0(&local_e8,uVar6,DAT_141955260,0);
  if (iVar2 == 0) {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6798);
    iVar2 = FUN_140e851f0(&local_d8,uVar6,DAT_141955260,0);
    if (iVar2 == 0) goto LAB_14041b0c2;
  }
  local_b8 = 0x3b;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6748);
  FUN_140e609c0(param_1);
  if (&local_e8 != puVar7) {
    local_f8 = (longlong *)local_e8;
    uStack_f0 = uStack_e0;
    uStack_ec = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_f8);
  }
  FUN_140e60910(1);
  local_b8 = 0x3c;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6798);
  FUN_140e609c0(param_1);
  if (&local_d8 != puVar7) {
    local_f8 = (longlong *)local_d8;
    uStack_f0 = uStack_d0;
    uStack_ec = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_f8);
  }
  FUN_140e60910(1);
  local_b8 = 0x3d;
  uStack_ec = 0;
  local_f8 = (longlong *)0x0;
  uVar3 = FUN_140e851f0(&local_e8,&local_f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (0x7fffffff < uVar3) goto LAB_14041b0c2;
  local_b8 = 0x3e;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 5;
  uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419ef2b8,0x80000000,&local_a0,uVar9,uVar11);
  FUN_140e87440(&local_a0,DAT_1419f4a98,0x80000000,&local_90,uVar9 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  switch(local_94) {
  default:
switchD_14041b06f_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_a0;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_a0 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14041b06f_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar4 = FUN_140e4a8b0(&local_a0);
    uVar5 = FUN_140e87250(uVar4);
  }
  FUN_140e63610(uVar5,param_2,&local_b0,0,&local_90,0);
LAB_14041b0c2:
  local_b8 = 0x43;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f69d8);
  FUN_140e609c0(param_1);
  if (&local_e8 != puVar7) {
    local_f8 = (longlong *)local_e8;
    uStack_f0 = uStack_e0;
    uStack_ec = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_f8);
  }
  FUN_140e60910(1);
  local_b8 = 0x44;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f68a8);
  FUN_140e609c0(param_1);
  if (&local_d8 != puVar7) {
    local_f8 = (longlong *)local_d8;
    uStack_f0 = uStack_d0;
    uStack_ec = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_f8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

