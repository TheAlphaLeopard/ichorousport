// gml_Script_create_description_bubble @ 0x140261120

undefined8 *
gml_Script_create_description_bubble
          (code *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  double *pdVar5;
  double dVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined8 **ppuVar9;
  undefined4 uVar10;
  double local_210;
  uint local_204;
  undefined4 local_200;
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
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  double local_e0;
  undefined4 local_d4;
  code *local_d0;
  undefined4 local_c4;
  code *local_c0;
  undefined4 local_b4;
  code *local_b0;
  undefined4 local_a4;
  code *local_a0;
  undefined4 local_94;
  undefined8 local_90 [6];
  undefined8 *local_60;
  double *local_58;
  
  local_130 = "gml_Script_collision_real_id";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x15;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_1ec = 0xffffff;
  local_1f8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
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
  local_1dc = 0;
  local_1e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_200 = 0;
  uStack_14c = 0;
  local_158 = 0xc010000000000000;
  local_128 = 0x19;
  local_204 = 0;
  local_210 = 0.0;
  bVar1 = true;
  do {
    uVar10 = (undefined4)((ulonglong)pcVar7 >> 0x20);
    if (!bVar1) {
      local_128 = 0x19;
      uVar2 = local_204 & 0xffffff;
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          if (uVar2 == 7) {
            local_210 = (double)CONCAT44(local_210._4_4_,local_210._0_4_ + 1);
          }
          else if (uVar2 == 10) {
            local_210 = (double)((longlong)local_210 + 1);
          }
          else {
            if (uVar2 == 0xd) {
              local_204 = 0;
              goto LAB_1402612ae;
            }
            FUN_140042910(&DAT_14172c3d8,&local_210,&local_210);
          }
          goto LAB_1402612b8;
        }
        local_210 = (double)FUN_140e4b060(&local_210);
        local_204 = 0;
      }
LAB_1402612ae:
      local_210 = local_210 + 1.0;
    }
LAB_1402612b8:
    bVar1 = false;
    if (param_4 < 3) {
      pdVar5 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar5 = (double *)param_5[2];
    }
    if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
      dVar6 = *pdVar5;
    }
    else {
      dVar6 = (double)FUN_140e4b060();
    }
    iVar3 = FUN_140edd1e0(param_1,param_2,(longlong)dVar6);
    local_d4 = 0;
    local_e0 = (double)iVar3;
    iVar3 = FUN_140e851f0(&local_210,&local_e0,DAT_141955260,1);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    if (iVar3 == -2 || -1 < iVar3) {
      local_128 = 0x24;
      if (&local_158 != param_3) {
        uStack_140 = CONCAT44(uStack_14c,uStack_150);
        local_148 = local_158;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_148);
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
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      if ((1 << ((byte)local_200 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      _eh_vector_destructor_iterator_(local_90,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_138;
      return param_3;
    }
    local_128 = 0x1a;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    if (param_4 < 3) {
      puVar4 = &DAT_1419df7b0;
LAB_1402613c4:
      local_148 = *puVar4;
      uStack_140 = puVar4[1];
      if ((1 << ((byte)local_90[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_90);
      }
      FUN_140041b80(local_90,&local_148);
    }
    else {
      puVar4 = (undefined8 *)param_5[2];
      if (puVar4 != local_90) goto LAB_1402613c4;
    }
    local_60 = local_90;
    local_58 = &local_210;
    ppuVar9 = &local_60;
    uVar8 = CONCAT44(uVar10,DAT_141a0a7b8);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1e8,2,uVar8,ppuVar9);
    if (puVar4 != &local_1f8) {
      local_148 = *puVar4;
      uStack_140 = puVar4[1];
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_148);
    }
    local_128 = 0x1c;
    local_c4 = 6;
    local_d0 = param_1;
    FUN_140e87440(&local_d0,DAT_141a0a788,0x80000000,&local_1a8,uVar8 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    pcVar7 = param_1;
    uVar8 = param_2;
    FUN_140e87170(&local_1f8,DAT_141a101f8,0x80000000,&local_f0,param_1,param_2);
    if (param_4 < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)param_5[1];
    }
    local_18c = local_19c;
    local_190 = local_1a0;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
      local_198 = local_1a8;
    }
    else {
      FUN_1400419b0(&local_198,&local_1a8);
    }
    uVar10 = 1;
    FUN_1400460e0(&local_198,puVar4);
    iVar3 = FUN_140e851f0(&local_198,&local_f0,DAT_141955260,1,pcVar7,uVar8,uVar10);
    uVar10 = 0;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50();
    }
    if (iVar3 != -2 && iVar3 < 0) {
      local_b4 = 6;
      local_c0 = param_1;
      FUN_140e87440(&local_c0,DAT_141a0a808,0x80000000,&local_1b8,
                    (ulonglong)pcVar7 & 0xffffffffffffff00,uVar8 & 0xffffffffffffff00,uVar10);
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      pcVar7 = param_1;
      uVar8 = param_2;
      FUN_140e87170(&local_1f8,DAT_141a0a798,0x80000000,&local_100,param_1,param_2);
      if (param_4 < 1) {
        puVar4 = &DAT_1419df7b0;
      }
      else {
        puVar4 = (undefined8 *)*param_5;
      }
      local_17c = local_1ac;
      local_180 = local_1b0;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
        local_188 = local_1b8;
      }
      else {
        FUN_1400419b0(&local_188,&local_1b8);
      }
      uVar10 = 2;
      FUN_1400460e0(&local_188,puVar4);
      iVar3 = FUN_140e851f0(&local_188,&local_100,DAT_141955260,1,pcVar7,uVar8,uVar10);
      uVar10 = 0;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50();
      }
      if (iVar3 != -2 && iVar3 < 0) {
        local_a4 = 6;
        local_b0 = param_1;
        FUN_140e87440(&local_b0,DAT_141a101f8,0x80000000,&local_1c8,
                      (ulonglong)pcVar7 & 0xffffffffffffff00,uVar8 & 0xffffffffffffff00,uVar10);
        if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b0);
        }
        pcVar7 = param_1;
        uVar8 = param_2;
        FUN_140e87170(&local_1f8,DAT_141a0a788,0x80000000,&local_110,param_1,param_2);
        if (param_4 < 2) {
          puVar4 = &DAT_1419df7b0;
        }
        else {
          puVar4 = (undefined8 *)param_5[1];
        }
        local_16c = local_1bc;
        local_170 = local_1c0;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
          local_178 = local_1c8;
        }
        else {
          FUN_1400419b0(&local_178,&local_1c8);
        }
        uVar10 = 4;
        FUN_1400460e0(&local_178,puVar4);
        iVar3 = FUN_140e851f0(&local_178,&local_110,DAT_141955260,1,pcVar7,uVar8,uVar10);
        uVar10 = 0;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50();
        }
        if (0 < iVar3) {
          local_94 = 6;
          local_a0 = param_1;
          FUN_140e87440(&local_a0,DAT_141a0a798,0x80000000,&local_1d8,
                        (ulonglong)pcVar7 & 0xffffffffffffff00,uVar8 & 0xffffffffffffff00,uVar10);
          if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a0);
          }
          pcVar7 = param_1;
          uVar8 = param_2;
          FUN_140e87170(&local_1f8,DAT_141a0a808,0x80000000,&local_120,param_1,param_2);
          if (param_4 < 1) {
            puVar4 = &DAT_1419df7b0;
          }
          else {
            puVar4 = (undefined8 *)*param_5;
          }
          local_15c = local_1cc;
          local_160 = local_1d0;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
            local_168 = local_1d8;
          }
          else {
            FUN_1400419b0(&local_168,&local_1d8);
          }
          uVar10 = 8;
          FUN_1400460e0(&local_168,puVar4);
          iVar3 = FUN_140e851f0(&local_168,&local_120,DAT_141955260,1,pcVar7,uVar8,uVar10);
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50();
          }
          if (0 < iVar3) {
            local_128 = 0x20;
            uStack_140 = CONCAT44(uStack_1ec,uStack_1f0);
            local_148 = local_1f8;
            if ((1 << ((byte)local_200 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_158);
            }
            FUN_140041b80(&local_158,&local_148);
            local_200 = uStack_14c;
          }
        }
      }
    }
  } while( true );
}

