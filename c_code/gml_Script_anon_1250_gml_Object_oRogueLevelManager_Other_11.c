// gml_Script_anon_1250_gml_Object_oRogueLevelManager_Other_11 @ 0x140ce0c30

undefined8 *
gml_Script_anon_1250_gml_Object_oRogueLevelManager_Other_11
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double **ppdVar13;
  ulonglong uVar14;
  double local_208;
  uint local_1fc;
  double local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  double local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  double *local_1c8;
  double *local_1c0;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  double local_180 [2];
  undefined1 local_170 [24];
  undefined8 local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined4 local_d8 [3];
  undefined4 local_cc;
  undefined4 local_c8 [3];
  undefined4 local_bc;
  undefined4 local_b8 [3];
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  
  local_1b0 = "gml_Script_anon@89@gml_Object_oRogueLevelManager_Other_11";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1a8 = 6;
  _eh_vector_constructor_iterator_(local_180,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_1ec = 0xffffff;
  local_1f8 = 0.0;
  local_1fc = 0xffffff;
  local_208 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_184 = 0;
  local_190 = 0;
  local_194 = 0;
  local_1a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1a8 = 8;
  local_1dc = 0;
  local_1e8 = 0.0;
  bVar1 = true;
LAB_140ce0d43:
  if (bVar1) goto LAB_140ce0da7;
  local_1a8 = 8;
  uVar4 = local_1dc & 0xffffff;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      local_1e8 = (double)FUN_140e4b060(&local_1e8);
      local_1dc = 0;
    }
    else {
      if (uVar4 == 7) {
        local_1e8 = (double)CONCAT44(local_1e8._4_4_,local_1e8._0_4_ + 1);
        goto LAB_140ce0da7;
      }
      if (uVar4 == 10) {
        local_1e8 = (double)((longlong)local_1e8 + 1);
        goto LAB_140ce0da7;
      }
      if (uVar4 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_1e8,&local_1e8);
        goto LAB_140ce0da7;
      }
      local_1dc = 0;
    }
  }
  local_1e8 = local_1e8 + 1.0;
LAB_140ce0da7:
  bVar1 = false;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b70);
  iVar5 = FUN_140e851f0(&local_1e8,uVar7,DAT_141955260,1);
  if ((iVar5 == -2) || (-1 < iVar5)) {
    local_1a8 = 0x25;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fa418);
    FUN_140e63610(param_1,param_2,&local_1d8,0,uVar7,0);
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    _eh_vector_destructor_iterator_(local_180,0x10,2,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_1b8;
    return param_3;
  }
  local_1a8 = 10;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1ec = 0;
  local_1f8 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_1a8 = 10;
      uVar4 = local_1ec & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_1f8 = (double)CONCAT44(local_1f8._4_4_,local_1f8._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_1f8 = (double)((longlong)local_1f8 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_1ec = 0;
              goto LAB_140ce0e93;
            }
            FUN_140042910(&DAT_14172c3d8,&local_1f8,&local_1f8);
          }
          goto LAB_140ce0e9e;
        }
        local_1f8 = (double)FUN_140e4b060(&local_1f8);
        local_1ec = 0;
      }
LAB_140ce0e93:
      local_1f8 = local_1f8 + 1.0;
    }
LAB_140ce0e9e:
    bVar2 = false;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b70);
    iVar5 = FUN_140e851f0(&local_1f8,uVar7,DAT_141955260,1);
    if ((iVar5 == -2) || (-1 < iVar5)) goto LAB_140ce0d43;
    local_1a8 = 0xd;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_1fc = 0;
    local_208 = 0.0;
    local_1a8 = 0xf;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
    uStack_14c = local_1ec;
    uStack_150 = local_1f0;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
      local_158 = local_1f8;
    }
    else {
      FUN_1400419b0(&local_158,&local_1f8);
    }
    local_cc = 7;
    local_d8[0] = 1;
    FUN_1400460e0(&local_158,local_d8);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    local_118 = (undefined4)local_158;
    uStack_114 = local_158._4_4_;
    uStack_110 = uStack_150;
    uStack_10c = uStack_14c;
    if ((1 << ((byte)local_180[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_180);
    }
    FUN_140041b80(local_180,&local_118);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_1c8 = local_180;
    local_1c0 = &local_1e8;
    uVar7 = FUN_140e63610(param_1,param_2,&local_1d8,2,uVar8,&local_1c8);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 != '\0') {
      local_1a8 = 0x10;
      uVar4 = local_1fc & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_208 = (double)CONCAT44(local_208._4_4_,local_208._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_208 = (double)((longlong)local_208 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_1fc = 0;
              goto LAB_140ce10c3;
            }
            FUN_140042910(&DAT_14172c3d8,&local_208,&local_208);
          }
          goto LAB_140ce10ce;
        }
        local_208 = (double)FUN_140e4b060(&local_208);
        local_1fc = 0;
      }
LAB_140ce10c3:
      local_208 = local_208 + 1.0;
    }
LAB_140ce10ce:
    local_1a8 = 0x12;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    uStack_13c = local_1ec;
    uStack_140 = local_1f0;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
      local_148 = local_1f8;
    }
    else {
      FUN_1400419b0(&local_148,&local_1f8);
    }
    local_bc = 7;
    local_c8[0] = 1;
    FUN_1400462a0(&local_148,local_c8);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    local_118 = (undefined4)local_148;
    uStack_114 = local_148._4_4_;
    uStack_110 = uStack_140;
    uStack_10c = uStack_13c;
    if ((1 << ((byte)local_180[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_180);
    }
    FUN_140041b80(local_180,&local_118);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_1c8 = local_180;
    local_1c0 = &local_1e8;
    uVar7 = FUN_140e63610(param_1,param_2,&local_1d8,2,uVar8,&local_1c8);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 != '\0') {
      local_1a8 = 0x13;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
      uVar4 = local_1fc & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_208 = (double)CONCAT44(local_208._4_4_,local_208._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_208 = (double)((longlong)local_208 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_1fc = 0;
              goto LAB_140ce128c;
            }
            FUN_140042910(&DAT_14172c3d8,&local_208,&local_208);
          }
          goto LAB_140ce1297;
        }
        local_208 = (double)FUN_140e4b060(&local_208);
        local_1fc = 0;
      }
LAB_140ce128c:
      local_208 = local_208 + 1.0;
    }
LAB_140ce1297:
    local_1a8 = 0x15;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    local_1c8 = &local_1f8;
    uStack_12c = local_1dc;
    uStack_130 = local_1e0;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
      local_138 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_138,&local_1e8);
    }
    local_ac = 7;
    local_b8[0] = 1;
    FUN_1400460e0(&local_138,local_b8);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    local_118 = (undefined4)local_138;
    uStack_114 = local_138._4_4_;
    uStack_110 = uStack_130;
    uStack_10c = uStack_12c;
    if ((1 << (local_170[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_170);
    }
    FUN_140041b80(local_170,&local_118);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_1c0 = (double *)local_170;
    uVar7 = FUN_140e63610(param_1,param_2,&local_1d8,2,uVar8,&local_1c8);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 != '\0') {
      local_1a8 = 0x16;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
      uVar4 = local_1fc & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_208 = (double)CONCAT44(local_208._4_4_,local_208._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_208 = (double)((longlong)local_208 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_1fc = 0;
              goto LAB_140ce1464;
            }
            FUN_140042910(&DAT_14172c3d8,&local_208,&local_208);
          }
          goto LAB_140ce146f;
        }
        local_208 = (double)FUN_140e4b060(&local_208);
        local_1fc = 0;
      }
LAB_140ce1464:
      local_208 = local_208 + 1.0;
    }
LAB_140ce146f:
    local_1a8 = 0x18;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    local_1c8 = &local_1f8;
    uStack_11c = local_1dc;
    uStack_120 = local_1e0;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
      local_128 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_128,&local_1e8);
    }
    local_9c = 7;
    local_a8[0] = 1;
    FUN_1400462a0(&local_128,local_a8);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    local_118 = (undefined4)local_128;
    uStack_114 = local_128._4_4_;
    uStack_110 = uStack_120;
    uStack_10c = uStack_11c;
    if ((1 << (local_170[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_170);
    }
    FUN_140041b80(local_170,&local_118);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_1c0 = (double *)local_170;
    uVar7 = FUN_140e63610(param_1,param_2,&local_1d8,2,uVar8,&local_1c8);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 != '\0') {
      local_1a8 = 0x19;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
      uVar4 = local_1fc & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_208 = (double)CONCAT44(local_208._4_4_,local_208._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_208 = (double)((longlong)local_208 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_1fc = 0;
              goto LAB_140ce163c;
            }
            FUN_140042910(&DAT_14172c3d8,&local_208,&local_208);
          }
          goto LAB_140ce1647;
        }
        local_208 = (double)FUN_140e4b060(&local_208);
        local_1fc = 0;
      }
LAB_140ce163c:
      local_208 = local_208 + 1.0;
    }
LAB_140ce1647:
    local_1a8 = 0x1b;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    local_1c8 = &local_1f8;
    local_1c0 = &local_1e8;
    ppdVar13 = &local_1c8;
    uVar7 = FUN_140e63610(param_1,param_2,&local_1d8,2,uVar8,ppdVar13);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 != '\0') {
      (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
      local_8c = 0;
      local_98 = 0x3ff0000000000000;
      iVar5 = FUN_140e851f0(&local_208,&local_98,DAT_141955260,0);
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if (iVar5 == 0) {
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
        if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_190);
        }
        local_190 = 0;
        local_188 = 0;
        local_184 = 5;
        dVar10 = local_1e8;
        if ((local_1dc & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_1e8);
        }
        dVar11 = local_1f8;
        if ((local_1ec & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_1f8);
        }
        uVar6 = FUN_140e4a740(uVar7);
        uVar7 = FUN_140ea8b20(&local_190,uVar6,(longlong)dVar11,(longlong)dVar10);
        uVar14 = (ulonglong)ppdVar13 & 0xffffffffffffff00;
        uVar8 = uVar8 & 0xffffffffffffff00;
        FUN_140e87440(uVar7,DAT_141a57c50,0x80000000,&local_e8,uVar8,uVar14);
        local_fc = DAT_141ddaf24;
        local_100 = DAT_141ddaf20;
        if ((1 << ((byte)DAT_141ddaf24 & 0x1f) & 0x46U) == 0) {
          local_108 = DAT_141ddaf18;
        }
        else {
          FUN_1400419b0(&local_108,&DAT_141ddaf18);
        }
        iVar5 = FUN_140e851f0(&local_e8,&local_108,DAT_141955260,0);
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        if (iVar5 == 0) {
          uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
          if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a0);
          }
          local_1a0 = 0;
          local_198 = 0;
          local_194 = 5;
          dVar10 = local_1e8;
          if ((local_1dc & 0xffffff) != 0) {
            dVar10 = (double)FUN_140e4b060(&local_1e8);
          }
          dVar11 = local_1f8;
          if ((local_1ec & 0xffffff) != 0) {
            dVar11 = (double)FUN_140e4b060(&local_1f8);
          }
          uVar6 = FUN_140e4a740(uVar7);
          uVar7 = FUN_140ea8b20(&local_1a0,uVar6,(longlong)dVar11,(longlong)dVar10);
          FUN_140e87440(uVar7,DAT_1419f9cc8,0x80000000,&local_f8,uVar8 & 0xffffffffffffff00,
                        uVar14 & 0xffffffffffffff00);
          cVar3 = FUN_140e491e0(&local_f8);
          if (cVar3 == '\0') {
            local_1a8 = 0x1d;
            pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
            dVar10 = local_1e8;
            if ((local_1dc & 0xffffff) != 0) {
              dVar10 = (double)FUN_140e4b060(&local_1e8);
            }
            dVar11 = local_1f8;
            if ((local_1ec & 0xffffff) != 0) {
              dVar11 = (double)FUN_140e4b060(&local_1f8);
            }
            if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
              dVar12 = *pdVar9;
            }
            else {
              dVar12 = (double)FUN_140e4b060(pdVar9);
            }
            FUN_140ea8d00((longlong)dVar12,(longlong)dVar11,(longlong)dVar10,&DAT_1419df7b0);
            local_1a8 = 0x1e;
            local_7c = 0;
            local_88 = 0;
            dVar10 = local_1e8;
            if ((local_1dc & 0xffffff) != 0) {
              dVar10 = (double)FUN_140e4b060(&local_1e8);
            }
            dVar11 = local_1f8;
            if ((local_1ec & 0xffffff) != 0) {
              dVar11 = (double)FUN_140e4b060(&local_1f8);
            }
            if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
              dVar12 = *pdVar9;
            }
            else {
              dVar12 = (double)FUN_140e4b060(pdVar9);
            }
            FUN_140ea8d00((longlong)dVar12,(longlong)dVar11,(longlong)dVar10,&local_88);
            if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_88);
            }
          }
        }
      }
    }
  } while( true );
}

