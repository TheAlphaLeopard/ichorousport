// gml_Script_anon_15462_gml_Object_oEntity_Create_0 @ 0x140abbf90

undefined8 *
gml_Script_anon_15462_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar9;
  double dVar8;
  code *pcVar10;
  undefined4 uVar13;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined4 **ppuVar14;
  double local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined4 local_80 [4];
  undefined4 local_70 [8];
  undefined4 *local_50;
  undefined4 *local_48;
  double *local_40;
  
  local_a0 = "gml_Script_anon@15241@gml_Object_oEntity_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x2c5;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_bc = 0;
  uVar7 = 0;
  uVar9 = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x2c7;
  local_ec = 0;
  local_f8 = 0.0;
  bVar1 = true;
  do {
    uVar13 = (undefined4)((ulonglong)pcVar10 >> 0x20);
    if (!bVar1) {
      local_98 = 0x2c7;
      uVar2 = local_ec & 0xffffff;
      dVar8 = (double)CONCAT44(uVar9,uVar7);
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          if (uVar2 == 7) {
            local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + 1);
          }
          else if (uVar2 == 10) {
            local_f8 = (double)((longlong)local_f8 + 1);
          }
          else {
            if (uVar2 == 0xd) {
              local_ec = 0;
              dVar8 = (double)CONCAT44(uVar9,uVar7);
              goto LAB_140abc0d3;
            }
            FUN_140042910(&DAT_14172c3d8,&local_f8,&local_f8);
          }
          goto LAB_140abc0dd;
        }
        dVar8 = (double)FUN_140e4b060(&local_f8);
        local_ec = 0;
      }
LAB_140abc0d3:
      local_f8 = dVar8 + 1.0;
    }
LAB_140abc0dd:
    bVar1 = false;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5b68);
    if (puVar4 != local_80) {
      local_b8 = *puVar4;
      uStack_b4 = puVar4[1];
      uStack_b0 = puVar4[2];
      uStack_ac = puVar4[3];
      if ((1 << ((byte)local_80[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_80);
      }
      FUN_140041b80(local_80,&local_b8);
    }
    local_50 = local_80;
    uVar11 = CONCAT44(uVar13,DAT_1419f5e98);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_c8,1,uVar11,&local_50);
    uVar7 = (undefined4)((ulonglong)uVar11 >> 0x20);
    iVar3 = FUN_140e851f0(&local_f8,uVar5,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) {
      local_98 = 0x2cf;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      *param_3 = &DAT_bff0000000000000;
      goto LAB_140abc35c;
    }
    local_98 = 0x2c9;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5b68);
    if (puVar4 != local_70) {
      local_b8 = *puVar4;
      uStack_b4 = puVar4[1];
      uStack_b0 = puVar4[2];
      uStack_ac = puVar4[3];
      if ((1 << ((byte)local_70[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_70);
      }
      FUN_140041b80(local_70,&local_b8);
    }
    local_48 = local_70;
    local_40 = &local_f8;
    ppuVar14 = &local_48;
    uVar12 = CONCAT44(uVar7,DAT_1419f5a78);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,2,uVar12,ppuVar14);
    if (puVar6 != &local_e8) {
      local_b8 = *(undefined4 *)puVar6;
      uStack_b4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_b0 = *(undefined4 *)(puVar6 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_b8);
    }
    local_98 = 0x2ca;
    pcVar10 = (code *)(uVar12 & 0xffffffffffffff00);
    FUN_140e87440(&local_e8,DAT_141a05b88,0x80000000,&local_90,pcVar10,
                  (ulonglong)ppuVar14 & 0xffffffffffffff00);
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*param_5;
    }
    iVar3 = FUN_140e851f0(&local_90,puVar6,DAT_141955260,0);
    if (iVar3 == 0) {
      local_98 = 0x2cb;
      if (&local_e8 != param_3) {
        local_b8 = (undefined4)local_e8;
        uStack_b4 = local_e8._4_4_;
        uStack_b0 = uStack_e0;
        uStack_ac = uStack_dc;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_b8);
      }
LAB_140abc35c:
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_a8;
      return param_3;
    }
    uVar7 = SUB84(local_f8,0);
    uVar9 = (undefined4)((ulonglong)local_f8 >> 0x20);
  } while( true );
}

