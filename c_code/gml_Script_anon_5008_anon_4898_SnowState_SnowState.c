// gml_Script_anon_5008_anon_4898_SnowState_SnowState @ 0x1404f51a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_5008_anon_4898_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  double *pdVar8;
  undefined8 *puVar9;
  double local_108;
  uint local_fc;
  undefined8 *local_f8;
  undefined8 *puStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 *local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined4 local_8c;
  undefined1 local_88 [12];
  undefined4 local_7c;
  double *local_68;
  undefined1 *local_60;
  undefined8 **local_58;
  
  local_c0 = "gml_Script_anon@4527@anon@4411@SnowState@SnowState";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x96;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = (undefined8 *)0x0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_dc = 0;
  local_e8 = 0;
  uStack_9c = 0;
  local_a8 = (undefined8 *)(double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x97;
  local_f8 = DAT_1419df7b0;
  puStack_f0 = (undefined8 *)_DAT_1419df7b8;
  FUN_140041b80(&local_d8,&local_f8);
  local_b8 = 0x98;
  puStack_f0 = (undefined8 *)((ulonglong)puStack_f0 & 0xffffffff);
  local_f8 = (undefined8 *)0x0;
  iVar1 = FUN_140e851f0(&local_a8,&local_f8,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)puStack_f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (0 < iVar1) {
    local_b8 = 0x99;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    puStack_f0 = (undefined8 *)CONCAT44(uStack_9c,uStack_a0);
    local_f8 = local_a8;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_f8);
    local_68 = &local_98;
    ppuVar5 = (undefined8 **)
              FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar3,DAT_1419fd218),&local_68);
    if (ppuVar5 != &local_d8) {
      local_f8 = *ppuVar5;
      puStack_f0 = ppuVar5[1];
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_f8);
    }
    local_b8 = 0x9a;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_fc = 0;
    local_108 = 0.0;
    iVar1 = FUN_140e4a740(&local_a8);
    while (0 < iVar1) {
      iVar1 = iVar1 + -1;
      local_b8 = 0x9b;
      iVar2 = FUN_140e4a740(&local_108);
      if (iVar2 < param_4) {
        puVar9 = *(undefined8 **)(param_5 + (longlong)iVar2 * 8);
      }
      else {
        puVar9 = &DAT_1419df7b0;
      }
      uVar3 = FUN_140e4a740(&local_108);
      puVar6 = (undefined8 *)FUN_140e48e40(&local_d8,uVar3);
      FUN_140e609c0(*local_d8);
      if (puVar9 != puVar6) {
        local_f8 = (undefined8 *)*puVar9;
        puStack_f0 = (undefined8 *)puVar9[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_f8);
      }
      FUN_140e60910(1);
      local_b8 = 0x9c;
      uVar4 = local_fc & 0xffffff;
      if (uVar4 == 0) {
LAB_1404f54de:
        local_108 = local_108 + 1.0;
      }
      else {
        if (uVar4 == 1) {
          local_108 = (double)FUN_140e4b060(&local_108);
          local_fc = 0;
          goto LAB_1404f54de;
        }
        if (uVar4 == 7) {
          local_108 = (double)CONCAT44(local_108._4_4_,local_108._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_108 = (double)((longlong)local_108 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_fc = 0;
            goto LAB_1404f54de;
          }
          FUN_140042910(&DAT_14172c3d8,&local_108,&local_108);
        }
      }
    }
  }
  local_b8 = 0x9f;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd48);
  pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd0e8);
  if (pdVar8 != &local_98) {
    local_f8 = (undefined8 *)*pdVar8;
    puStack_f0 = (undefined8 *)pdVar8[1];
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_f8);
  }
  local_68 = &local_98;
  local_f8 = DAT_1419df7b0;
  puStack_f0 = (undefined8 *)_DAT_1419df7b8;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_f8);
  local_60 = local_88;
  local_58 = &local_d8;
  FUN_140e63610(param_1,param_2,&local_e8,3,uVar7,&local_68);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

