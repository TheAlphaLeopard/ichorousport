// gml_Script_anon_28942_anon_28896_SnowState_SnowState @ 0x14050dce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_28942_anon_28896_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong **pplVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  longlong local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  double local_120;
  uint local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_f8;
  undefined4 local_ec;
  longlong local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  longlong *local_98;
  longlong *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  longlong local_68;
  undefined4 local_5c;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_130 = "gml_Script_anon@26918@SnowState@SnowState";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x370;
  FUN_140041df0(local_58,param_4,6,param_5);
  _eh_vector_constructor_iterator_(&local_f8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_114 = 0xffffff;
  iVar13 = 0;
  local_120 = 0.0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_16c = 0;
  local_178 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x370;
  puVar11 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 4) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_50[3];
  }
  iVar3 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_128 = 0x370;
    FUN_140e645a0(&local_168,&LAB_14050dcb0,param_1);
    if (((int)local_58[0] < 4) || (puVar11 = (undefined8 *)local_50[3], &local_168 != puVar11)) {
      local_148 = local_168;
      uStack_140 = uStack_160;
      uStack_13c = uStack_15c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      FUN_140041b80(puVar11,&local_148);
    }
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
  }
  plVar8 = &DAT_1419df7b0;
  if ((int)local_58[0] < 5) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)local_50[4];
  }
  iVar3 = FUN_140e851f0(puVar11,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcdf8);
    if (4 < (int)local_58[0]) {
      plVar8 = (longlong *)local_50[4];
    }
    if (plVar5 != plVar8) {
      local_168 = *plVar5;
      uStack_160 = (undefined4)plVar5[1];
      uStack_15c = *(undefined4 *)((longlong)plVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar8);
      }
      FUN_140041b80(plVar8,&local_168);
    }
  }
  plVar8 = &DAT_1419df7b0;
  if ((int)local_58[0] < 6) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)local_50[5];
  }
  iVar3 = FUN_140e851f0(puVar11,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcb58);
    if (5 < (int)local_58[0]) {
      plVar8 = (longlong *)local_50[5];
    }
    if (plVar5 != plVar8) {
      local_168 = *plVar5;
      uStack_160 = (undefined4)plVar5[1];
      uStack_15c = *(undefined4 *)((longlong)plVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar8);
      }
      FUN_140041b80(plVar8,&local_168);
    }
  }
  local_128 = 0x371;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd038);
  if ((int)local_58[0] < 1) {
    plVar8 = &DAT_1419df7b0;
LAB_14050dfd2:
    local_168 = *plVar8;
    uStack_160 = (undefined4)plVar8[1];
    uStack_15c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
  }
  else {
    plVar8 = (longlong *)*local_50;
    if (plVar8 != &local_f8) goto LAB_14050dfd2;
  }
  local_98 = &local_f8;
  uVar7 = FUN_140e63610(param_1,param_2,&local_178,1,uVar6,&local_98);
  uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_128 = 0x371;
LAB_14050e041:
    if (param_3 == &DAT_1419df7b0) goto LAB_14050f0c2;
    local_168 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_160 = DAT_1419df7b8;
    uStack_15c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    puVar11 = &local_168;
  }
  else {
    local_128 = 0x372;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if ((int)local_58[0] < 3) {
      plVar8 = &DAT_1419df7b0;
LAB_14050e0d3:
      local_168 = *plVar8;
      uStack_160 = (undefined4)plVar8[1];
      uStack_15c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_168);
    }
    else {
      plVar8 = (longlong *)local_50[2];
      if (plVar8 != &local_f8) goto LAB_14050e0d3;
    }
    local_98 = &local_f8;
    uVar6 = FUN_140e634e0(param_1,param_2,&local_178,1,CONCAT44(uVar14,DAT_1419fdbf8),&local_98);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 != '\0') {
      uStack_13c = DAT_141dd39a4;
      uStack_140 = DAT_141dd39a0;
      if ((1 << ((byte)DAT_141dd39a4 & 0x1f) & 0x46U) == 0) {
        local_148 = DAT_141dd3998;
      }
      else {
        FUN_1400419b0(&local_148,&DAT_141dd3998);
      }
      if ((int)local_58[0] < 3) {
        puVar11 = &DAT_1419df7b0;
      }
      else {
        puVar11 = (undefined8 *)local_50[2];
      }
      iVar3 = FUN_140e851f0(puVar11,&local_148,DAT_141955260,0);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if (iVar3 != 0) {
        local_128 = 0x376;
        uStack_13c = DAT_141dd39b4;
        uStack_140 = DAT_141dd39b0;
        if ((1 << ((byte)DAT_141dd39b4 & 0x1f) & 0x46U) == 0) {
          local_148 = DAT_141dd39a8;
        }
        else {
          FUN_1400419b0(&local_148,&DAT_141dd39a8);
        }
        if ((int)local_58[0] < 3) {
          puVar11 = &DAT_1419df7b0;
        }
        else {
          puVar11 = (undefined8 *)local_50[2];
        }
        iVar3 = FUN_140e851f0(puVar11,&local_148,DAT_141955260,0);
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        uVar4 = 1 << ((byte)local_16c & 0x1f);
        if (iVar3 == 0) {
          local_128 = 0x377;
          if ((uVar4 & 0x46) != 0) {
            FUN_140041a50(&local_178);
          }
          local_178 = 0;
          local_170 = 0;
          local_16c = 5;
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
          local_168 = CONCAT44(uRam0000000141dd3c9c,_DAT_141dd3c98);
          uStack_160 = uRam0000000141dd3ca0;
          uStack_15c = DAT_141dd3ca4;
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_168);
          local_98 = &local_f8;
          FUN_140e63610(param_1,param_2,&local_178,1,uVar6,&local_98);
          local_128 = 0x378;
          goto LAB_14050e041;
        }
        local_128 = 0x37b;
        if ((uVar4 & 0x46) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcc18);
        if ((int)local_58[0] < 4) {
          plVar8 = &DAT_1419df7b0;
LAB_14050e37a:
          local_168 = *plVar8;
          uStack_160 = (undefined4)plVar8[1];
          uStack_15c = *(undefined4 *)((longlong)plVar8 + 0xc);
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_168);
        }
        else {
          plVar8 = (longlong *)local_50[3];
          if (plVar8 != &local_f8) goto LAB_14050e37a;
        }
        local_98 = &local_f8;
        uVar7 = FUN_140e63610(param_1,param_2,&local_178,1,uVar6,&local_98);
        cVar2 = FUN_140e491e0(uVar7);
        if (cVar2 == '\0') {
          local_128 = 0x37c;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          local_158 = 0;
          local_150 = 0;
          local_14c = 5;
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
          local_168 = CONCAT44(uRam0000000141dd3a8c,_DAT_141dd3a88);
          uStack_160 = uRam0000000141dd3a90;
          uStack_15c = DAT_141dd3a94;
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_168);
          local_90 = &local_e8;
          FUN_140e63610(param_1,param_2,&local_158,1,uVar6,&local_90);
          local_128 = 0x37d;
          goto LAB_14050e041;
        }
        local_128 = 0x37f;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        if ((int)local_58[0] < 5) {
          plVar8 = &DAT_1419df7b0;
LAB_14050e4e6:
          local_168 = *plVar8;
          uStack_160 = (undefined4)plVar8[1];
          uStack_15c = *(undefined4 *)((longlong)plVar8 + 0xc);
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_168);
        }
        else {
          plVar8 = (longlong *)local_50[4];
          if (plVar8 != &local_f8) goto LAB_14050e4e6;
        }
        local_98 = &local_f8;
        uVar7 = FUN_140e63610(param_1,param_2,&local_178,1,uVar6,&local_98);
        cVar2 = FUN_140e491e0(uVar7);
        if (cVar2 == '\0') {
          local_128 = 0x380;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          local_158 = 0;
          local_150 = 0;
          local_14c = 5;
          (**(code **)(*param_1 + 8))(param_1,DAT_1419fcc18);
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
          local_168 = CONCAT44(uRam0000000141dd3c4c,_DAT_141dd3c48);
          uStack_160 = uRam0000000141dd3c50;
          uStack_15c = DAT_141dd3c54;
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_168);
          local_90 = &local_e8;
          FUN_140e63610(param_1,param_2,&local_158,1,uVar6,&local_90);
          local_128 = 0x381;
          goto LAB_14050e041;
        }
        local_128 = 899;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        if ((int)local_58[0] < 6) {
          plVar8 = &DAT_1419df7b0;
LAB_14050e661:
          local_168 = *plVar8;
          uStack_160 = (undefined4)plVar8[1];
          uStack_15c = *(undefined4 *)((longlong)plVar8 + 0xc);
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_168);
        }
        else {
          plVar8 = (longlong *)local_50[5];
          if (plVar8 != &local_f8) goto LAB_14050e661;
        }
        local_98 = &local_f8;
        uVar7 = FUN_140e63610(param_1,param_2,&local_178,1,uVar6,&local_98);
        uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
        cVar2 = FUN_140e491e0(uVar7);
        if (cVar2 == '\0') {
          local_128 = 900;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          local_158 = 0;
          local_150 = 0;
          local_14c = 5;
          (**(code **)(*param_1 + 8))(param_1,DAT_1419fcc18);
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
          local_168 = CONCAT44(uRam0000000141dd3b6c,_DAT_141dd3b68);
          uStack_160 = uRam0000000141dd3b70;
          uStack_15c = DAT_141dd3b74;
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_168);
          local_90 = &local_e8;
          FUN_140e63610(param_1,param_2,&local_158,1,uVar6,&local_90);
          local_128 = 0x385;
          goto LAB_14050e041;
        }
        local_128 = 0x388;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        if ((int)local_58[0] < 2) {
          plVar8 = &DAT_1419df7b0;
LAB_14050e7dc:
          local_168 = *plVar8;
          uStack_160 = (undefined4)plVar8[1];
          uStack_15c = *(undefined4 *)((longlong)plVar8 + 0xc);
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_168);
        }
        else {
          plVar8 = (longlong *)local_50[1];
          if (plVar8 != &local_f8) goto LAB_14050e7dc;
        }
        local_98 = &local_f8;
        uVar6 = CONCAT44(uVar14,DAT_1419fdb88);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar6,&local_98);
        cVar2 = FUN_140e491e0(uVar7);
        uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (cVar2 == '\0') {
          local_128 = 0x388;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          local_158 = 0;
          local_150 = 0;
          local_14c = 5;
          if ((int)local_58[0] < 2) {
            plVar8 = &DAT_1419df7b0;
LAB_14050e89e:
            local_168 = *plVar8;
            uStack_160 = (undefined4)plVar8[1];
            uStack_15c = *(undefined4 *)((longlong)plVar8 + 0xc);
            if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e8);
            }
            FUN_140041b80(&local_e8,&local_168);
          }
          else {
            plVar8 = (longlong *)local_50[1];
            if (plVar8 != &local_e8) goto LAB_14050e89e;
          }
          local_90 = &local_e8;
          if ((int)local_58[0] < 2) {
            plVar8 = &DAT_1419df7b0;
          }
          else {
            plVar8 = (longlong *)local_50[1];
          }
          uVar6 = CONCAT44(uVar14,DAT_1419fdca8);
          plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar6,&local_90);
          if (plVar5 != plVar8) {
            local_168 = *plVar5;
            uStack_160 = (undefined4)plVar5[1];
            uStack_15c = *(undefined4 *)((longlong)plVar5 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(plVar8);
            }
            FUN_140041b80(plVar8,&local_168);
          }
        }
        local_128 = 0x38b;
        if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_120);
        }
        local_114 = 0;
        local_120 = 0.0;
        if ((int)local_58[0] < 2) {
          plVar8 = &DAT_1419df7b0;
        }
        else {
          plVar8 = (longlong *)local_50[1];
        }
        if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
          iVar13 = *(int *)(*plVar8 + 0x24);
        }
        while (0 < iVar13) {
          uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
          iVar13 = iVar13 + -1;
          local_128 = 0x38c;
          iVar3 = FUN_140e4a740(&local_120);
          if ((int)local_58[0] < 2) {
            plVar8 = &DAT_1419df7b0;
          }
          else {
            plVar8 = (longlong *)local_50[1];
          }
          if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)
             ) {
            if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar3,
                            *(undefined4 *)(lVar1 + 0x24));
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          if (plVar8 != &local_68) {
            local_110 = (undefined4)*plVar8;
            uStack_10c = *(undefined4 *)((longlong)plVar8 + 4);
            uStack_108 = (undefined4)plVar8[1];
            uStack_104 = *(undefined4 *)((longlong)plVar8 + 0xc);
            if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_68);
            }
            FUN_140041b80(&local_68,&local_110);
          }
          uVar4 = local_114 & 0xffffff;
          if (uVar4 == 0) {
LAB_14050eaa6:
            local_120 = local_120 + 1.0;
          }
          else {
            if (uVar4 == 1) {
              local_120 = (double)FUN_140e4b060(&local_120);
              local_114 = 0;
              goto LAB_14050eaa6;
            }
            if (uVar4 == 7) {
              local_120 = (double)CONCAT44(local_120._4_4_,local_120._0_4_ + 1);
            }
            else if (uVar4 == 10) {
              local_120 = (double)((longlong)local_120 + 1);
            }
            else {
              if (uVar4 == 0xd) {
                local_114 = 0;
                goto LAB_14050eaa6;
              }
              FUN_140042910(&DAT_14172c3d8,&local_120,&local_120);
            }
          }
          local_128 = 0x38d;
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          local_178 = 0;
          local_170 = 0;
          local_16c = 5;
          local_98 = &local_68;
          uVar6 = FUN_140e634e0(param_1,param_2,&local_178,1,CONCAT44(uVar14,DAT_1419fdbf8),
                                &local_98);
          cVar2 = FUN_140e491e0(uVar6);
          if (cVar2 == '\0') {
LAB_14050eed3:
            local_128 = 0x38f;
            if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_158);
            }
            local_158 = 0;
            local_150 = 0;
            local_14c = 5;
            uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd68);
            local_110 = _DAT_141dd3b58;
            uStack_10c = uRam0000000141dd3b5c;
            uStack_108 = uRam0000000141dd3b60;
            uStack_104 = DAT_141dd3b64;
            if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e8);
            }
            FUN_140041b80(&local_e8,&local_110);
            local_90 = &local_e8;
            puVar11 = &local_158;
            pplVar9 = &local_90;
LAB_14050ef64:
            uVar7 = 1;
          }
          else {
            uStack_13c = DAT_141dd39a4;
            uStack_140 = DAT_141dd39a0;
            if ((1 << ((byte)DAT_141dd39a4 & 0x1f) & 0x46U) == 0) {
              local_148 = DAT_141dd3998;
            }
            else {
              FUN_1400419b0(&local_148,&DAT_141dd3998);
            }
            iVar3 = FUN_140e851f0(&local_68,&local_148,DAT_141955260,0);
            if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            if (iVar3 == 0) goto LAB_14050eed3;
            local_128 = 0x391;
            uStack_15c = DAT_141dd3bf4;
            uStack_160 = DAT_141dd3bf0;
            if ((1 << ((byte)DAT_141dd3bf4 & 0x1f) & 0x46U) == 0) {
              local_168 = DAT_141dd3be8;
            }
            else {
              FUN_1400419b0(&local_168,&DAT_141dd3be8);
            }
            iVar3 = FUN_140e851f0(&local_68,&local_168,DAT_141955260,0);
            if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_168);
            }
            uVar4 = 1 << ((byte)local_16c & 0x1f);
            if (iVar3 == 0) {
              local_128 = 0x393;
              if ((uVar4 & 0x46) != 0) {
                FUN_140041a50(&local_178);
              }
              local_178 = 0;
              local_170 = 0;
              local_16c = 5;
              uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd68);
              local_110 = _DAT_141dd3ca8;
              uStack_10c = uRam0000000141dd3cac;
              uStack_108 = uRam0000000141dd3cb0;
              uStack_104 = DAT_141dd3cb4;
              if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_f8);
              }
              FUN_140041b80(&local_f8,&local_110);
              local_98 = &local_f8;
              puVar11 = &local_178;
              pplVar9 = &local_98;
              goto LAB_14050ef64;
            }
            local_128 = 0x396;
            if ((uVar4 & 0x46) != 0) {
              FUN_140041a50(&local_178);
            }
            local_178 = 0;
            local_170 = 0;
            local_16c = 5;
            uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fccf8);
            if ((int)local_58[0] < 1) {
              plVar8 = &DAT_1419df7b0;
LAB_14050ed49:
              local_110 = (undefined4)*plVar8;
              uStack_10c = *(undefined4 *)((longlong)plVar8 + 4);
              uStack_108 = (undefined4)plVar8[1];
              uStack_104 = *(undefined4 *)((longlong)plVar8 + 0xc);
              if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_f8);
              }
              FUN_140041b80(&local_f8,&local_110);
            }
            else {
              plVar8 = (longlong *)*local_50;
              if (plVar8 != &local_f8) goto LAB_14050ed49;
            }
            local_98 = &local_f8;
            local_90 = &local_68;
            if ((int)local_58[0] < 3) {
              puVar11 = &DAT_1419df7b0;
LAB_14050ed9f:
              local_110 = *(undefined4 *)puVar11;
              uStack_10c = *(undefined4 *)((longlong)puVar11 + 4);
              uStack_108 = *(undefined4 *)(puVar11 + 1);
              uStack_104 = *(undefined4 *)((longlong)puVar11 + 0xc);
              if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_d8);
              }
              FUN_140041b80(&local_d8,&local_110);
            }
            else {
              puVar11 = (undefined8 *)local_50[2];
              if (puVar11 != &local_d8) goto LAB_14050ed9f;
            }
            local_88 = &local_d8;
            if ((int)local_58[0] < 4) {
              puVar11 = &DAT_1419df7b0;
LAB_14050eded:
              local_110 = *(undefined4 *)puVar11;
              uStack_10c = *(undefined4 *)((longlong)puVar11 + 4);
              uStack_108 = *(undefined4 *)(puVar11 + 1);
              uStack_104 = *(undefined4 *)((longlong)puVar11 + 0xc);
              if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_c8);
              }
              FUN_140041b80(&local_c8,&local_110);
            }
            else {
              puVar11 = (undefined8 *)local_50[3];
              if (puVar11 != &local_c8) goto LAB_14050eded;
            }
            local_80 = &local_c8;
            if ((int)local_58[0] < 5) {
              puVar11 = &DAT_1419df7b0;
LAB_14050ee3b:
              local_110 = *(undefined4 *)puVar11;
              uStack_10c = *(undefined4 *)((longlong)puVar11 + 4);
              uStack_108 = *(undefined4 *)(puVar11 + 1);
              uStack_104 = *(undefined4 *)((longlong)puVar11 + 0xc);
              if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_b8);
              }
              FUN_140041b80(&local_b8,&local_110);
            }
            else {
              puVar11 = (undefined8 *)local_50[4];
              if (puVar11 != &local_b8) goto LAB_14050ee3b;
            }
            local_78 = &local_b8;
            if ((int)local_58[0] < 6) {
              puVar11 = &DAT_1419df7b0;
LAB_14050ee89:
              local_110 = *(undefined4 *)puVar11;
              uStack_10c = *(undefined4 *)((longlong)puVar11 + 4);
              uStack_108 = *(undefined4 *)(puVar11 + 1);
              uStack_104 = *(undefined4 *)((longlong)puVar11 + 0xc);
              if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_a8);
              }
              FUN_140041b80(&local_a8,&local_110);
            }
            else {
              puVar11 = (undefined8 *)local_50[5];
              if (puVar11 != &local_a8) goto LAB_14050ee89;
            }
            puVar11 = &local_178;
            uVar7 = 6;
            pplVar9 = &local_98;
            local_70 = &local_a8;
          }
          FUN_140e63610(param_1,param_2,puVar11,uVar7,uVar6,pplVar9);
        }
        local_128 = 0x39a;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        *(undefined4 *)((longlong)param_3 + 0xc) = 6;
        *param_3 = param_1;
        uVar6 = FUN_140e5c910();
        FUN_140e42c10(uVar6,param_1);
        goto LAB_14050f0c2;
      }
    }
    local_128 = 0x373;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
    local_110 = _DAT_141dd3ba8;
    uStack_10c = uRam0000000141dd3bac;
    uStack_108 = uRam0000000141dd3bb0;
    uStack_104 = DAT_141dd3bb4;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_110);
    local_90 = &local_e8;
    FUN_140e63610(param_1,param_2,&local_158,1,uVar6,&local_90);
    local_128 = 0x374;
    if (param_3 == &DAT_1419df7b0) goto LAB_14050f0c2;
    local_110 = (undefined4)DAT_1419df7b0;
    uStack_10c = DAT_1419df7b0._4_4_;
    uStack_108 = DAT_1419df7b8;
    uStack_104 = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    puVar11 = (undefined8 *)&local_110;
  }
  FUN_140041b80(param_3,puVar11);
LAB_14050f0c2:
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,6,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar11 = local_50;
    do {
      puVar10 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 1) = 0;
      *(undefined4 *)((longlong)puVar10 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

