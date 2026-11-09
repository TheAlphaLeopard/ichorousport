// gml_Script_anon_1418_gml_Object_oRogueLevelManager_Other_12 @ 0x140cfea70

undefined8 *
gml_Script_anon_1418_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar13;
  undefined8 uVar12;
  undefined4 uVar14;
  double **ppdVar15;
  double local_f8;
  uint local_ec;
  double local_e8;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  double *local_a0;
  double *local_98;
  undefined1 local_90 [104];
  
  local_c0 = "gml_Script_anon@934@gml_Object_oRogueLevelManager_Other_12";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x1b;
  _eh_vector_constructor_iterator_(local_90,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x1d;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57ce0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_b8 = 0x1f;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0.0;
  bVar1 = true;
LAB_140cfebb5:
  if (bVar1) goto LAB_140cfec19;
  local_b8 = 0x1f;
  uVar4 = local_dc & 0xffffff;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      local_e8 = (double)FUN_140e4b060(&local_e8);
      local_dc = 0;
    }
    else {
      if (uVar4 == 7) {
        local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
        goto LAB_140cfec19;
      }
      if (uVar4 == 10) {
        local_e8 = (double)((longlong)local_e8 + 1);
        goto LAB_140cfec19;
      }
      if (uVar4 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_e8,&local_e8);
        goto LAB_140cfec19;
      }
      local_dc = 0;
    }
  }
  local_e8 = local_e8 + 1.0;
LAB_140cfec19:
  bVar1 = false;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b70);
  iVar5 = FUN_140e851f0(&local_e8,uVar8,DAT_141955260,1);
  if ((iVar5 == -2) || (-1 < iVar5)) {
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    _eh_vector_destructor_iterator_(local_90,0x10,2,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_c8;
    return param_3;
  }
  local_b8 = 0x21;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_b8 = 0x21;
      uVar4 = local_ec & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_f8 = (double)((longlong)local_f8 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_ec = 0;
              goto LAB_140cfed09;
            }
            FUN_140042910(&DAT_14172c3d8,&local_f8,&local_f8);
          }
          goto LAB_140cfed14;
        }
        local_f8 = (double)FUN_140e4b060(&local_f8);
        local_ec = 0;
      }
LAB_140cfed09:
      local_f8 = local_f8 + 1.0;
    }
LAB_140cfed14:
    bVar2 = false;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b70);
    iVar5 = FUN_140e851f0(&local_f8,uVar8,DAT_141955260,1);
    if ((iVar5 == -2) || (-1 < iVar5)) goto LAB_140cfebb5;
    local_b8 = 0x23;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
    local_a0 = &local_f8;
    local_98 = &local_e8;
    ppdVar15 = &local_a0;
    uVar8 = FUN_140e63610(param_1,param_2,&local_d8,2,uVar9,ppdVar15);
    cVar3 = FUN_140e491e0(uVar8);
    if (cVar3 == '\0') {
      local_b8 = 0x23;
    }
    else {
      local_b8 = 0x24;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      if ((local_dc & 0xffffff) == 0) {
        uVar10 = SUB84(local_e8,0);
        uVar13 = (undefined4)((ulonglong)local_e8 >> 0x20);
      }
      else {
        uVar12 = FUN_140e4b060(&local_e8);
        uVar10 = (undefined4)uVar12;
        uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
      }
      if ((local_ec & 0xffffff) == 0) {
        uVar11 = SUB84(local_f8,0);
        uVar14 = (undefined4)((ulonglong)local_f8 >> 0x20);
      }
      else {
        uVar12 = FUN_140e4b060(&local_f8);
        uVar11 = (undefined4)uVar12;
        uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
      }
      uVar6 = FUN_140e4a740(uVar8);
      uVar8 = FUN_140ea8b20(&local_d8,uVar6,(longlong)(double)CONCAT44(uVar14,uVar11),
                            (longlong)(double)CONCAT44(uVar13,uVar10));
      FUN_140e87440(uVar8,DAT_1419ffa38,0x80000000,&local_b0,uVar9 & 0xffffffffffffff00,
                    (ulonglong)ppdVar15 & 0xffffffffffffff00);
      cVar3 = FUN_140e491e0(&local_b0);
      if (cVar3 == '\0') {
        local_b8 = 0x26;
        uVar8 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a57ce0);
        FUN_140046040(uVar8);
      }
      else {
        local_b8 = 0x24;
      }
    }
  } while( true );
}

