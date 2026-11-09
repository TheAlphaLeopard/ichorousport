// gml_Script_rolled_list @ 0x1405e0150

undefined8 *
gml_Script_rolled_list
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 uVar12;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 **ppuVar13;
  double local_108;
  uint local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8 [2];
  undefined8 local_a8 [4];
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  double *local_50;
  
  local_70 = "gml_Script_anon@2483@add_trinket@TRINKETSINIT";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x4b;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0.0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))();
  local_dc = 0xffffff;
  local_e8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_ec = 0;
  uVar7 = 0;
  uVar8 = 0;
  local_f8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x4c;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0.0;
  bVar1 = true;
  do {
    uVar12 = (undefined4)((ulonglong)pcVar9 >> 0x20);
    if (!bVar1) {
      local_68 = 0x4c;
      uVar2 = local_fc & 0xffffff;
      if ((local_fc & 0xffffff) == 0) {
LAB_1405e02ce:
        local_108 = (double)CONCAT44(uVar8,uVar7) + 1.0;
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
          goto LAB_1405e02ce;
        }
        FUN_140042910(&DAT_14172c3d8,&local_108,&local_108);
      }
    }
    bVar1 = false;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if (puVar4 != local_b8) {
      local_c8 = *(undefined4 *)puVar4;
      uStack_c4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_c0 = *(undefined4 *)(puVar4 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_c8);
    }
    local_60 = local_b8;
    uVar10 = CONCAT44(uVar12,DAT_1419f5e98);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar10,&local_60);
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    iVar3 = FUN_140e851f0(&local_108,uVar5,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) {
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      _eh_vector_destructor_iterator_(local_b8,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_78;
      return param_3;
    }
    local_68 = 0x4d;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if (puVar4 != local_a8) {
      local_c8 = *(undefined4 *)puVar4;
      uStack_c4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_c0 = *(undefined4 *)(puVar4 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_c8);
    }
    local_58 = local_a8;
    local_50 = &local_108;
    ppuVar13 = &local_58;
    uVar11 = CONCAT44(uVar7,DAT_1419f5a78);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,2,uVar11,ppuVar13);
    if (puVar6 != &local_e8) {
      local_c8 = *(undefined4 *)puVar6;
      uStack_c4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_c0 = *(undefined4 *)(puVar6 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_c8);
    }
    local_68 = 0x4e;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    FUN_140e87440(&local_e8,DAT_1419f5858,0x80000000,&local_88,uVar11 & 0xffffffffffffff00,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00);
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
LAB_1405e0519:
      local_c8 = *(undefined4 *)puVar6;
      uStack_c4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_c0 = *(undefined4 *)(puVar6 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_c8);
    }
    else {
      puVar6 = (undefined8 *)*param_5;
      if (puVar6 != local_b8) goto LAB_1405e0519;
    }
    local_60 = local_b8;
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_1405e056a:
      local_c8 = *(undefined4 *)puVar6;
      uStack_c4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_c0 = *(undefined4 *)(puVar6 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_c8);
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
      if (puVar6 != local_a8) goto LAB_1405e056a;
    }
    local_58 = local_a8;
    switch(local_dc) {
    default:
switchD_1405e05ba_caseD_1:
      uVar5 = 0;
      break;
    case 6:
      uVar5 = local_e8;
      break;
    case 0xf:
      iVar3 = (int)((ulonglong)local_e8 >> 0x20);
      if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_1405e05ba_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar7 = FUN_140e4a8b0(&local_e8);
      uVar5 = FUN_140e87250(uVar7);
    }
    pcVar9 = (code *)&local_88;
    FUN_140e63610(uVar5,param_2,&local_f8,2,pcVar9,&local_60);
    uVar7 = SUB84(local_108,0);
    uVar8 = (undefined4)((ulonglong)local_108 >> 0x20);
  } while( true );
}

