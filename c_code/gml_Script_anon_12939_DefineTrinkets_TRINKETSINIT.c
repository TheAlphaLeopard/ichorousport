// gml_Script_anon_12939_DefineTrinkets_TRINKETSINIT @ 0x1405f0aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_12939_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffe90;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  double local_168;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  longlong local_148;
  undefined4 uStack_140;
  int iStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [16];
  undefined1 *local_78;
  double *local_70;
  undefined1 *local_68;
  
  local_110 = "gml_Script_anon@13790@DefineTrinkets@TRINKETSINIT";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x222;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  iStack_13c = 0xffffff;
  local_148 = 0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x223;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  ppuVar9 = (undefined1 **)(in_stack_fffffffffffffe90 & 0xffffffffffffff00);
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f6058,0x80000000,&local_148,uVar8,ppuVar9);
  iVar4 = 0;
  if ((iStack_13c == 2) && (local_148 != 0)) {
    iVar4 = *(int *)(local_148 + 0x24);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 0;
  local_168 = (double)(iVar4 + -1);
  bVar1 = true;
  do {
    if (!bVar1) {
      local_108 = 0x223;
      uVar2 = local_15c & 0xffffff;
      if (uVar2 == 0) {
LAB_1405f0c8b:
        local_168 = local_168 + -1.0;
      }
      else if (uVar2 == 1) {
        local_168 = (double)FUN_140e4b060(&local_168);
        local_168 = local_168 - 1.0;
        local_15c = 0;
      }
      else if (uVar2 == 7) {
        local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + -1);
      }
      else if (uVar2 == 10) {
        local_168 = (double)((longlong)local_168 + -1);
      }
      else {
        if (uVar2 == 0xd) {
          local_15c = 0;
          goto LAB_1405f0c8b;
        }
        FUN_140042910(&DAT_14172c450,&local_168,&local_168);
      }
    }
    bVar1 = false;
    local_d4 = 0;
    local_e0 = 0;
    uVar2 = FUN_140e851f0(&local_168,&local_e0,DAT_141955260,1);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    if (0x7fffffff < uVar2) {
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)iStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      _eh_vector_destructor_iterator_(local_a8,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_118;
      return param_3;
    }
    local_108 = 0x224;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uVar3 = FUN_140e4a740(&local_168);
    uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419f6058,uVar3,&local_128,uVar8,uVar10);
    uVar10 = uVar10 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_128,DAT_1419f5838,0x80000000,&local_138,uVar8,uVar10);
    FUN_1400462a0(&local_138,uVar5);
    FUN_140e87930(&local_128,DAT_1419f5838,0x80000000,&local_138);
    local_108 = 0x225;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uVar3 = FUN_140e4a740(&local_168);
    uVar10 = uVar10 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419f6058,uVar3,&local_f0,uVar8,uVar10);
    ppuVar9 = (undefined1 **)(uVar10 & 0xffffffffffffff00);
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_f0,DAT_1419f5838,0x80000000,&local_100,uVar8,ppuVar9);
    local_c4 = 0;
    local_d0 = 0;
    iVar4 = FUN_140e851f0(&local_100,&local_d0,DAT_141955260,1);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    if (iVar4 != -2 && iVar4 < 1) {
      local_108 = 0x226;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_1419f6058,0x80000000,&local_148,uVar8,
                    (ulonglong)ppuVar9 & 0xffffffffffffff00);
      uVar3 = (undefined4)(uVar8 >> 0x20);
      uStack_b0 = CONCAT44(iStack_13c,uStack_140);
      local_b8 = local_148;
      if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_b8);
      local_78 = local_a8;
      local_70 = &local_168;
      local_b8 = _DAT_1419e6aa0;
      uStack_b0 = uRam00000001419e6aa8;
      if ((1 << (local_88[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_b8);
      local_68 = local_88;
      ppuVar9 = &local_78;
      uVar8 = CONCAT44(uVar3,DAT_1419fd808);
      FUN_140e634e0(param_1,param_2,&local_158,3,uVar8,ppuVar9);
    }
  } while( true );
}

