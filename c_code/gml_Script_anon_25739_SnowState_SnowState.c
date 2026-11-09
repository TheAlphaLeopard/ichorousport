// gml_Script_anon_25739_SnowState_SnowState @ 0x14050b310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_25739_SnowState_SnowState(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  double dVar14;
  undefined4 uVar15;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  uint local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  undefined4 local_140;
  uint local_13c;
  double local_138;
  undefined4 local_130;
  uint local_12c;
  longlong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  double local_100;
  undefined4 local_f8;
  uint local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_68 [12];
  byte local_5c;
  int local_58;
  
  local_110 = "gml_Script_anon@23748@SnowState@SnowState";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x2fc;
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_f4 = 0xffffff;
  local_100 = 0.0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_16c = 0;
  local_178 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x2fd;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcbe8);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar6 != &local_128) {
    local_158 = *plVar6;
    uStack_150 = plVar6[1];
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  local_108 = 0x2ff;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
  if (plVar6 != &local_a8) {
    local_158 = *plVar6;
    uStack_150 = plVar6[1];
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_158);
  }
  local_d8 = &local_128;
  uVar10 = CONCAT44(uVar15,DAT_1419fcba8);
  local_e0 = &local_a8;
  uVar7 = FUN_140e634e0(param_1,param_2,&local_178,2,uVar10,&local_e0);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 == '\0') {
    local_108 = 0x301;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd68);
    local_158 = _DAT_141dd3b78;
    uStack_150 = uRam0000000141dd3b80;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_158);
    local_d0 = &local_88;
    local_c8 = &local_128;
    local_158 = _DAT_141dd3b98;
    uStack_150 = lRam0000000141dd3ba0;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_158);
    local_c0 = local_68;
    FUN_140e63610(param_1,param_2,&local_b8,3,uVar7,&local_d0);
    local_108 = 0x303;
  }
  else {
    local_108 = 0x308;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcee8);
    iVar4 = 0;
    if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
      iVar4 = *(int *)(*plVar8 + 0x24);
    }
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    local_f4 = 0;
    local_100 = (double)iVar4;
    local_108 = 0x309;
    local_158 = CONCAT44(DAT_141dd3998._4_4_,(undefined4)DAT_141dd3998);
    uStack_150 = CONCAT44(DAT_141dd39a4,DAT_141dd39a0);
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_158);
    local_108 = 0x30a;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_15c = 0;
    local_168 = 0.0;
    if ((local_f4 & 0xffffff) == 0) {
      dVar14 = local_100;
    }
    else {
      dVar14 = (double)FUN_140e4b060(&local_100);
    }
    uVar15 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar13 = (ulonglong)dVar14;
    if (0 < (int)uVar13) {
      do {
        uVar12 = (int)uVar13 - 1;
        uVar13 = (ulonglong)uVar12;
        local_108 = 0x30b;
        plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcee8);
        iVar4 = FUN_140e4a740(&local_168);
        if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0))
        {
          if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar9 = (longlong *)0x0;
          }
          else {
            plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        iVar4 = FUN_140e851f0(plVar9,&local_128,DAT_141955260,0);
        uVar15 = (undefined4)((ulonglong)uVar10 >> 0x20);
        if (iVar4 == 0) break;
        local_108 = 0x30c;
        uVar5 = local_15c & 0xffffff;
        if (uVar5 == 0) {
LAB_14050b801:
          local_168 = local_168 + 1.0;
        }
        else {
          if (uVar5 == 1) {
            local_168 = (double)FUN_140e4b060(&local_168);
            local_15c = 0;
            goto LAB_14050b801;
          }
          if (uVar5 == 7) {
            local_168 = (double)CONCAT44(local_168._4_4_,(int)local_168 + 1);
          }
          else if (uVar5 == 10) {
            local_168 = (double)((longlong)local_168 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_15c = 0;
              goto LAB_14050b801;
            }
            FUN_140042910(&DAT_14172c3d8,&local_168,&local_168);
          }
        }
        uVar15 = (undefined4)((ulonglong)uVar10 >> 0x20);
      } while (0 < (int)uVar12);
    }
    local_108 = 0x30f;
    iVar4 = FUN_140e851f0(&local_168,&local_100,DAT_141955260,1);
    if (iVar4 != -2 && iVar4 < 0) {
      local_108 = 0x310;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      local_e0 = &local_128;
      uVar7 = CONCAT44(uVar15,DAT_1419fcb18);
      uVar10 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar7,&local_e0);
      FUN_1400460e0(&local_f0,uVar10);
      local_108 = 0x311;
      local_13c = local_f4;
      local_140 = local_f8;
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) == 0) {
        local_148 = local_100;
      }
      else {
        FUN_1400419b0(&local_148,&local_100);
      }
      FUN_1400462a0(&local_148,&local_168);
      local_12c = local_13c;
      local_130 = local_140;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
        local_138 = local_148;
      }
      else {
        FUN_1400419b0(&local_138,&local_148);
      }
      uStack_150 = CONCAT44(7,(undefined4)uStack_150);
      local_158 = CONCAT44(local_158._4_4_,1);
      FUN_1400462a0(&local_138,&local_158);
      if ((1 << ((byte)((ulonglong)uStack_150 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      iVar4 = FUN_140e4a740(&local_138);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      while (uVar15 = (undefined4)((ulonglong)uVar7 >> 0x20), 0 < iVar4) {
        local_58 = iVar4 + -1;
        local_108 = 0x312;
        uVar12 = local_15c & 0xffffff;
        if (uVar12 == 0) {
LAB_14050ba59:
          local_168 = local_168 + 1.0;
        }
        else {
          if (uVar12 == 1) {
            local_168 = (double)FUN_140e4b060(&local_168);
            local_15c = 0;
            goto LAB_14050ba59;
          }
          if (uVar12 == 7) {
            local_168._4_4_ = (undefined4)((ulonglong)local_168 >> 0x20);
            local_168 = (double)CONCAT44(local_168._4_4_,(int)local_168 + 1);
          }
          else if (uVar12 == 10) {
            local_168 = (double)((longlong)local_168 + 1);
          }
          else {
            if (uVar12 == 0xd) {
              local_15c = 0;
              goto LAB_14050ba59;
            }
            FUN_140042910(&DAT_14172c3d8,&local_168,&local_168);
          }
        }
        local_108 = 0x313;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcee8);
        iVar4 = FUN_140e4a740(&local_168);
        if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0))
        {
          if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (plVar6 != &local_a8) {
          local_158 = *plVar6;
          uStack_150 = plVar6[1];
          if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a8);
          }
          FUN_140041b80(&local_a8,&local_158);
        }
        local_13c = DAT_141dd3be4;
        local_140 = DAT_141dd3be0;
        if ((1 << ((byte)DAT_141dd3be4 & 0x1f) & 0x46U) == 0) {
          local_148 = DAT_141dd3bd8;
          local_e0 = &local_a8;
        }
        else {
          local_e0 = &local_a8;
          FUN_1400419b0(&local_148,&DAT_141dd3bd8);
        }
        uVar12 = local_13c;
        uVar2 = local_140;
        dVar14 = local_148;
        uVar7 = CONCAT44(uVar15,DAT_1419fcb18);
        uVar10 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar7,&local_e0);
        uVar5 = 1 << ((byte)uVar12 & 0x1f) & 0x46;
        local_130 = uVar2;
        local_12c = uVar12;
        if (uVar5 == 0) {
          local_138 = dVar14;
        }
        else {
          FUN_1400419b0(&local_138,&local_148);
        }
        FUN_1400460e0(&local_138,uVar10);
        FUN_1400460e0(&local_f0,&local_138);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        if (uVar5 != 0) {
          FUN_140041a50(&local_148);
        }
        iVar4 = local_58;
      }
      local_108 = 0x315;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      local_e0 = &local_128;
      local_13c = DAT_141dd3be4;
      local_140 = DAT_141dd3be0;
      if ((1 << ((byte)DAT_141dd3be4 & 0x1f) & 0x46U) == 0) {
        local_148 = DAT_141dd3bd8;
      }
      else {
        FUN_1400419b0(&local_148,&DAT_141dd3bd8);
      }
      uVar12 = local_13c;
      uVar2 = local_140;
      dVar14 = local_148;
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,CONCAT44(uVar15,DAT_1419fcb18),&local_e0);
      uVar5 = 1 << ((byte)uVar12 & 0x1f) & 0x46;
      local_130 = uVar2;
      local_12c = uVar12;
      if (uVar5 == 0) {
        local_138 = dVar14;
      }
      else {
        FUN_1400419b0(&local_138,&local_148);
      }
      FUN_1400460e0(&local_138,uVar7);
      FUN_1400460e0(&local_f0,&local_138);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if (uVar5 != 0) {
        FUN_140041a50(&local_148);
      }
      local_108 = 0x316;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
      local_158 = _DAT_141dd3a68;
      uStack_150 = uRam0000000141dd3a70;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_158);
      local_158 = _DAT_141dd3b28;
      uStack_150 = lRam0000000141dd3b30;
      local_e0 = &local_a8;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_158);
      local_d8 = &local_98;
      local_d0 = &local_f0;
      FUN_140e63610(param_1,param_2,&local_178,3,uVar7,&local_e0);
      local_108 = 0x318;
      if (param_3 != &DAT_1419df7b0) {
        local_158 = DAT_1419df7b0;
        uStack_150 = _DAT_1419df7b8;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_158);
      }
      goto LAB_14050c317;
    }
    local_108 = 0x31c;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if (plVar8 != &local_a8) {
      local_158 = *plVar8;
      uStack_150 = plVar8[1];
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_158);
    }
    local_d8 = &local_128;
    uVar7 = CONCAT44(uVar15,DAT_1419fe568);
    local_e0 = &local_a8;
    FUN_140e634e0(param_1,param_2,&local_178,2,uVar7,&local_e0);
    uVar15 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_108 = 0x31d;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if (plVar6 != &local_a8) {
      local_158 = *plVar6;
      uStack_150 = plVar6[1];
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_158);
    }
    local_d8 = &local_128;
    local_e0 = &local_a8;
    plVar6 = (longlong *)
             FUN_140e634e0(param_1,param_2,&local_178,2,CONCAT44(uVar15,DAT_141a01138),&local_e0);
    if (plVar6 != &local_128) {
      local_158 = *plVar6;
      uStack_150 = plVar6[1];
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_158);
    }
    local_108 = 0x31e;
    puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcbe8);
    FUN_140e609c0(param_1);
    plVar6 = (longlong *)FUN_140e48e40(puVar11,0);
    FUN_140e609c0(*(undefined8 *)*puVar11);
    if (&local_128 != plVar6) {
      uStack_150 = CONCAT44(uStack_11c,uStack_120);
      local_158 = local_128;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar6);
      }
      FUN_140041b80(plVar6,&local_158);
    }
    FUN_140e60910(2);
    local_108 = 799;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcb68);
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcfb8);
    if (plVar6 != &local_a8) {
      local_158 = *plVar6;
      uStack_150 = plVar6[1];
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_158);
    }
    local_e0 = &local_a8;
    FUN_140e63610(param_1,param_2,&local_178,1,uVar7,&local_e0);
    uVar15 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) &&
       (0 < *(int *)(*plVar8 + 0x24))) {
      local_108 = 800;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      (**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
      plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcee8);
      puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcbe8);
      if (plVar6 != &local_a8) {
        local_158 = *plVar6;
        uStack_150 = plVar6[1];
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_158);
      }
      local_e0 = &local_a8;
      FUN_140e609c0(param_1);
      plVar6 = (longlong *)FUN_140e48e40(puVar11,0);
      FUN_140e609c0(*(undefined8 *)*puVar11);
      plVar8 = (longlong *)
               FUN_140e634e0(param_1,param_2,&local_178,1,CONCAT44(uVar15,DAT_141a08f88),&local_e0);
      if (plVar8 != plVar6) {
        local_158 = *plVar8;
        uStack_150 = plVar8[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar6);
        }
        FUN_140041b80(plVar6,&local_158);
      }
      FUN_140e60910(2);
    }
    local_108 = 0x322;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar7 = FUN_140e5c910();
  FUN_140e42c10(uVar7,param_1);
LAB_14050c317:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

