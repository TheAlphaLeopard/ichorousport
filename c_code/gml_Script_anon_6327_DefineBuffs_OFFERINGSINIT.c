// gml_Script_anon_6327_DefineBuffs_OFFERINGSINIT @ 0x1403c5ac0

undefined8 *
gml_Script_anon_6327_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar11;
  ulonglong uVar10;
  undefined8 **ppuVar12;
  double local_108;
  uint local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8 [2];
  undefined8 local_a8 [2];
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 *local_60;
  double *local_58;
  undefined8 *local_50 [5];
  
  local_80 = "gml_Script_anon@5864@add_offering@OFFERINGSINIT";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0xd9;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57cf0);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_ec = 0;
  uVar8 = 0;
  uVar9 = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xdb;
  if (puVar4 != &local_98) {
    local_d8 = *(undefined4 *)puVar4;
    uStack_d4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_d0 = *(undefined4 *)(puVar4 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_d8);
  }
  local_50[0] = &local_98;
  puVar6 = (undefined8 *)CONCAT44(uVar11,DAT_1419f5e98);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,1,puVar6,local_50);
  if (puVar5 != &local_c8) {
    local_d8 = *(undefined4 *)puVar5;
    uStack_d4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_d0 = *(undefined4 *)(puVar5 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_d8);
  }
  local_78 = 0xde;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0.0;
  bVar1 = true;
  do {
    uVar11 = (undefined4)((ulonglong)puVar6 >> 0x20);
    if (!bVar1) {
      local_78 = 0xde;
      uVar2 = local_fc & 0xffffff;
      if (uVar2 == 0) {
LAB_1403c5ce2:
        local_108 = (double)CONCAT44(uVar9,uVar8) + 1.0;
      }
      else if (uVar2 == 1) {
        local_108 = (double)FUN_140e4b060(&local_108);
        local_108 = local_108 + 1.0;
        local_fc = 0;
      }
      else if (uVar2 == 7) {
        local_108 = (double)CONCAT44(local_108._4_4_,local_108._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_108 = (double)((longlong)local_108 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_fc = 0;
          goto LAB_1403c5ce2;
        }
        FUN_140042910(&DAT_14172c3d8,&local_108,&local_108);
      }
    }
    bVar1 = false;
    iVar3 = FUN_140e851f0(&local_108,&local_c8,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) {
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      _eh_vector_destructor_iterator_(local_b8,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_88;
      return param_3;
    }
    local_78 = 0xdf;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if (puVar4 != local_b8) {
      local_d8 = *(undefined4 *)puVar4;
      uStack_d4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_d0 = *(undefined4 *)(puVar4 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_d8);
    }
    local_60 = local_b8;
    local_58 = &local_108;
    ppuVar12 = &local_60;
    uVar10 = CONCAT44(uVar11,DAT_1419f5a78);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar10,ppuVar12);
    if (puVar6 != &local_e8) {
      local_d8 = *(undefined4 *)puVar6;
      uStack_d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_d0 = *(undefined4 *)(puVar6 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_d8);
    }
    local_78 = 0xe0;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    FUN_140e87440(&local_e8,DAT_1419f61f8,0x80000000,&local_70,uVar10 & 0xffffffffffffff00,
                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
LAB_1403c5ea0:
      local_d8 = *(undefined4 *)puVar6;
      uStack_d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_d0 = *(undefined4 *)(puVar6 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_d8);
    }
    else {
      puVar6 = (undefined8 *)*param_5;
      if (puVar6 != local_b8) goto LAB_1403c5ea0;
    }
    local_60 = local_b8;
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_1403c5ef1:
      local_d8 = *(undefined4 *)puVar6;
      uStack_d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_d0 = *(undefined4 *)(puVar6 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_d8);
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
      if (puVar6 != local_a8) goto LAB_1403c5ef1;
    }
    local_58 = (double *)local_a8;
    switch(local_dc) {
    default:
switchD_1403c5f41_caseD_1:
      uVar7 = 0;
      break;
    case 6:
      uVar7 = local_e8;
      break;
    case 0xf:
      iVar3 = (int)((ulonglong)local_e8 >> 0x20);
      if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_1403c5f41_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar8 = FUN_140e4a8b0(&local_e8);
      uVar7 = FUN_140e87250(uVar8);
    }
    puVar6 = &local_70;
    FUN_140e63610(uVar7,param_2,&local_f8,2,puVar6,&local_60);
    uVar8 = SUB84(local_108,0);
    uVar9 = (undefined4)((ulonglong)local_108 >> 0x20);
  } while( true );
}

