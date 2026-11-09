// gml_Script_anon_27646_DefineBuffs_OFFERINGSINIT @ 0x1403e7f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_27646_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  double **ppdVar10;
  ulonglong uVar11;
  double local_138;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  longlong local_d0;
  int local_c4;
  double local_c0 [2];
  double local_b0 [2];
  undefined1 local_a0 [12];
  byte local_94;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  double *local_58;
  double *local_50;
  undefined1 *local_48;
  
  local_e0 = "gml_Script_anon@27190@DefineBuffs@OFFERINGSINIT";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x465;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_c0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_11c = 0;
  local_128 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x467;
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  if (pdVar6 != local_b0) {
    local_f8 = *pdVar6;
    dStack_f0 = pdVar6[1];
    if ((1 << ((byte)local_b0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b0);
    }
    FUN_140041b80(local_b0,&local_f8);
  }
  local_50 = local_b0;
  local_f8 = _DAT_141dd28d8;
  dStack_f0 = (double)uRam0000000141dd28e0;
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  FUN_140041b80(local_a0,&local_f8);
  local_48 = local_a0;
  ppdVar10 = &local_50;
  uVar9 = CONCAT44(uVar5,DAT_1419fcba8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_128,2,uVar9,ppdVar10);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 != '\0') {
    local_d8 = 0x468;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_12c = 0;
    local_138 = 0.0;
    bVar1 = true;
LAB_1403e8133:
    if (!bVar1) {
      local_d8 = 0x468;
      uVar3 = local_12c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_138 = (double)((longlong)local_138 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_12c = 0;
              goto LAB_1403e818d;
            }
            FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
          }
          goto LAB_1403e8197;
        }
        local_138 = (double)FUN_140e4b060(&local_138);
        local_12c = 0;
      }
LAB_1403e818d:
      local_138 = local_138 + 1.0;
    }
LAB_1403e8197:
    bVar1 = false;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uVar11 = (ulonglong)ppdVar10 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_1419f5e88,0x80000000,&local_d0,uVar9,uVar11);
    iVar4 = 0;
    if ((local_c4 == 2) && (local_d0 != 0)) {
      iVar4 = *(int *)(local_d0 + 0x24);
    }
    dStack_f0 = (double)((ulonglong)dStack_f0 & 0xffffffff);
    local_f8 = (double)iVar4;
    iVar4 = FUN_140e851f0(&local_138,&local_f8,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (iVar4 != -2 && iVar4 < 0) {
      local_d8 = 0x469;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      uVar5 = FUN_140e4a740(&local_138);
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(uVar7,DAT_1419f5e88,uVar5,&local_78,uVar9,uVar11 & 0xffffffffffffff00);
      uVar5 = (undefined4)(uVar9 >> 0x20);
      uStack_60 = CONCAT44(uStack_6c,uStack_70);
      local_68 = local_78;
      if ((1 << ((byte)local_c0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c0);
      }
      FUN_140041b80(local_c0,&local_68);
      local_58 = local_c0;
      ppdVar10 = &local_58;
      uVar9 = CONCAT44(uVar5,DAT_1419f59e8);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar9,ppdVar10);
      cVar2 = FUN_140e491e0(uVar7);
      if (cVar2 != '\0') {
        local_d8 = 0x46a;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
        uVar5 = FUN_140e4a740(&local_138);
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(uVar7,DAT_1419f5e88,uVar5,&local_88,uVar9,
                      (ulonglong)ppdVar10 & 0xffffffffffffff00);
        uVar5 = (undefined4)(uVar9 >> 0x20);
        uStack_60 = CONCAT44(uStack_7c,uStack_80);
        local_68 = local_88;
        if ((1 << ((byte)local_b0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b0);
        }
        FUN_140041b80(local_b0,&local_68);
        local_50 = local_b0;
        ppdVar10 = &local_50;
        uVar9 = CONCAT44(uVar5,DAT_1419f5968);
        FUN_140e634e0(param_1,param_2,&local_118,1,uVar9,ppdVar10);
      }
      goto LAB_1403e8133;
    }
  }
  local_d8 = 0x46c;
  puVar8 = (undefined8 *)FUN_140e8da20(&local_128,param_1,0);
  if (puVar8 != &local_108) {
    local_68 = *puVar8;
    uStack_60 = puVar8[1];
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_68);
  }
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87930(uVar7,DAT_1419f5e88,0x80000000,&local_108);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_c0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

