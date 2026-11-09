// gml_GlobalScript_create_description_bubble @ 0x1402606d0

undefined8 *
gml_GlobalScript_create_description_bubble
          (code *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined1 auVar1 [12];
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  double *pdVar6;
  double dVar7;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  code *pcVar9;
  ulonglong uVar10;
  undefined8 **ppuVar11;
  undefined4 uVar12;
  double local_230;
  uint local_224;
  undefined8 local_220;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  double local_f0;
  undefined4 local_e4;
  code *local_e0;
  undefined4 local_d4;
  code *local_d0;
  undefined4 local_c4;
  code *local_c0;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98 [6];
  undefined8 *local_68;
  double *local_60;
  
  local_140 = "gml_Script_collision_real";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 2;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_1ec = 0xffffff;
  local_1f8 = 0;
  local_224 = 0xffffff;
  local_230 = 0.0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_204 = 0;
  local_210 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 4;
  auVar1._4_8_ = extraout_XMM0_Qb;
  auVar1._0_4_ = local_168._4_4_;
  auVar8._0_8_ = auVar1._0_8_ << 0x20;
  auVar8._8_4_ = (undefined4)uStack_160;
  auVar8._12_4_ = 0xd;
  uStack_160 = auVar8._8_8_;
  local_168 = (code *)0x0;
  local_a8 = 0;
  uStack_a0 = uStack_160;
  FUN_140041b80(&local_1f8,&local_a8);
  local_138 = 6;
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  local_224 = 0;
  local_230 = 0.0;
  bVar2 = true;
  do {
    uVar12 = (undefined4)((ulonglong)pcVar9 >> 0x20);
    if (!bVar2) {
      local_138 = 6;
      uVar3 = local_224 & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_230 = (double)CONCAT44(local_230._4_4_,local_230._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_230 = (double)((longlong)local_230 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_224 = 0;
              goto LAB_1402608c0;
            }
            FUN_140042910(&DAT_14172c3d8,&local_230,&local_230);
          }
          goto LAB_1402608ca;
        }
        local_230 = (double)FUN_140e4b060(&local_230);
        local_224 = 0;
      }
LAB_1402608c0:
      local_230 = local_230 + 1.0;
    }
LAB_1402608ca:
    bVar2 = false;
    if (param_4 < 3) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)param_5[2];
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar7 = *pdVar6;
    }
    else {
      dVar7 = (double)FUN_140e4b060();
    }
    iVar4 = FUN_140edd1e0(param_1,param_2,(longlong)dVar7);
    local_e4 = 0;
    local_f0 = (double)iVar4;
    iVar4 = FUN_140e851f0(&local_230,&local_f0,DAT_141955260,1);
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    if (iVar4 == -2 || -1 < iVar4) {
      local_138 = 0x11;
      if (&local_1f8 != param_3) {
        uStack_150 = CONCAT44(uStack_1ec,uStack_1f0);
        local_158 = local_1f8;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_158);
      }
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_120);
      }
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_230);
      }
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      _eh_vector_destructor_iterator_(local_98,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_148;
      return param_3;
    }
    local_138 = 7;
    if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_210);
    }
    local_210 = 0;
    local_208 = 0;
    local_204 = 5;
    if (param_4 < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_1402609dc:
      local_158 = *puVar5;
      uStack_150 = puVar5[1];
      if ((1 << ((byte)local_98[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_158);
    }
    else {
      puVar5 = (undefined8 *)param_5[2];
      if (puVar5 != local_98) goto LAB_1402609dc;
    }
    local_68 = local_98;
    local_60 = &local_230;
    ppuVar11 = &local_68;
    uVar10 = CONCAT44(uVar12,DAT_141a0a7b8);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_210,2,uVar10,ppuVar11);
    if (puVar5 != &local_220) {
      local_158 = *puVar5;
      uStack_150 = puVar5[1];
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      FUN_140041b80(&local_220,&local_158);
    }
    local_138 = 9;
    local_d4 = 6;
    local_e0 = param_1;
    FUN_140e87440(&local_e0,DAT_141a0a788,0x80000000,&local_1b8,uVar10 & 0xffffffffffffff00,
                  (ulonglong)ppuVar11 & 0xffffffffffffff00);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    pcVar9 = param_1;
    uVar10 = param_2;
    FUN_140e87170(&local_220,DAT_141a101f8,0x80000000,&local_100,param_1,param_2);
    if (param_4 < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
    }
    local_19c = local_1ac;
    local_1a0 = local_1b0;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_1b8;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_1b8);
    }
    uVar12 = 1;
    FUN_1400460e0(&local_1a8,puVar5);
    iVar4 = FUN_140e851f0(&local_1a8,&local_100,DAT_141955260,1,pcVar9,uVar10,uVar12);
    uVar12 = 0;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if (iVar4 != -2 && iVar4 < 0) {
      local_c4 = 6;
      local_d0 = param_1;
      FUN_140e87440(&local_d0,DAT_141a0a808,0x80000000,&local_1c8,
                    (ulonglong)pcVar9 & 0xffffffffffffff00,uVar10 & 0xffffffffffffff00,uVar12);
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      pcVar9 = param_1;
      uVar10 = param_2;
      FUN_140e87170(&local_220,DAT_141a0a798,0x80000000,&local_110,param_1,param_2);
      if (param_4 < 1) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)*param_5;
      }
      local_18c = local_1bc;
      local_190 = local_1c0;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
        local_198 = local_1c8;
      }
      else {
        FUN_1400419b0(&local_198,&local_1c8);
      }
      uVar12 = 2;
      FUN_1400460e0(&local_198,puVar5);
      iVar4 = FUN_140e851f0(&local_198,&local_110,DAT_141955260,1,pcVar9,uVar10,uVar12);
      uVar12 = 0;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if (iVar4 != -2 && iVar4 < 0) {
        local_b4 = 6;
        local_c0 = param_1;
        FUN_140e87440(&local_c0,DAT_141a101f8,0x80000000,&local_1d8,
                      (ulonglong)pcVar9 & 0xffffffffffffff00,uVar10 & 0xffffffffffffff00,uVar12);
        if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c0);
        }
        pcVar9 = param_1;
        uVar10 = param_2;
        FUN_140e87170(&local_220,DAT_141a0a788,0x80000000,&local_120,param_1,param_2);
        if (param_4 < 2) {
          puVar5 = &DAT_1419df7b0;
        }
        else {
          puVar5 = (undefined8 *)param_5[1];
        }
        local_17c = local_1cc;
        local_180 = local_1d0;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
          local_188 = local_1d8;
        }
        else {
          FUN_1400419b0(&local_188,&local_1d8);
        }
        uVar12 = 4;
        FUN_1400460e0(&local_188,puVar5);
        iVar4 = FUN_140e851f0(&local_188,&local_120,DAT_141955260,1,pcVar9,uVar10,uVar12);
        uVar12 = 0;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        if (0 < iVar4) {
          uStack_160 = CONCAT44(6,(undefined4)uStack_160);
          local_168 = param_1;
          FUN_140e87440(&local_168,DAT_141a0a798,0x80000000,&local_1e8,
                        (ulonglong)pcVar9 & 0xffffffffffffff00,uVar10 & 0xffffffffffffff00,uVar12);
          if ((1 << ((byte)((ulonglong)uStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          pcVar9 = param_1;
          uVar10 = param_2;
          FUN_140e87170(&local_220,DAT_141a0a808,0x80000000,&local_130,param_1,param_2);
          if (param_4 < 1) {
            puVar5 = &DAT_1419df7b0;
          }
          else {
            puVar5 = (undefined8 *)*param_5;
          }
          local_16c = local_1dc;
          local_170 = local_1e0;
          if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
            local_178 = local_1e8;
          }
          else {
            FUN_1400419b0(&local_178,&local_1e8);
          }
          uVar12 = 8;
          FUN_1400460e0(&local_178,puVar5);
          iVar4 = FUN_140e851f0(&local_178,&local_130,DAT_141955260,1,pcVar9,uVar10,uVar12);
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          if (0 < iVar4) {
            local_138 = 0xd;
            local_a8 = 0x3ff0000000000000;
            uVar12 = (undefined4)uStack_a0;
            uStack_a0 = CONCAT44(0xd,uVar12);
            local_158 = 0x3ff0000000000000;
            uStack_150 = CONCAT44(0xd,uVar12);
            if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            FUN_140041b80(&local_1f8,&local_158);
          }
        }
      }
    }
  } while( true );
}

